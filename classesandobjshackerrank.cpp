#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Student {
    private: 
    vector<int> scores;
    
    public: 
    
    void input() {
        for (int i = 0; i < 5; i++) {
            int x; 
            cin >> x; 
            scores.push_back(x); 
        }
    }
    
    int calculateTotalScore() {
        int r = 0;
        for (int i = 0; i < 5; i++) {
            r = r + scores[i]; 
        }
        return r; 
    }
       
};

int main() {
    int numStudents; 
    cin >> numStudents; 
    
    Student Kristen; 
    Kristen.input(); 
    int KristenScore = Kristen.calculateTotalScore(); 
    int higherThanKristen = 0; 
    for (int i = 1; i < numStudents; i++) {
        Student studentA;
        studentA.input(); 
        int temp = studentA.calculateTotalScore(); 
        if (temp > KristenScore) {
            higherThanKristen++; 
        }
    }
    cout << higherThanKristen << endl;
    return 0;
}

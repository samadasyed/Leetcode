#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Student {
    private:
    int age; 
    string first_name; 
    string last_name;
    int standard;  
    public: 
    void setAge(int a) {
        age = a; 
    }
    void setFirstName(string a) {
        first_name = a; 
    }
    void setLastName(string a) {
        last_name = a; 
    }
    void setStandard(int a) {
        standard = a; 
    }
    int getAge() {
        return age; 
    }
    string getFirstName() {
        return first_name;
    }
    string getLastName(){
        return last_name; 
    }
    int getStandard() {
        return standard; 
    }
    string print_string() {
        return to_string(age) + "," + first_name + 
        "," + last_name + "," + to_string(standard); 
    }
};

int main() {
    Student student1; 
    
    int y; 
    cin >> y;
    student1.setAge(y); 
    
    string z;
    cin >> z;  
    student1.setFirstName(z);
    
    string x;
    cin >> x;  
    student1.setLastName(x);
    
    int a; 
    cin >> a; 
    student1.setStandard(a); 
    
    cout << student1.getAge() << endl; 
    cout << student1.getLastName() << ", "; 
    cout << student1.getFirstName() << endl; 
    
    cout << student1.getStandard() << endl;
    cout << "\n";
    
    cout <<student1.print_string() << endl;
    return 0;
}

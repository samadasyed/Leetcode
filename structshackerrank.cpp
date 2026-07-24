#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


struct Student {
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main() {
    Student student1; 
    
    cin >> student1.age; 
    cin >> student1.first_name;
    cin >> student1.last_name;
    cin >> student1.standard; 
    
    cout << student1.age << " " << student1.first_name 
    << " " << student1.last_name << " " << student1.standard;
    
    return 0;
}


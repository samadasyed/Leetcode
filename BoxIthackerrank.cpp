#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Box {
    private:
    int l; //length
    int b; //breadth
    int h; //height
    
    public:
    Box() {
        l = 0;
        b = 0; 
        h = 0;
    }
    Box(int length, int breadth, int height) {
        l = length; 
        b = breadth; 
        h = height; 
    }
    Box (Box &B) {
        l = B.l; 
        b = B.b;
        h = B.h;
    }
    int getLength() {
        return l; 
    }
    int getBreadth() {
        return b;
    }
    int getHeight() {
        return h; 
    }
    long long CalculateVolume() {
        return l*b*h; 
    }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

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
    int getLength() const{
        return l; 
    }
    int getBreadth() const{
        return b;
    }
    int getHeight() const{
        return h; 
    }
    long long CalculateVolume() {
        return l*b*h; 
    }
    bool operator<(const Box& other) const {
        if (l < other.l) {
            return true; 
        }
        if (b < other.b &&
            l == other.l) {
                return true; 
            }
        if (h < other.h &&
            b == other.b &&
            l == other.l) {
                return true; 
            }
            return false; 
    }
    friend std::ostream& operator<<(std::ostream& os, const Box& p);
                      
};

ostream& operator<<(std::ostream& os, const Box& p) {
    os << p.l << " " << p.b << " " << p.h <<endl;
    return os; 
    }
     
int main() {
    int n;
    cin >> n; 
    
    Box current;
    
    while(n--) {
        int query; 
        cin >> query;
        switch (query) {
            case 1: {
                cout << current;
                break;
            }
            
            case 2: {
                int l, b, h; 
                cin >> l >> b >> h; 
                current = Box(l,b,h);
                cout << current; 
                break; 
            } 
            
            case 3: {
                int l, b, h; 
                cin >> l >> b >> h; 
                if (Box(l, b, h) < current) {
                    cout << "Lesser" << endl;
                }
                else {
                    cout << "Greater" << endl;
                }
                break;
            } 
            
            case 4: {
                long long x = 1LL * current.getLength() * current.getBreadth() 
                * current.getHeight();
                cout << x << endl; 
                break;
            } 
            
            case 5: {
                current = Box(current);
                cout << current;
                break;
            } 
        }
        
    }   
    return 0;
}

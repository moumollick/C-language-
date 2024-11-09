#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int a, b, c; 
        cin >> a >> b >> c;
        
        int totalStudents = a * b;
        
        if (c > totalStudents / 2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

#include <iostream>

using namespace std;

int sum (int a[3], int b[3])
 {return a[3] +  b[3];}
 
int main()
{    
        int a[3];
        int b[3];
        int s[3];

        cout << "первый массив: " << endl;
        for (int i = 0; i < 3; i++) {
            cout << "[" << i + 1 << "]" << ": ";
            cin >> a[i];
        }

        cout << "второй массив: " << endl;
        for (int i = 0; i < 3; i++) {
            cout << "[" << i + 1 << "]" << ": ";
            cin >> b[i];
        }
        
        
     cout << "сумма массивов: " << s[3];

        return 0;
}

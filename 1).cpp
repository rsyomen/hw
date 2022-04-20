#include <iostream>

using namespace std;

int main()
{    
        int a[5];
        int b[5];
        int s[5];

        cout << "первый массив: " << endl;
        for (int i = 0; i < 5; i++) {
            cout << "[" << i + 1 << "]" << ": ";
            cin >> a[i];
        }

        cout << "второй массив: " << endl;
        for (int i = 0; i < 5; i++) {
            cout << "[" << i + 1 << "]" << ": ";
            cin >> b[i];
        }
            
        cout << "сумма массивов: ";

        for (int i=0; i<5; i++ ) {
            s[i]= a[i]+b[i];
            cout << s[i] ;
        }
        
        cout << endl;

        return 0;
}

#include <iostream>
using namespace std;

int division (int x, int y)
{ 
    while (y != 0) {
        return (x / y);
        } throw "невозможно деление на 0";
}

int main()

{ 
    int x; 
    cout << "введите первое число = " ;
    cin >> x;
    int y;
    cout << "введите второе число = ";
    cin >> y;
    
    try {
        int n = division (x, y);
        cout << n;
    }
    
    catch (const char* i) {
        cout << i << " - ошибка" << endl;
    }

return 0;

}

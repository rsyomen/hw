1)
#include <iostream>
using namespace std;

int main()
{
    int a, b, c; 
    cout <<"Введите первое число: ";
    cin >> a;
 if ( a!=0) 
 { cout <<"введите второе число: ";
    cin >> b;
    cout<< "Введите третье число: ";
    cin >> c;
    int x= (c-b)/a;
    cout <<"Корень уравнения: " << x << endl;
 }
    return 0;
   
}

2)
  
#include <iostream>
using namespace std;

int main()
{
    double a; 
    cout << "Введите число" ;
    cin >> a;
    if ( a>0) { 
        cout <<"Число положительное" ;
    } else if ( a==0) {
        cout << "Число равно нулю" ;
    } else {
        cout <<"Число отрицательное" ;
    }
    return 0;
   
}

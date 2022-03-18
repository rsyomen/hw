2) но у меня не получается вывести все ли положительные 
  #include <iostream>
using namespace std;

int main()
{
    int a, pos=0, neg=0;
    cout <<"введите числа" ;
    
    while (a!=0)
    { cin >> a;
    if (a>0) pos++;
    else if (a<0) neg++;
    else break;
    }
    if (a>0) cout <<"all positive" << endl; 
    else cout <<"not all positive" << endl;
    
return 0;
}

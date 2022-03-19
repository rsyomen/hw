1)но максимальный и минимальный элемент не переставлен
  
#include <iostream>
using namespace std;

  int main()
{
  int massiv[8] = {1, 3, 32, 4, 48, 11, 5, -9 };
  for (int i=0; i<8; i++ )  cout << massiv[i]<< endl;
        
  int max = massiv[0];
   for (int i = 0; i < 8; ++i) 
   {
        if (massiv[i] > max) 
        {  max = massiv[i];  }
    }
    cout <<" максимальный"<<" "<< max << endl;
    
    int min = massiv[0];
    for (int i=0; i<8; i++) 
    {
        if (massiv[i] < min)
        {  min = massiv[i];  }
    }
    cout <<" минимальный  "<< min  << endl;
    
    int c;
    c=massiv[min];
    massiv[min]=massiv[max];
    massiv[max]=c;
    
    for (int i = 0; i < 8; i++)
    {    cout << massiv[i] << endl;}  
    return 0;
}

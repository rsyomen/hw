#include <iostream>
using namespace std;

struct Branch
{
 int D;
 Branch* Left; 
 Branch* Right;

};
void add(int aD, Branch*& aBranch)
{
 if (!aBranch)
 {
  aBranch = new Branch;
  aBranch->D = aD;
  aBranch->Left = 0;
  aBranch->Right = 0;
  return;
 }
 else
 {
  if (aD > aBranch->D) {
   add(aD, aBranch->Left);
  }
  else if (aD < aBranch->D) {
   add(aD, aBranch->Right);
  }
 }
}
void dic(Branch* aBranch)
{
 if (aBranch != NULL) {      
  dic(aBranch->Left);  
  cout << aBranch->D << " "; 
  dic(aBranch->Right); 
 }

}
void inc(Branch* aBranch)
{
 if (aBranch != NULL) {      
  inc(aBranch->Right);  
  cout << aBranch->D << " "; 
  inc(aBranch->Left); 
 }

}
int main()
{
 setlocale(LC_ALL, "rus");
 Branch* Root = 0;
 int e;
 int a[8];
 for (int i = 0; i < 8; i++) {
  cout << "Введите числа: ";
  cin >> e;
  add(e, Root);
  a[i] = e;
 }
 cout << endl;
 cout << "В порядке убывания: " << endl;
 dic(Root);
 cout << endl;
 cout << "В порядке возростания: " << endl;
 inc(Root);
 return 0;
}

#include <iostream>
using namespace std;

void sort (int *massiv, int razm) {
    int b;
    for (int i=0; i<razm; i++) {
        for (int j=0; j<razm-1; j++) {
            if (massiv [j] > massiv [j+1]){
                b=massiv [j];
                massiv [j] = massiv [j+1];
                massiv [j+1] = b; 
            }
        }
    }
}

int main()
  
{
    int *massiv;
    int razm;
    cout << "razmer = ";
    cin >> razm;
    massiv = new int [razm];
    
    for (int i=0; i<razm; i++) {
        cout << "massiv [" << i << "] = ";
        cin >> massiv [i];
    }
    
    sort (massiv, razm);
    
    for (int i=0; i<razm; i++) {
        cout << massiv [i] << " ";
    }

    return 0;
}

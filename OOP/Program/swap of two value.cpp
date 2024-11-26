#include <iostream>
using namespace std;

void swap(int* a, int* b) {
    int temp = *a; 
    *a = *b;      
    *b = temp;      
}

int main() {
    int x,y;
    cout<<"Enter the first value = ";
    cin>>x;
    
    cout<<"Enter the second value = ";
    cin>>y;
    
   cout<<"\n\nVALUES AFTER EXCHANGE"<<endl;
   
   cout<<endl;

    
    swap(&x, &y);

   
    cout<<"First value = "<<x<<endl;
    cout<<"Second value = "<<y<<endl;
}

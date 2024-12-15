#include<iostream>
using namespace std;

int factorial(int number){
    if(number<0){
        return 0;
    }
    else if(number==0||number==1){
        return 1;
    }
    else{
        return number*factorial(number-1);
    }
}

main(){
    int value;
    cout<<"Enter the value for Factorial::>";
    cin>>value;
    int result=factorial(value);
    cout<<"Factorial of "<<value<<" is "<<result;

}
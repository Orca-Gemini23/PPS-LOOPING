// Roll_ no : E224
#include<iostream>
#include <math.h>
using namespace std;
int main(){
    int num, i, sum = 0;
    do{
        cout << "Enter the numbers: ";
        cin >> num;
        if(num % 3 == 0){
            cout << "Critera unsatisfied" << endl;
            break;
        }
        else if(num < 0){
            cout << "No negative numbers allowed "<< endl;
            break;
        }
        else{
            sum = sum + num;
            cout << sum << endl;
            i = i + 1;
        }
        
    }while(num > 0);
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int num;
    cin >> num;

    if (num <= 1) {
        cout << "number is not prime";
        return 0;
    }

    for(int i=2; i<num; i++){
        if(num % i == 0){
            cout << "number is not prime";
            return 0;
        }
    }
    cout << "number is prime";
    return 0;
}

int optimised(int num){
    if (num <= 1) {
        cout << "number is not prime";
        return 0;
    }

    for(int i=2; i * i<=num; i++){
        if(num % i  == 0){
            cout << "number is not prime";
            return 0;
        }
    }
    cout << "number is prime";
}
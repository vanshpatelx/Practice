#include<iostream>
using namespace std;
// iterative method
int slow(int num){
    int sum = 0;
    for(int i=1; i<=num; i++){
        sum += i;
    }
    cout << "Sum : " << sum << endl;
    return 0;
}

// optimised method - maths
int faster(int num){
    int sum = num * (num + 1) / 2;
    cout << "Sum : " << sum << endl;
    return 0;
}

int main(){
    int num;
    cin >> num;

    slow(num);
    faster(num);
    
    return 0;
}
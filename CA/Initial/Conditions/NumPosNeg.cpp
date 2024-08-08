#include<iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    if(num > 0){
        cout << "+Ve";
    }else if(num < 0){
        cout << "-Ve";
    }else{
        cout << "Zero";
    }
    return 0;
}
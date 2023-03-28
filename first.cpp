#include<bits/stdc++.h>
using namespace std;

void power(int a, int b){
    int p=1;
    for(int i=0; i<b; i++){
        p=p*a;
    }

    cout << a <<" raise to " <<b <<" = " <<p <<endl;
}

int main(){

    cout <<"This is Nikhil" <<endl;

    int x, y;
    cout <<"Enter two numbers: ";
    cin >>x >>y;
    
    power(x, y);
}
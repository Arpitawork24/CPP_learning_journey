#include<iostream>
using namespace std;
// created function-
void printn(int n){
    for (int i = 0; i<n;i++){
        for (int j = 0; j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main (){

    int n;
    cin >> n;
    // used function
    printn(n);

    return 0;
}
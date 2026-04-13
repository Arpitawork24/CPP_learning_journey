#include <iostream>
using namespace std; //std will come by default now 

void Printname(string name){
    cout << "hello " << name ;
}

int main (){
    string name;
    cout<<"enter name: ";
    cin >> name;
    Printname(name);
    return 0;
}
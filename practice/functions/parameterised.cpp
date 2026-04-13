#include <iostream>
using namespace std; //std will come by default now 

void Printname(string name){
    cout << "hello " << name ;
}

int main (){
    string name1;
    cout<<"enter name1: ";
    cin >> name1;
    Printname(name1);

    string name2;
    cout<<"enter name2";
    cin >> name2;
    Printname(name2);
    return 0;
}
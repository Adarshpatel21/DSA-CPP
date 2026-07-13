#include<iostream>
#include<cstring>
using namespace std;

void revstr(char name[]){
    for(int i = strlen(name) - 1; i >= 0; i--){
        cout << name[i];
    }
    cout << endl;
}

int main(){
    char name[20];
    cout << "enter your name " << endl;
    cin >> name;
    cout << "your name is " << name << endl;
    cout << "reversed name is " << endl;
    revstr(name);
    return 0;
}
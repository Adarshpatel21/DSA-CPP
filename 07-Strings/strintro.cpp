#include<iostream>
using namespace std;

char toLowerCase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}

bool ispalindrome(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        if(name[s]!=name[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char name[],int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(toLowerCase(name[s]),toLowerCase(name[e]));
        s++;
        e--;
    }
}

int getlength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cout<<"enter your name "<<endl;
    cin>>name;
    //name[2]='\0';

    cout<<"your name is "<<name<<endl;
    int length=getlength(name);
    cout<<"length of your name is "<<getlength(name)<<endl;

    reverse(name,length);
    cout<<"reversed name is "<<name<<endl;


    if(ispalindrome(name,length)){
        cout<<"the name is a palindrome"<<endl;
    }
    else{
        cout<<"the name is not a palindrome"<<endl;
    }

    cout<<"character is "<<toLowerCase('a')<<endl;
    cout<<"character is "<<toLowerCase('C')<<endl;

    return 0;
} 
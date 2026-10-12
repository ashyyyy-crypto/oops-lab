#include<iostream>
#include<string>
using namespace std;

int main(){
   string s , length;
    cout<<"Enter a word : ";
    cin>>s;
     
    length = s.length();
    for(int i=0; i<length/2; i++){
        if(s[i] != s[length-i-1]){
            cout<<"Not a palindrome";
            return 0;
        }
    }
    cout<<"Palindrome";
}

    
     
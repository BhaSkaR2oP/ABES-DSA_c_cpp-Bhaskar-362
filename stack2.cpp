#include<bits/stdc++.h>
using namespace std;
char stack[1000];
int top=-1;
void push(char x){
    if(top==999)
    cout<<"Overflow"<<endl;
    else
    stack[++top]=x;
}
void pop(){
    if(top==-1)
    cout<<"Underflow"<<endl;
    else{
        x=stack[top--];
        return x;
    }
}
int main(){
    string exp;
    cout<<"Enter the expression"<<endl;
    cin>>exp;
    for(int i=0;i<exp.length();i++){
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
        push(exp[i]);
        else if(exp[i]==')'){
            if(stack[top]=='(')
            pop();
            else{
                cout<<"Not balanced"<<endl;
                return 0;
            }
        }
        else if(exp[i]=='}'){
            if(stack[top]=='{')
            pop();
            else{
                cout<<"Not balanced"<<endl;
                return 0;
            }
        }
        else if(exp[i]==']'){
            if(stack[top]=='[')
            pop();
            else{
                cout<<"Not balanced"<<endl;
                return 0;
            }
        }
    }
}
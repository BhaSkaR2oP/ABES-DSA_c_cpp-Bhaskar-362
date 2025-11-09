#include<bits/stdc++.h>
using namespace std;
int x,n;
int top=-1;
void push(int stack[],int n,int x){
    if(top==n-1)
    cout<<"Overflow"<<endl;
    else
    stack[++top]=x;
}
int pop(int stack[],int n){
    if(top==-1)
    cout<<"Underflow"<<endl;
    else{
        x=stack[top--];
        return x;
    }
}
void display(int stack[],int n){
    for(int i=top;i>=0;i--){
        cout<<stack[i]<<" ";
    }
    cout<<endl;
}
int main(){
    cout<<"enter the size of stack"<<endl;
    cin>>n;
    int stack[n];
    do
    {
        int choice;
        cout<<"Enter choice for: 1.PUSH  2.POP  3.DISPLAY"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"Enter element which is to be inserted"<<endl;
            cin>>x;
            push(stack,n,x);
            break;
        case 2:
            cout<<"Popped element is:"<<pop(stack,n)<<endl;
            break;
        case 3:
        display(stack,n);
            break;
        
        default:
            cout<<"Invalid choice"<<endl;
            break;
        }
    } while (x!=-1);
    
}
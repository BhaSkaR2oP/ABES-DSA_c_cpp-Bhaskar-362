#include <bits/stdc++.h>
using namespace std;
struct node{
    int cof;
    int pow;
    node* next;
};
node* createNode(int cof,int pow){
    node* n=new node;
    n->cof=cof;
    n->pow=pow;
    n->next=NULL;
    return n;
}
void insert(node*&head,int cof,int pow){
    node* n=createNode(cof,pow);
    if(!head){
        head=n;
        return;
    }
    node* t=head;
    while(t->next)t=t->next;
    t->next=n;
}
void display(node* head){
    if(!head){
        cout<<"0"<<endl;
        return;}
    node* t=head;
    while(t){
        cout<<t->cof<<"x^"<<t->pow;
        if(t->next&&t->next->cof>=0)cout<<" + ";
        else if(t->next)cout<<" ";
        t=t->next;
    }
    cout<<endl;
}
void addTerm(node*& head,int cof,int pow){
    node* t=head;
    node* prev=NULL;
    while(t){
        if(t->pow==pow){
            t->cof+=cof;
            return;
        }
        prev=t;
        t=t->next;
    }
    insert(head,cof,pow);
}
node* multiply(node* poly1,node* poly2){
    node* result=NULL;
    for(node* p1=poly1;p1;p1=p1->next){
        for(node* p2=poly2;p2;p2=p2->next){
            int c=p1->cof*p2->cof;
            int p=p1->pow+p2->pow;
            addTerm(result,c,p);
        }
    }
    return result;
}
int main(){
    node* poly1=NULL;
    node* poly2=NULL;
    int n1,n2,cof,pow;
    cout<<"Enter no of terms in Polynomial 1: ";
    cin>>n1;
    cout<<"Enter terms in descending order of powers:"<<endl;
    for(int i=0;i<n1;i++){
        cin>>cof>>pow;
        insert(poly1,cof,pow);
    }
    cout<<"Enter no of terms in Polynomial 2: ";
    cin>>n2;
    cout<<"Enter terms in descending order of powers:"<<endl;
    for(int i=0;i<n2;i++){
        cin>>cof>>pow;
        insert(poly2,cof,pow);
    }
    cout<<"Poly 1: ";
    display(poly1);
    cout<<"Poly 2: ";
    display(poly2);
    node* result=multiply(poly1,poly2);
    cout<<"Result(Poly 1 * Poly 2): ";
    display(result);
    return 0;
}


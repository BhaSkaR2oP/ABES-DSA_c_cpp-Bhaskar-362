#include<stdio.h>
int main(){
    int a[100]={1,655,65,5,453,3};
    int n,x;
    printf("position where new elemnt is to be added");
    scanf("%d",&n);
    printf("new elemnt");
    scanf("%d",&x);
    for(int i=6;i>=n;i--){
        a[i]=a[i-1];
    }
    a[n-1]=x;
    for (int i = 0; i < 7; i++)
    {
        /* code */
        printf("%d ",a[i]);
    }
    
    
    return 0;

}
#include<stdio.h>
int main(){
    int a[100]={1,655,65,5,453,3};
    int x,loc;
    printf("elemnt to be deleted");
    scanf("%d",&x);
    printf("elemnt pos");
    scanf("%d",&loc);
    for(int i=loc;i<6;i++){
        a[i]=a[i+1];
    }
    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("%d ",a[i]);
    }
    
    
    return 0;

}
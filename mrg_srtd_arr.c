#include<stdio.h>
int main(){
    int a[]={1,2,6};
    int b[]={3,4,5,7};
    int c[100];
    int i,j,k;
    i=0;
    j=0;
    k=0;
    while(i<3 && j<4){
        if(a[i]<=b[j]){
            c[k]=a[i];
            i++;
            k++;
        }
        else if(b[j]<a[i]){
            c[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<3){
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<4){
        c[k]=b[j];
        j++;
        k++;
    }
    for (int i = 0; i < 7; i++)
    {
        /* code */
        printf("%d ",c[i]);
    }
    return 0;

}
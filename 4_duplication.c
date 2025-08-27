#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,2,1,3};
    int max=0;
    for(int i=0;i<7;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int buffer[max+1];
    for(int i=0;i<=max;i++){
        buffer[i]=0;
    }
    for (int i = 0; i < 6; i++)
    {
        /* code */
        buffer[arr[i]]++;
        
    }
    for (int i = 1; i <=max; i++)
    {
        /* code */
        printf("%d\n",buffer[i]);
    }
    
    return 0;
}
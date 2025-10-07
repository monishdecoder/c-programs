// Q - Program for bubble sort an array in decreasing order
#include<stdio.h>
void bubble(int n,int a[]);
int main(){
    int n;
    printf("Enter the no. of elements in array :\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements : \n");
    for(int i = 0; i<=n-1; i++){
        scanf("%d",&a[i]);
    }
    bubble(n,a);
    for(int i = 0; i<=n-1; i++){
        printf("%d ",a[i]);
    }
    return 0;
}


void bubble(int n,int a[])
{
    for(int i=0 ; i<n-1 ; i++){
        for(int j=0 ; j<n-i-1 ; j++){
            if(a[j] < a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
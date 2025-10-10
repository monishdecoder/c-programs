// Q - Program to find 2nd larget elements in an sorted array
#include<stdio.h>
void bubble(int n,int a[]);
int largest2(int x[]);
void dupremove(int n,int x[],int y[]);
int main(){
    int n;
    printf("Enter the no. of elements in array :\n");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter the elements : \n");
    for(int i = 0; i<=n-1; i++){
        scanf("%d",&a[i]);
    }
    bubble(n,a);
    dupremove(n,a,b);
    int large2 = largest2(b);
    printf("%d is the second largest element in array",large2);
    return 0;
}

int largest2(int x[]){
    return x[1];
}

void dupremove(int n,int x[],int y[]){
    int u=0;
    y[0] = x[0];
    for(int i=1 ; i<=n ; i++){
        if(x[u]!=y[i]){
            u++;
            y[u]=x[i];
        }
    }
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
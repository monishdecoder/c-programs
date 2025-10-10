// Q - Program to sort and delete duplicate elemnts in an array
#include<stdio.h>
void bubble(int n,int a[]);
int dupremove(int n,int x[],int y[]);
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
    int count = dupremove(n,a,b);
    for(int i = 0; i<=count-1; i++){
        printf("%d ",b[i]);
    }
    return 0;
}

int dupremove(int n,int x[],int y[]){
    int u=0;
    y[0] = x[0];
    for(int i=1 ; i<=n ; i++){
        if(y[u]!=x[i]){
            u = u+1;
            y[u]=x[i];
        }
    }
    return u;
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
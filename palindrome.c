//PALINDROME BY LOOP
//palindrome means a no. that is equal to its reverse
//eg. 141,12321,555--->are palindrome
#include<stdio.h>
int rev(int n);
int main(){
    int r,n;
    printf("Enter the no : ");
    scanf("%d",&n);
    r = rev(n);
    if(r==n){
        printf("%d is a Palindrome",n);
    }
    else{
        printf("%d is not a Palindrome",n);
    }
    return 0;
}

int rev(int n){
    int rev=0,rem,num;
    num = n;
    while(num!=0){
        rem = num%10;
        rev = rev*10 + rem;
        num = num/10;
    }
    return rev;
}
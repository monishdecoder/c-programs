//PALINDROME BY RECURSION
//palindrome means a no. that is equal to its reverse
//eg. 141,12321,555--->are palindrome
#include<stdio.h>
int palrec(int n);
int main(){
    int num,rev;
    printf("Enter the number : ");
    scanf("%d",&num);
    rev = palrec(num);
    if(rev==num){
        printf("%d is a palindrome",num);
    }
    else
    {
        printf("%d is not a palindrome",num);
    }
    return 0;
}

int palrec(int n)
{
    static int rev = 0;
    if(n==0)
    {
        return rev;
    }
    rev = (rev*10) + (n%10);
    return palrec(n/10);
}
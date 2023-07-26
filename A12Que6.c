// 6. Write a recursive function to print first N even natural numbers in reverse order

#include<stdio.h>
void printnroddrev(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printnroddrev(n);

}
void printnroddrev(int n)

{
    if(n==1)
    {
        printf("2 ");
    }
    else
    {
        printf("%d ", 2*n);
        printnroddrev(n-1);
    }
}
// 1. Write a recursive function to print first N natural numbers

#include<stdio.h>
void printn(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printn(n);
}

void printn(int n)
{
    if(n==1)
        cout<<"1 ";
    else
    {
        printn(n-1);
        cout<<n<<" ";
    }
}

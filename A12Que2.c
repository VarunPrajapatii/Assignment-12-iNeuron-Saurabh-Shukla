// 2. Write a recursive function to print first N natural numbers in reverse order
#include<stdio.h>
void printnrev(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printnrev(n);
}

void printnrev(int n)
{
    if (n==1)
        cout<<"1";
    else
    {
        cout<<n<<" ";
        printnrev(n-1);
    }
    
}


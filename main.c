#include<stdio.h>
int main()
{
    int x = 18, m=6;
    printf("no. of guess are 6\n");
    printf("Enter a no to guess : ");
    int n;
    
    while (m>0)
    {
        scanf("%d",&n);
        if(n>x && m!=1){
             printf("WRONG !! , no of guess left %d\n",m-1);
            printf("Enter a smaller no : ");
            
        }    
        else if(n<x && m!=1){
             printf("WRONG !! , no of guess left %d\n",m-1);
            printf("Enter a Bigger no : ");
            
        }
        else if(n==x){ 
            printf("You won !! in %d attempts\n",6-m +1);
            return 0;
        }
        m = m-1;
    }
    printf("You loose !! Try again\n");
    return 0;
    
}

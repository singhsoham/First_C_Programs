//write a C program to check whether a number is prime or not
#include<stdio.h>
#include <windows.h> 
void red () {
  printf("\033[1;31m");
}
void blue(){
    printf("\033[0;34m");
}

void reset () {
  printf("\033[0m");
}

void yellow () 
{
  printf("\033[1;33m");
}

int main(){
    int n,x,c=0,bool=0;
    char ask;
    printf("This is a program that checks if the number you enter is prime or not,");
yahape:
    printf("\nEnter a number:");
    scanf("%d",&n);
    x=n;
    for(int i=1;i<=x;i++)
    {   
        if(x%i==0)
        {
            c++;
            bool = 1;
        }
       printf("\nChecking if %d is factor...\n",i);
       //sleep(1);
         if(bool==1){
             printf("\033[0;32m");
             printf("%d is a factor\n",i);
            printf("\033[0m");
            bool =0;
         }
        else 
        {
            printf("\033[0;31m");    //Set the text to the color red
            printf("%d is not a factor\n",i);  //Display Hello in red
            printf("\033[0m");
        }
        
    }
    blue();
    if(c==2){
        printf("\n%d is a prime number\n",n);
    }

    else printf("\n%d aint a prime number\n\n",n);
    
    reset();
        /*printf("Would you like to check another Number? (Y/N)\n");
    reset();

    scanf("%c",&ask);
    if(ask == 'Y' || ask =='y'){
        goto yahape;
    }
    return 0;*/
}


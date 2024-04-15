//to guess a random no 
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{   
    int n,random_no,guess,i,x;
    printf("  _______  ___________________  _______  ________   __  _______\n");
    printf(" / ___/ / / / __/ __/ __/  _/ |/ / ___/ / ___/ _ | /  |/  / __/\n");
    printf("/ (_ / /_/ / _/_\\ \\_/ \\_/ //    / (_ / / (_ / __ |/ /|_/ / _/  \n");
    printf("\\___/\\____/___/___/___/___/_/|_/\\___/  \\___/_/ |_|_/  /_/___/  \n");
    printf("Enter how many guessing nos should be there:");
    scanf("%d",&n);
    srand(time(NULL));//the time library is used in order to make the randomised no truly random as time changes constantly 
    random_no=rand()%n;

    printf("The numbers are in between 0 and %d\n",n);
    printf("Enter limits:");
    scanf("%d",&x);
    for(i=0;i<=x;i++)
    {
        printf("Enter the no :");
        scanf("%d",&guess);
    
        if(random_no==guess)
            {
                printf("Congrats,you've guessed the no!!!\n");
                printf("You've guessed this in %d times\n",i);
                break;
            }
        else if(abs(random_no-guess)<=5)//abs is used to get the absolute value so as to avoid getting negative values while comparing
            {
                printf("You're getting warmer to the no\n");
                int k=x-i;
                printf("You still have %d tries left\n",k);
            }
        else if(abs(random_no-guess)<=10)
            {
                printf("You're getting colder to the no\n");
                int k=x-i;
                printf("You still have %d tries left\n",k);
            }
         else if(abs(random_no-guess)<=3)
            {
                printf("You're really close to the no\n");
                int k=x-i;
                printf("You still have %d tries left\n",k);
            }
        
        else 
            {
            printf("you are way colder  to the no\n");
            int k=x-i;
                printf("You still have %d tries left\n",k);
        }
  }
        if(i>x)
        {
            printf("You've exhaushted the no of limits.\nThe random no is %d",random_no);
        }
    
    
    
}


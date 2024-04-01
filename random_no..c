//to guess a random no 
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{   
    int n,random_no,guess,i,x;
    printf("Enter how many guessing nos should be there:");
    scanf("%d",&n);
    srand(time(NULL));//the time library is used in order to make the randomised no truly random as time changes constantly 
    random_no=rand()%n;
    printf("Enter limits:");
    scanf("%d",&x);
    for(i=0;i<=x;i++)
        {
        printf("Enter the no :");
        scanf("%d",&guess);
    
        if(random_no==guess)
            {
                printf("Congrats,you've guessed the no!!!");
                break;
            }
        else if(abs(random_no-guess)<=5)//abs is used to get the absolute value so as to avoid getting negative values while comparing
            {
                printf("You're getting warmer to the no\n");
            }
        else if(abs(random_no-guess)<=10)
            {
                printf("You're getting colder to the no\n");
            }
        else 
            {
            printf("you are way colder  to the no\n");
            }
        }
    
    
    
}


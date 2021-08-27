#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,guess,nguesses=1;
    srand(time(0));
    number=rand()%100 + 1;//generate random number between 1 and 100n
    // printf("The number is %d\n",number);

    //running loop until no. guessed
    do
    {
        printf("guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess>number)
        {
            printf("Lower number please!\n");
        }
        else if (guess<number)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("Great! You guessed it in %d attempts\n",nguesses);
        }
        nguesses++;
        
    }   while (guess!=number);
    
    system("pause");
    return 0;
}
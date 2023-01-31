#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int random_number;
    int guess_the_number;
    int number_of_guesses=1;
    srand(time(0));

    random_number=rand()%100+1;
    // printf("The number is %d\n",random_number);
    do{
        printf("Guess the number between 1-100\n");
        scanf("%d",&guess_the_number);
        if(guess_the_number>random_number){
            printf("Lower Number Please !!!\n");             
        }
        else if(guess_the_number<random_number){
            printf("Higher Number Please !!!\n");             
        }
        else{
            printf("You guessed it in %d attempts",number_of_guesses);
        }
        number_of_guesses++;
}while(random_number!=guess_the_number);    
    return 0;
}
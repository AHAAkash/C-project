#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int random_num,guess_num;
  int num_of_guess = 0;
  srand(time(NULL));

  printf("Welcome to the world of Guessing Numbers\n");
  random_num = rand() %100 + 1; //Generating between 1 to 100 

  do{
    printf("\nPlease enter your guess between(1 to 100): ");
    scanf("%d", &guess_num);
    num_of_guess++;

    if (guess_num < random_num)
    {
      printf("Guess a larger number. \n");
    } else if (guess_num > random_num)
    {
      printf("Guess a smaller number. \n");
    }else{
      printf("Congratulations!! You have successfully guess the number in %d attempts", num_of_guess);
    } 
  }while (guess_num != random_num);

  printf("\nBye Bye, Thanks for playing.");
  printf("\nDeveloped by: Akash_21");

}
#include <stdio.h>
#include <stdlib.h>//for random no
#include <time.h>//every time random no when u run the program otherwise it will give same no every time.

int main() {
    int number,guess,nguess=1;
 srand(time(0));//every time different no
    number=rand()%100+1;//generates a no between 1 to 100 its a mathematics.
  //  printf("the no is = %d\n",number);
    //keep running the program until it is guissed
do{
    printf("guess the no betwn 1 to 100\n");
    scanf("%d",&guess);
    if(guess>number){
        printf("lower no please\n");
        
    }
    else if(guess<number){
        printf("higher no please\n");
        
    }
    else{
        printf("you guessed it in %d attempts",nguess);
       } nguess++;
}
while(guess!=number);
    
    
    return 0;
}
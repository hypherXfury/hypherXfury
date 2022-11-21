// This is written in C

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int my_run=0,cpu_run=0, num, cpu; // run to add score, num for user input cpu for cpu input

void userBatting(int n){
    srand(time(0)); // to generate random number in real time
    cpu=rand()%10; // %10 to generate between 0 to 9

    if(n==cpu){
        printf("User is out!! It's cpu's batting\n");
        cpuBatting(-1); //passing mine own random value :)
    }
    else{
        my_run+=n;
        printf("Cpu's number is : %d\n", cpu);
        scanf("%d", &n);
        printf("User number is : %d\n", n);
        userBatting(n);
    }
}

void cpuBatting(int n){
    srand(time(0));
    cpu=rand()%10;

    if(n==cpu){
        printf("Cpu is out!!\n");
        game(); // to show who won
    }

    else{
        cpu_run+=cpu;
        printf("Cpu number is : %d\n", cpu);
        scanf("%d", &n);
        printf("User number is : %d\n", n);
        cpuBatting(n);
    }
}

void game(){
    printf("User run = : %d\n", my_run);
    printf("Cpu run = : %d\n", cpu_run);
    if(my_run>cpu_run)
    printf("User won!!!\n");
    else
    printf("Cpu won!!!\n");
}

int main(){
    printf("Enter your number\n"); // user will bat first always
    scanf("%d", &num);
    userBatting(num); // function for user batting
}

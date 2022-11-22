/*
hello dosto, how to move character using W,A,S,D in
lets start
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h> // this header for getch()

int main(){
    /*
    im gonna make a boundary of 20 by 20 so at first our character will be at center
    means x=10, y=10
    */

   int x=10,y=10;

   while(1){
    //infinite untill I press 'X' to stop and exit from program

    // making boundary 

    system("cls"); // used this so that whenever this call it will clear our screen
    for(int i=0;i<20;i++){
        for(int j=0;j<20;j++){
            if(i==0||j==0||i==19||j==19){
                printf("#"); // outline is #
            }

            else{
                if(i==x&&j==y){
                    // our character position
                    printf("$"); // $ is our character
                }
                else
                    printf(" "); // print space if non of the condition satisfies, sorry :)
            }
        }
        printf("\n"); // leaving line after each inner loop
    }
    // now for input using keyboard

    switch(getch()){
        case 'a':
        y--;
        break;
        case 's':
        x++;
        break;
        case 'd':
        y++;
        break;
        case 'w':
        x--;
        break;

        case 'x':
        exit(1);// to exit and end while loop
    }
   }
}

//That's it!!! :)
/*
while moving our character boundary is blinking becasue at each call
boundary is drawing again and again.......


Thank you for watching :)
*/

/* Lacy H
Intro to C
9.25.20
Assignment 2 */

// this program will output corresponding Roman numerals based on user input

#include <stdio.h>
#include <stdlib.h>

int main() {
	
// defining variable to store user input for their number
int user_num;
printf("Enter a number between 1 and 20: ");
scanf("%d", &user_num);

// print statement that will show what the corresponding Roman numeral is
printf("Corresponding Roman Numeral = ");

// switch to print out the Roman numerals based on user input
switch (user_num) {
case 1:
printf("I\n");
break;
case 2:
printf("II\n");
break;
case 3:
printf("III\n");
break;
case 4:
printf("IV\n");
break;
case 5:
printf("V\n");
break;
case 6:
printf("VI\n");
break;
case 7:
printf("VII\n");
break;
case 8:
printf("VIII\n");
break;
case 9:
printf("IX\n");
break;
case 10:
printf("X\n");
break;
case 11:
printf("XI\n");
break;
case 12:
printf("XII\n");
break;
case 13:
printf("XIII\n");
break;
case 14:
printf("XIV\n");
break;
case 15:
printf("XV\n");
break;
case 16:
printf("XVI\n");
break;
case 17:
printf("XVII\n");
break;
case 18:
printf("XVIII\n");
break;
case 19:
printf("XIX\n");
break;
case 20:
printf("XX\n");
break;

// default scenario and error message incase user does not input an appropiate number
default:
printf("\n\nERROR - number inputted is outside of range.\n");

return 0;
exit(-1);
}
}

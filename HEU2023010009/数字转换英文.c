#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int one_digit,two_digit;
	int number;
	scanf("%d",&number);
	if(number>=20||number<10){
		two_digit = number / 10;
		one_digit = number % 10;
		switch(two_digit){
			case 9:printf("ninety-");
			break;
			case 8:printf("eighty-");
			break;
			case 7:printf("seventy-");
			break;
			case 6:printf("sixty-");
			break;
			case 5:printf("fivety-");
			break;
			case 4:printf("forty-");
			break;
			case 3:printf("thirty-");
			break;
			case 2:printf("twenty-");
			break;
			default:printf("......-");	
		}
		switch(one_digit){
			case 9:printf("nine");
			break;
			case 8:printf("eight");
			break;
			case 7:printf("seven");
			break;
			case 6:printf("six");
			break;
			case 5:printf("five");
			break;
			case 4:printf("four");
			break;
			case 3:printf("three");
			break;
			case 2:printf("two");
			break;
			case 1:printf("one");
			break;
			default:printf("......");	
		}
	}else{
		switch(number){
			case 10:printf("ten");
			break;
			case 11:printf("eleven");
			break;
			case 12:printf("twele");
			break;
			case 13:printf("thirteen");
			break;
			case 14:printf("fourteen");
			break;
			case 15:printf("fifteen");
			break;
			case 16:printf("sixteen");
			break;
			case 17:printf("seventeen");
			break;
			case 18:printf("eighteen");
			break;
			case 19:printf("nineteen");
			break;	
		}
	}
	return 0;
}

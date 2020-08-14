#include<stdio.h>
int main()
{
	int score;
	printf("Please insert your score : ");
	scanf_s("%d", &score);
	if ((score >= 80)&&(score<=100))
		printf("Your grade is A");
	else if ((score >= 75) && (score <= 79))
		printf("Your grade is B+");
	else if ((score >= 70) && (score <= 74))
		printf("Your grade is B");
	else if ((score >= 65) && (score <= 69))
		printf("Your grade is C+");
	else if ((score >= 60) && (score <= 64))
		printf("Your grade is C");
	else if ((score >= 55) && (score <= 59))
		printf("Your grade is C");
	else if ((score >= 50) && (score <= 54))
		printf("Your grade is D+");
	else if ((score >= 45) && (score <= 49))
		printf("Your grade is D");
	else if ((score <= 44))
		printf("Your grade is F");
	else if ((score > 100))
		printf("ERROR");
	return 0;
}

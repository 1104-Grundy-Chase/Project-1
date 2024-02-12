// Author: Chase Grundy
// Date: 2/10/2024
//Purpose: Display Snowfall Data in Proper Format/Calculate Total and Average Snowfall

#include <stdio.h>

int main(){
	//Declarations//
	double snowfall1 = 0.0, snowfall2 = 0.0, snowfall3 = 0.0;
	char day1, day2, day3;
	int date1, date2, date3;
	
	//Welcome//
	printf("\nHey there! Let's create a sample for the snowfall in your area. Remember, refer to the key when you input values and most importantly, stay warm!");
	
	//Key//
	printf("\n\nKey:\n For snowfall, type in either an integer or decimal value.\n For the day, type in a character (U, M, T, W, R, F, S).\n For the date, type in a number for the day of the month.");
	
	//Prompt One//
	printf("\n\nDays:\nEnter the snowfall values for Day 1 (inches, day, date): ");
	scanf("%lf, %c, %d", &snowfall1, &day1, &date1);
	
	//Prompt Two//
	printf("\nEnter the snowfall values for Day 2 (inches, day, date): ");
	scanf("%lf, %c, %d", &snowfall2, &day2, &date2);
	
	//Prompt Three//
	printf("\nEnter the snowfall values for Day 3 (inches, day, date): ");
	scanf("%lf, %c, %d", &snowfall3, &day3, &date3);
	
	//Calculation//
	double snowfalltotal = snowfall1 + snowfall2 + snowfall3;
	double average = snowfalltotal / 3;
	
	//Chart//
	printf("\n---SNOWFALL DATA TABLE---\n");
	printf("=================================================\n");
	printf("| DAY OF MONTH | WEEKDAY | SNOWFALL (in inches) |\n");
	printf("-------------------------------------------------\n");
	printf("| %d           | %c      | %lf               |\n", date1, day1, snowfall1);
	printf("-------------------------------------------------\n");
	printf("| %d           | %c      | %lf               |\n", date2, day2, snowfall2);
	printf("-------------------------------------------------\n");
	printf("| %d           | %c      | %lf               |\n", date3, day3, snowfall3);
	printf("-------------------------------------------------\n");
	printf("| TOTAL SNOWFALL: %lf                      |\n", snowfalltotal);
	printf("-------------------------------------------------\n");
	printf("| AVERAGE SNOWFALL: %lf                    |\n", average);
	printf("=================================================\n");
	
	
	 
	return 0;
}

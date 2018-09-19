/* this program was a personal problem solving excercize idea I had. It takes a users birth date and tells them how many years, days and 
hours old they are, given the current date. It isn't perfect because I made the calculations as if every month contained 30 days, so the 
results will be off by a few days. I still have to finish the portion that calculates hours when taking into account the hours since their
last birthday. for now though, I am taking a break on thisl. I came up with this idea to practice C and problem solving in general.*/

#include <stdio.h>

//these varriables will represent the date the user enters
int currentMonth;
int currentDay;
int currentYear;
	
//now we get the user's birthdate
int birthMonth;
int birthDay;
int birthYear;

//function declarations
void ageYears();
void ageDays();

int main(void)
{

//user inputs numbers that are assigned to each variable for the current date one at a time.
	printf("enter the current month\ni.e. 9: ");
	scanf("%d", &currentMonth);
	
	printf("enter the current day\ni.e. 7: ");
	scanf("%d", &currentDay);
	
	printf("enter the current year\ni.e. 2018: ");
	scanf("%d", &currentYear);
	
	printf("%d %d %d\n\n", currentMonth, currentDay, currentYear);
	
	
	
//user inputs numbers that are assigned to each variable for their birthday one at a time.
	printf("enter your birth month\ni.e. 9: ");
	scanf("%d", &birthMonth);
	
	printf("enter your birth day\ni.e. 24: ");
	scanf("%d", &birthDay);
	
	printf("enter your birth year\ni.e.1993\n");
	scanf("%d", &birthYear);
	
	printf("%d %d %d\n\n", birthMonth, birthDay, birthYear);
//executes a function to print out roughly how many years old the user is
	ageYears();

	
	return 0;
}

/********************************ageYears(), ageDays()********************************************/

//this function prints back the users age in years
void ageYears(){
	int yearsOld;
	int daysOld;
	int hoursOld;
	//variable to hold remainder days after last bday for that year
	int remainderDays;
	//yields the final result for how many days old someone is
	int daysOldFinal; 
	
	//if the current day is greater than or equal to bday and current month <= bday month
	
	if( currentDay >= birthDay && currentMonth >= birthMonth){
		yearsOld = (currentYear - birthYear);
		printf("you are %d years old \n", yearsOld);
	}
	else if( currentDay <= birthDay && currentMonth <= birthMonth ){
		yearsOld = (currentYear - birthYear - 1);
		printf("you are %d years old \n", yearsOld);
	}
	else if( currentDay > birthDay && currentMonth < birthMonth ){
		yearsOld = (currentYear - birthYear - 1);
		printf("you are %d years old \n", yearsOld);	
	}
	
	daysOld = ( yearsOld * 365 ) + (currentMonth *30) - currentDay;
	remainderDays = ( 12 * 30) - ( birthMonth * 30);
	daysOldFinal = ( daysOld + remainderDays);
	printf ("%d days old \n", daysOldFinal);
	
	//needs to be fixed
	hoursOld = ( daysOld * 24);
	printf("%d hours old \n", hoursOld);
		
}

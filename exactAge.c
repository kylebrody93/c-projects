/* this program was a personal problem solving excercize idea I had. It takes a users birth date and tells them how many years, 
days and hours, minutes, seconds, and milliseconds old they are, given the current date.  
*/

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

//this function prints back the users age in years, days, hours, minutes, seconds
void ageYears(){
	int yearsOld;
	int daysOld;
	int hoursOld;
	int minutesOld;
	int secondsOld;
	int milliOld;
	
	//variable to hold remainder days after last bday for that year
	int remainderDays;
	//yields the final result for how many days old someone is
	int daysOldFinal; 
	
	
	//if the current day is greater than or equal to bday and current month <= bday month
	
	if( currentDay >= birthDay && currentMonth >= birthMonth){
		yearsOld = (currentYear - birthYear);
		printf("you are %d years old \n\n", yearsOld);
	}
	else if( currentDay <= birthDay && currentMonth <= birthMonth ){
		yearsOld = (currentYear - birthYear - 1);
		printf("you are %d years old \n\n", yearsOld);
	}
	else if( currentDay > birthDay && currentMonth < birthMonth ){
		yearsOld = (currentYear - birthYear - 1);
		printf("you are %d years old \n\n", yearsOld);	
	}
	
	daysOld = ( yearsOld * 365 ) + (currentMonth *30) - currentDay;
	remainderDays = ( 12 * 30) - ( birthMonth * 30);
	//the reason im adding + 7 to years old is because there are 7 31 day months in a year.
	daysOldFinal = ( daysOld + remainderDays) + ( 7 * yearsOld);
	printf ("%d days old \n\n", daysOldFinal);
	
	//multiplying the final number of days old the user is by 24- the number of hours in a day.
	hoursOld = ( daysOldFinal * 24 );
	printf("%d hours old \n\n", hoursOld);
	
	minutesOld = ( hoursOld * 60 );
	printf("%d minutes old \n\n", minutesOld );
	
	secondsOld = ( minutesOld * 60 );
	printf("%d seconds old\n\n", secondsOld);
	
	milliOld = ( secondsOld * 1000 );
	printf( "%d milliseconds old\n\n", milliOld);
		
}


#include<stdio.h>

int main()
{
/* Q1) program to print Hello Students on the screen
 printf("Hello Students");
*/


/* Q2) program to print Hello in the first line and Students in the second line
 printf("Hello\nStudents");
*/


/* Q3) program to print “MySirG” on the screen  
 printf("\"MySirG\"");
*/


/* Q4) find the area of the circle. Take radius of circle from user as input and print the
result in below given format.
Expected output format – “Area of circle is A having the radius R”. Replace A with area
& R with radius. 
  int R;
  float ar;
  printf("Enter the Radius of circle: ");
  scanf("%d",&R);
  ar=3.14*R*R;
  printf("Area of circle havig radius %d is %0.2f",R,ar);  */


/* Q5) Program to calculate the length of String using printf function.
        char ch[20]="Hello World";
        printf("\nLength of the string is %d",printf("%s",ch));
*/


/* Q6) Program to print the name of the user in double quotes.
Expected output format – “Hello , Amit Kumar” 

      char ch[20]="";
      printf("Enter your Name: ");
      scanf("%[^\n]s",&ch);
      printf("Hello, %s",ch);
*/


/* Q7) Program to print “%d” on the screen.
       printf("%%d"); 
*/


/* Q8) WAP to print “\n” on the screen.
        printf("\\n");
*/


/* Q9) WAP to print “\\” on the screen.
        printf("\\\\");
*/

/*Q10)Program to take date as an input in below given format and convert the date format and
display the result as given below.
User Input date format – “DD/MM/YYYY” (27/11/2022)
Output format –
“Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022)
      int date,month,year;
      printf("Input date in the format - DD/MM/YYYY");
      scanf("%d/%d/%d",&date,&month,&year);
      printf("Day - %2d, Maonth - %2d, Year - %4d",date,month,year);
*/

/* Q11). WAP to take time as an input in below given format and convert the time format and
display the result as given below.
User Input date format – “HH:MM”
Output format – “HH hour and MM Minute”
Example –
“11:25” converted to “11 Hour and 25 Minute”
      int hr,min;
      printf("Input time in the format - HH:MM");
      scanf("%d:%d",&hr, &min);
      printf("%2d Hour, %2d Minute",hr,min);
*/
return 0;
}
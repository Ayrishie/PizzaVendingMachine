``/***************************************************************************
This is to certify that this project is my own work, based on my personal efforts in studying and
applying the concepts learned. I have constructed the functions and their respective algorithms
and corresponding code by myself. The program was run, tested, and debugged by my own
efforts. I further certify that I have not copied in part or whole or otherwise plagiarized the
work of other students and/or persons.
, DLSU ID# <12111914>
***************************************************************************/

/*
Description: The program is designed to stimulate Pizza Vending Machine without a
tangible apparatus and create a fun interactable device.
Programmed by: Ramos, Irish Jane M. S21A
Last modified: February 07,2021
Version: 9.0
[Acknowledgements: <https://mathbits.com/MathBits/CompSci/Screen/clear.htm,
https://www.programiz.com/c-programming/library-function/math.h>
https://www.poftut.com/what-is-sleep-function-and-how-to-use-it-in-c-program/]
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <Windows.h>

#define SMALLSIZE 100
#define MEDIUMSIZE 175
#define LARGESIZE 225

/* This function prints the underscore to a certain
amount of times
Precondition: counter is already defined
@return returns nothing.
*/

void
DisplayUnderscore()
{
int counter; /* declares a variable*/
printf("\t\t\t\t\t"); /* prints out tabs*/
/*
loops until 46 then prints ''
*/
for(counter = 0; counter <= 46; counter++)
printf("");

}

/* This function is like the DisplayUnderscore()
however it's loop is different.
Precondition: counter is already defined
@return returns nothing.
*/

void
DisplayUnderscore2()
{
int counter; /* declares a variable*/

printf("\t\t\t\t"); /* prints out tabs*/
for(counter = 0; counter <= 55; counter++)
	printf("_"); /* prints out '_'*/
}

/* This function is like the DisplayUnderscore()
however it prints whitespaces.
Precondition: counter is already defined
@return returns nothing.
/
void
DisplayNewLine()
{
int counter;/ declares a variable*/
for(counter = 0; counter <= 9; counter++)
printf("\n");/* prints out new lines*/

}
/* This function is like the DisplayUnderscore()
however it prints astrisks ().
Precondition: counter is already defined
@return returns nothing.
/
void
DisplayAsterisk()
{
int counter;/ declares a variable/
printf("\t\t\t\t ");
for(counter = 0; counter <= 46; counter++)
printf("");/ prints out asterisks*/

printf("\n");
}

/* This function is like the displays the startup
of the Pizza Vending Machine.
however it's loop is different.
Precondition: it just prints
@return returns nothing.
*/

void
InterfaceScreen()
{
DisplayNewLine(); /displays '\n' /
DisplayAsterisk();/ displays '' /
printf("\n");
/
prints out strings

*/
printf("\t\t\t\t\t\t      Hello!\n");
	Sleep (1111);
printf("\t\t\t\t\tWelcome to IRISH PIZZA VENDING MACHINE!\n");
	Sleep (1000);
printf("\t\t\t\t    Where you can have an instant pizza, instantly!\n");
	Sleep (1111);
printf("\n");
DisplayAsterisk();
	Sleep (1000); /* slows down the displaying */	
printf("\n");

system("cls"); /* clears the screen */
}
/* This function prints the selection of crust and
uses the DisplayNewLine() to have white space above.
Precondition: prints output of the string.
@return returns nothing.
/
void
DisplayTypeOfCrust()
{
DisplayNewLine(); / displays '_' /
printf("\n");
/
prints out strings
*/
printf("\t\t\t\t\t Please select the type of crust.\n");
printf("\t\t\t\t\t\t1 for THIN CRUST\n");
printf("\t\t\t\t\t\t2 for THICK CRUST\n");
printf("\t\t\t\t\t\tSelection: ");
}

/* This function gets the user's input to check
if its valid and invalid
Precondition: positive number 1 and 2
@param *result is a pointer and its using pass by value
to return either 1 and 2 to DisplayReciept() function.
@return return the input of the user.
*/

int
TypeOfCrust()
{

/* 
variable declarations
*/
int		nCrustType,
		*ResultTypeOfCrust, /* pointer declaration */
		nNum = 0;
		
char	cCharFlush;
		
		ResultTypeOfCrust = &nNum;	/* pointer initialization */
		
/* loop*/		
do{ 
		DisplayTypeOfCrust(); /* displays a function */
		
		/* stores the user's input from DisplayTypeOfCrust()
		and checks if it is not 1 */
		
		if (scanf("%d", &nCrustType) != 1){ 
			
		scanf(" %c", &cCharFlush);
		printf("\t\t\t\t\t\t\t  <INVALID>");
		Sleep(500);
		system("cls");
		
		/* check if user's input is 1 or 2 */
    	} else if (nCrustType < 1 || nCrustType > 2){ 
    	
		printf("\t\t\t\t\t\t\t  <INVALID>");
		Sleep(500);
		system("cls");
		
   		}
/* check if user's input is not 1 or 2 */	
}while(nCrustType != 1 && nCrustType != 2 );


/* executes if 1 and displays chosen crust */	
if(nCrustType == 1){ 
	
	system("cls");
	DisplayNewLine();
	printf("\n");
	DisplayUnderscore();
	printf("\n\n");
	printf("\t\t\t\t\t   ");
	printf("Your choice of crust is a THIN CRUST %d\n", nCrustType);
	DisplayUnderscore();
	printf("\n");
	*ResultTypeOfCrust = 1;
	
}else{
	/* executes and displays other chosen crust */	
	system("cls");
	DisplayNewLine();
	printf("\n");
	DisplayUnderscore();
	printf("\n\n");
	printf("\t\t\t\t\t   ");
	printf("Your choice of crust is THICK CRUST %d\n", nCrustType);
	DisplayUnderscore();
	printf("\n");
	*ResultTypeOfCrust = 2;
}


Sleep(1000);
system("cls");

/* return's user's input'' */	
return *ResultTypeOfCrust;
}

/* This function displays the Crust Size of the Pizza
Precondition: prints out the strings
@return returns nothing
/
void
DisplayCrustSize()
{
DisplayNewLine();/ displays \n */
printf("\n");
printf("\t\t\t\t\t ");
printf("Please select the size of crust.\n");
printf("\t\t\t\t\t\t s or S for SMALL\n");
printf("\t\t\t\t\t\t m or M for MEDIUM\n");
printf("\t\t\t\t\t\t l or L for LARGER\n");
printf("\t\t\t\t\t\tSelection: ");
}

/* This function is to identify what the user has inputted
and determine the crust size
Precondition: can only accept cArrtypetops[6]
@param cResult is used to define the if it's 's','S', 'm','M', 'l','L'.
@return return the input of the user.
*/

char
cCrustSize(char *cResultcCrustSize){

/* declaration of variables */	
char 	cCrustSize,	 
	   	cArrtypetops[6] = {'s','S', 'm','M', 'l','L'};
	
/* loops until valid*/		
do{
	DisplayCrustSize();/* calls a function */	
	scanf(" %c", &cCrustSize);/* stores user's input' */	
	
	if(cCrustSize == cArrtypetops[0]  || cCrustSize == cArrtypetops[1] ||
	 	cCrustSize == cArrtypetops[2] || cCrustSize ==  cArrtypetops[3] ||
		cCrustSize == cArrtypetops[4] || cCrustSize == cArrtypetops[5]){
					
		system("cls"); /* valid' */
		
	}else{
		
		printf("\t\t\t\t\t\t\t  <INVALID>");
		Sleep(500);
		system("cls");
		
	}
	
}while( cCrustSize != cArrtypetops[0]  && cCrustSize != cArrtypetops[1] &&
	 	cCrustSize != cArrtypetops[2] && cCrustSize !=  cArrtypetops[3] &&
		cCrustSize != cArrtypetops[4] && cCrustSize != cArrtypetops[5]);

/* executes if it's s or S */
if(cArrtypetops[0] == cCrustSize || cArrtypetops[1] == cCrustSize ){
	
		system("cls");
		DisplayNewLine();
		printf("\n");
		DisplayUnderscore();
		printf("\n\n");
		printf("\t\t\t\t\t  ");
		printf("Your choice is a SMALL, which is PHP %d\n", SMALLSIZE);
		*cResultcCrustSize = 's'; /* stores 's' to *cResultcCrustSize*/
		DisplayUnderscore(); /* displays '_' */
		printf("\n");

/* executes if it's m or M */
} else if(cArrtypetops[2] == cCrustSize|| cArrtypetops[3] == cCrustSize){
	
		system("cls");
		DisplayNewLine();
		printf("\n");
		DisplayUnderscore();
		printf("\n\n");
		printf("\t\t\t\t\t  ");
		printf("Your choice is a MEDIUM, which is PHP %d\n", MEDIUMSIZE);
		*cResultcCrustSize = 'm'; /* stores 'm' to *cResultcCrustSize*/
		DisplayUnderscore();/* displays '_' */
		printf("\n");
		
} else if(cArrtypetops[4] == cCrustSize || cArrtypetops[5] == cCrustSize){
	
		system("cls");
		DisplayNewLine();
		printf("\n");
		DisplayUnderscore();
		printf("\n\n");
		printf("\t\t\t\t\t  ");
		printf("Your choice is a LARGE, which is PHP %d\n", LARGESIZE);
		*cResultcCrustSize = 'l';/* stores 'l' to *cResultcCrustSize*/
		DisplayUnderscore();/* displays '_' */
		printf("\n");
}


Sleep(1000);
system("cls");
return *cResultcCrustSize;/* returns 's' or 'm' or 'l'*/
}

/* This function prints the selection of CHEESE and
Precondition: prints output of the string.
@return returns nothing.
*/

void
nCheeseDisplay()
{

printf("\t\t\t\t\t");
printf(" All types of cheese are the same price Php 12.00\n");	
printf("\t\t\t\t\t\t g or G for GORGONZOLA\n");
printf("\t\t\t\t\t\t f or f for FONTINA\n");
printf("\t\t\t\t\t\t p or P for PARMESAN\n");
}

/* This function is to identify what the user has inputted
and determine the crust size
Precondition: can only accept cArrtypetops[6]
@param *nResultGorgonzola used to define the user's
input at TypeOfToppings() and pass all the input of
TypeOfToppings()
@param *nResultFontina used to define the user's
input at TypeOfToppings() and pass all the input of
TypeOfToppings()
@param *nResultParmesanis used to define the user's
input at TypeOfToppings() and pass all the input of
TypeOfToppings()
@param nCounterc is count the user's input at TypeOfToppings()
and pass it to that function again.
@return returns nCheeseAllTotal.
*/
int
nCheeseCounter(int *nResultGorgonzola, int *nResultFontina,
int *nResultParmesan, int nCounterc)
{

/*varaiable declaration*/
int	nCheeseAllTotal;

char cResult;
do{

	do{
	
		DisplayNewLine(); /* prints \n */
  		nCheeseDisplay(); /*displays the choices */
		printf("\t\t\t\t\t ===> ");
		scanf(" %c", &cResult);
		
			/* only accepts if the input is g p f n*/
			if(cResult == 'g' || cResult == 'G' || cResult == 'p' 
				|| cResult == 'P'|| cResult == 'f' ||cResult == 'F'
				|| cResult == 'N'|| cResult == 'n'){
			
				switch(cResult){
  		
					case 'g':
					case 'G': {
						printf("\t\t\t\t\t     ");
						printf("You Chose GORGONZOLA\n");
						nCounterc--; /* decrement */
						Sleep(400);
						system("cls");
						}
					    break;
					case 'f':
					case 'F':{
						printf("\t\t\t\t\t     ");
				        printf("You Chose FONTINA\n");
				        nCounterc--;/* decrement */
				        Sleep(400);
				        system("cls");
				   		}
						break;
					case 'p':
					case 'P': {
						printf("\t\t\t\t\t     ");
						printf("You Chose PARMESAN\n");
						nCounterc--;/* decrement */
						Sleep(400);
						system("cls");
					 	}
					    break;
					}
			
			}else{
				printf("\t\t\t\t\t\t<INVALID>");
				Sleep(500);
				system("cls");
			}
		
			
		}while(cResult != 'p' && cResult != 'P' &&  cResult != 
				'O'&& cResult != 'g' && cResult != 'G' && cResult 
				!= 'f' && cResult != 'F' && cResult != 'n' && 
				cResult != 'N' ); /* breaks out loop */

  
	if(cResult == 'g' || cResult == 'G')
		 *nResultGorgonzola+=1;	/* increment */
	else if(cResult == 'f' || cResult == 'F')
		 *nResultFontina+=1;	/* increment */
	else if(cResult == 'p' || cResult == 'P')
		 *nResultParmesan+=1;	/* increment */
	
	
} while(nCounterc > 0 ); 
	
	/* adding all the inputs */
	nCheeseAllTotal = *nResultParmesan + *nResultFontina +
						*nResultGorgonzola;

return 	nCheeseAllTotal;
}

/* This function displays the Types of toppings
of the Pizza
Precondition: prints out the strings
@return returns nothing
*/
void
DisplayMenuToppings()
{

DisplayNewLine();/* display \n */
printf("\n");
printf("\t\t\t\t\t   Please select the Toppings of the Pizza.\n");
printf("\t\t\t\t\t\t h or H for HAM 		- 10.00\n");
printf("\t\t\t\t\t\t p or P for PINEAPPLE      	- 6.00\n");
printf("\t\t\t\t\t\t s or S for SAUSAGE 	        - 15.00\n");
printf("\t\t\t\t\t\t c or C for CHEESE 		- 12.00\n");
printf("\t\t\t\t\t\t o or O for OLIVES 		- 10.00\n");
printf("\t\t\t\t\t Please enter as many toppings as you want.\n");
Sleep(1000);	
}

/* This function is to identify what the user has inputted
and determine the type of toppings
Precondition: can only accept char
@param *fResultHam used to define the user's
input on HAM and count how many inputs it was
and then it shall pass all the input to
ComputationToppings()
@param *nResultPineapple used to define the user's
input PINAPPLE and count how many inputs it was
and then it shall pass all the input to
ComputationToppings()
@param *fResultSausage used to define the user's
input on SAUSAGE and count how many inputs it was
and then it shall pass all the input to
ComputationToppings()
@param *nToppingsOlives used to define the user's
input OLIVES and count how many inputs it was
and then it shall pass all the input to
ComputationToppings()
@param *nResultGorgonzola used to define the user's
input on GORGONZOLA and count how many inputs it was
and then it shall pass all the input to
ComputationToppings()
@param *nResultFontina used to define the user's
input FONTINA and count how many inputs it was
and then it shall pass all the input to
ComputationToppings()
@param *nResultParmesan used to define the user's
input on PARMESAN and count how many inputs it was
and then it shall pass all the input to
ComputationToppings()
@return returns all the inputs(typeoftoppings) of the user.
*/

int
TypeOfToppings(int *nToppingsHam,
int *nToppingsPineapple,
int *nToppingsSausage,
int *nToppingsOlives,
int *nToppingsGorgonzola,
int *nToppingsFontina,
int *nToppingsParmesan)
{

/* variable declaration */
int		nCounterc = 0,
		nExit;

char 	cToppingsChoices = 0,
		cResult;
	
/* lowercase all inputs */	
if(cToppingsChoices == 'h'|| cToppingsChoices == 'H')
		cResult= tolower(cToppingsChoices); 
	
else if(cToppingsChoices == 'p'|| cToppingsChoices == 'P')
		cResult = tolower(cToppingsChoices);
	
else if(cToppingsChoices == 's'|| cToppingsChoices == 'S')
		cResult = tolower(cToppingsChoices);
else if(cToppingsChoices == 'c'|| cToppingsChoices == 'C')
		cResult= tolower(cToppingsChoices); 
	
else if(cToppingsChoices == 'o'|| cToppingsChoices == 'O')
		cResult = tolower(cToppingsChoices);
else if(cToppingsChoices == 'n'|| cToppingsChoices == 'N')
		cResult = tolower(cToppingsChoices);

/* loops until inputs the correct input  */
do{	
	DisplayMenuToppings(); /* Displays the menu toppings */
	printf("\t\t\t\t\t\t ===> ");
	scanf(" %c", &cResult);
	
		if (cResult == 'h' || cResult == 'H' || cResult == 'p' 
			|| cResult == 'P'|| cResult == 's' ||cResult == 'S'
			|| cResult == 'c' || cResult == 'C'||cResult == 'o' 
			|| cResult == 'O'){
			
			switch(cResult){ 
			
				case 'H':
				case 'h': 	
							printf("\t\t\t\t\t\t\tYou Chose HAM");
							Sleep(400);
							system("cls");
					  		break;
				case 'p': 
				case 'P':	
							printf("\t\t\t\t\t\t\tYou Chose PINEAPPLE");
							Sleep(400);
							system("cls");
							break;
				case 's': 
				case 'S':   
							printf("\t\t\t\t\t\t\tYou Chose SAUSAGE");
							Sleep(400);
							system("cls");
							break;
				case 'c': 
			
				case 'C':
							printf("\t\t\t\t\t\t\tYou Chose CHEESE\n");
					  		Sleep(400);
					  		system("cls");
					 	 	break;
				case 'o': 
				case 'O': 
							printf("\t\t\t\t\t\t\tYou Chose OLIVES");
							Sleep(400);
							system("cls");
							break;
						
			}
		
		}else{
			
			printf("\t\t\t\t\t\t\t<INVALID>");
			Sleep(400);
			system("cls");
			
		}
		
	

		if(cResult == 'h' || cResult == 'H')
			*nToppingsHam+=1;	/* increment */
		else if(cResult == 'p' || cResult == 'P')
			*nToppingsPineapple+=1;/* increment */
		else if(cResult == 's' || cResult == 'S')
			*nToppingsSausage+=1;/* increment */
		else if(cResult == 'c' || cResult == 'C')
			nCounterc+=1;		/* increment */
		else if(cResult == 'o' || cResult == 'O')
			*nToppingsOlives+=1;/* increment */
		
	
	/* loop out */
	}while(cResult != 'h' && cResult != 'H' && 
		   cResult != 'p' && cResult != 'P' && cResult != 's' &&
		   cResult != 'S'&& cResult != 'c' && cResult != 'C' && cResult 
		   != 'o' && cResult != 'O'); 

/* loops until 'n' or 'N' */
do{
	DisplayMenuToppings();	
	printf("\t\t\t\t\t\t ===3 ");
	scanf(" %c", &cResult);
	
	
				if (cResult == 'h' || cResult == 'H' || cResult == 'p' 
					|| cResult == 'P'|| cResult == 's' ||cResult == 'S'
					|| cResult == 'c' || cResult == 'C'||cResult == 'o' 
					|| cResult == 'O'){
			
			switch(cResult){	
			
				case 'H':
				case 'h': 	
							printf("\t\t\t\t\t\t\tYou Chose HAM");
							Sleep(400);
							system("cls");
					  		break;
				case 'p': 
				case 'P':	
							printf("\t\t\t\t\t\t\tYou Chose PINEAPPLE");
							Sleep(400);
							system("cls");
							break;
				case 's': 
				case 'S':   
							printf("\t\t\t\t\t\t\tYou Chose SAUSAGE");
							Sleep(400);
							system("cls");
							break;
				case 'c': 
			
				case 'C':
							printf("\t\t\t\t\t\t\tYou Chose CHEESE\n");
					  		Sleep(400);
					  		system("cls");
					 	 	break;
				case 'o': 
				case 'O': 
							printf("\t\t\t\t\t\t\tYou Chose OLIVES");
							Sleep(400);
							system("cls");
							break;
						
			}
		
		} else if(cResult == 'n' || cResult == 'N' ){
			
				 nExit = 1; /* to exit out the loop */
		}else{
			
			printf("\t\t\t\t\t\t\t<INVALID>");
			Sleep(600);
			system("cls");
		}

		/* increments */
		if(cResult == 'h' || cResult == 'H')
			*nToppingsHam+=1;  
		else if(cResult == 'p' || cResult == 'P')
			*nToppingsPineapple+=1;
		else if(cResult == 's' || cResult == 'S')
			*nToppingsSausage+=1;
		else if(cResult == 'c' || cResult == 'C')
			nCounterc+=1;
		else if(cResult == 'o' || cResult == 'O')
			*nToppingsOlives+=1;
			

		/* exits the loop*/
		}while(cResult == 'h' || cResult == 'H' || cResult
			   == 'p' ||cResult == 'P' || cResult == 's' ||
			   cResult == 'S'  || cResult == 'c' || cResult == 'C'
			   || cResult == 'o' || cResult == 'O' || nExit != 1 );

system("cls");
		
	if (nCounterc !=0) /* if cheese was chosen one time*/
	{	
		/* computes the number of times the cheese was choosen */
		nCheeseCounter(nToppingsGorgonzola, nToppingsFontina, 
				    	nToppingsParmesan, nCounterc);
				 	
	}else{
		
		system("cls");
	} 

	DisplayNewLine(); /* displays \n */
	
	/* displays all the user's choices */
	printf("\t\t\t\t\t\t  HAM: %d ", *nToppingsHam);
	printf("\n");
	printf("\t\t\t\t\t\t  PINEAPPLE: %d ", *nToppingsPineapple);
	printf("\n");
	printf("\t\t\t\t\t\t  SAUSAGE: %d ", *nToppingsSausage);
	printf("\n");
	printf("\t\t\t\t\t\t  GORGONZOLA: %d ", *nToppingsGorgonzola);
	printf("\n");
	printf("\t\t\t\t\t\t  FONTINA: %d ", *nToppingsFontina );
	printf("\n");
	printf("\t\t\t\t\t\t  PARMASEN: %d ", *nToppingsParmesan);
	printf("\n");
	printf("\t\t\t\t\t\t  OLIVE: %d ", *nToppingsOlives);

	Sleep(1700);
	
	
return 0;
}

/* This function compute the user's input
Precondition: base and height are non-negative values
@param *nPrice is the value of the inputted char
@param *cStuffings is the only char inputs the user can type in
@param *nNumStuffings is used to count if the user has inputted
a stuffings.
@return the output numeber and the char
*/

float
CheeseSpamTops(float *nPrice, char *cStuffings, int nNumStuffings)
{
/ loop until correct input /
do{
DisplayNewLine(); / displays \n */
printf("\n\t\t\t\t\t Do you want extra CRUST STUFFINGS?\n");
printf("\t\t\t\t\t\t c or C for CHEESE\t\t\t- 30.00\n");
printf("\t\t\t\t\t\t s or S for SPAM\t\t\t- 25.00\n");
printf("\t\t\t\t\t\t b or B for BOTH (SPAM AND CHEESE)\t- 35.00\n");
printf("\t\t\t\t\t\t n or N for NO / NEXT ");
printf("\n");
printf("\t\t\t\t\t\t ===> ");
scanf(" %c", &cStuffings); / stores input */

	 if (*cStuffings == 'C' || *cStuffings == 'c' ||
	 	*cStuffings == 'S' || *cStuffings == 's' ||	
		*cStuffings == 'b' || *cStuffings == 'B' || 
		*cStuffings == 'n' || *cStuffings == 'N'){
		

	 			system("cls");/* clears screen */
	 		
	 }else{
	 
	 	printf("\n\t\t\t\t\t\t<INVALID>");
	 	Sleep(300);
		system("cls");
	}

/* exits the loop */
}while(*cStuffings != 'c' && *cStuffings != 'C' &&
		*cStuffings != 'S' && *cStuffings != 's' && 
		*cStuffings != 'b' && *cStuffings != 'B' &&  
		*cStuffings != 'n' && *cStuffings!= 'N');

	
if(*cStuffings == 'c' || *cStuffings == 'C'  ){
	*nNumStuffings+=1; /* increment */
	*nPrice = 30.00;	/* puts value on variable */
}else if( *cStuffings == 'S' || *cStuffings == 's'){
	
	*nNumStuffings+=1; /* increment */
	*nPrice = 25.00;   /* puts value on variable */
	
}else if( *cStuffings == 'b' || *cStuffings == 'B'){
	
	*nNumStuffings+=1; /* increment */
	*nPrice = 35.00; /* puts value on variable */
}
	
	
return 0;
}

/* This function is to identify what the user has inputted
and determine the type of toppings
Precondition: all inputs are positive

@param *resultHam used to calculate the user's
input on HAM and based it on the size of the pizza.
if it shall multiple 1.5 or 1.75 if it's small then
no mutliplication and then it shall pass all the input to 
DisplayReciept()

@param *nResultPineapple used to calculate the user's
input onPINAPPLE and based it on the size of the pizza.
if it shall multiple 1.5 or 1.75 if it's small then
no mutliplication and then it shall pass all the input to 
DisplayReciept()

@param *nResultSausage used to calculate the user's
input on SAUSAGE and based it on the size of the pizza.
if it shall multiple 1.5 or 1.75 if it's small then
no mutliplication and then it shall pass all the input to 
DisplayReciept()

@param *nResultOlives used to calculate the user's
input onOLIVES and based it on the size of the pizza.
if it shall multiple 1.5 or 1.75 if it's small then
no mutliplication and then it shall pass all the input to 
DisplayReciept()

@param *nResultGorgonzola used to calculate the user's
input on GORGONZOLA and based it on the size of the pizza.
if it shall multiple 1.5 or 1.75 if it's small then
no mutliplication and then it shall pass all the input to 
DisplayReciept()

@param *nResultFontina used to calculate the user's
input onFONTINA and based it on the size of the pizza.
if it shall multiple 1.5 or 1.75 if it's small then
no mutliplication and then it shall pass all the input to 
DisplayReciept()

@param *nResultParmesan used to calculate the user's
input on PARMESAN and based it on the size of the pizza.
if it shall multiple 1.5 or 1.75 if it's small then
no mutliplication and then it shall pass all the input to 
DisplayReciept()

@param *nPizzaPriceSize used to define the user's
past input on cCrustSize() then based it on the size of the
pizza and the pass SMALLSIZE, MEDIUMSIZE, AND LARGESIZE to its
self, and then it shall pass all the input to 
DisplayReciepts()

@param *cPizzaNameSize used to identify the size of
crust the user's choosen and then pass a char character
to it self then it shall pass all the input to 
DisplayReciepts()

@param *cResultcCrustSizeused to identify if the user has inputed
's' || 'S' || 'm' || 'M' || 'l' || 'L'||

@return returns all the inputs(typeoftoppings) and total
				 of the user's choosen input.
*/

void
ComputationToppings( float *nResultHam,
float *nResultPineapple,
float *nResultSausage,
float *nResultOlives,
float *nResultGorgonzola,
float *nResultFontina,
float *nResultParmesan,
int *nPizzaPriceSize,
char *cPizzaNameSize,
char cResultcCrustSize)
{
/ variable declaration */
float fToppingPrices[5] = {10.00,6.00, 15.00,12.00, 10.00};

/* switch using the user's past input 's', 'm', 'l' */
switch(*cResultcCrustSize){ 
case 's': 
case 'S': 	
		
		/* if not zero then execute */
		if(*nResultPineapple != 0){
			
			/* puts value on variable */
			int nNump = *nResultPineapple; 
			
			/* multiples using the array */
			*nResultPineapple = nNump * fToppingPrices[1]; 
		
		}if(*nResultHam != 0){
		
			int nNumh = *nResultHam ;
	
			*nResultHam = nNumh * fToppingPrices[0];
			
		}if(*nResultSausage != 0){	
		
			int nNums = *nResultSausage;
			
			*nResultSausage = nNums * fToppingPrices[2];

		}if(*nResultGorgonzola != 0){	
			
			int nNumg = *nResultGorgonzola;
			
			*nResultGorgonzola = nNumg  * fToppingPrices[3];
			
		}if(*nResultFontina != 0){	
			
			int nNumf = *nResultFontina;
			
			*nResultFontina = nNumf * fToppingPrices[3];	
			
		}if(*nResultParmesan!= 0){	
		
			int nNumPar = *nResultParmesan;
			
			*nResultParmesan = nNumPar  * fToppingPrices[3];
		
		}if(*nResultOlives != 0){
			
			int nNumo = *nResultOlives;
			
			*nResultOlives = nNumo* fToppingPrices[4];
		}
		
		/* puts value on variable */
		*nPizzaPriceSize = SMALLSIZE; 
		*cPizzaNameSize = 's';

		break; 

case 'm': 
case 'M': 				  
	
		/* if not zero then execute */
		if(*nResultPineapple != 0){
			
			/* puts value on variable */
			int nNump = *nResultPineapple;
			
			/* multiples using the array */
			*nResultPineapple = nNump * fToppingPrices[1] * 1.5;
		
		}if(*nResultHam != 0){
		
			int nNumh = *nResultHam ;
	
			*nResultHam = nNumh * fToppingPrices[0] * 1.5;
			
		}if(*nResultSausage != 0){	
		
			int nNums = *nResultSausage;
			
			*nResultSausage = nNums * fToppingPrices[2] * 1.5;

		}if(*nResultGorgonzola != 0){	
			
			int nNumg = *nResultGorgonzola;
			
			*nResultGorgonzola = nNumg  * fToppingPrices[3] * 1.5;
			
		}if(*nResultFontina != 0){	
			
			int nNumf = *nResultFontina;
			
			*nResultFontina = nNumf * fToppingPrices[3] * 1.5;	
			
		}if(*nResultParmesan!= 0){	
		
			int nNumPar = *nResultParmesan;
			
			*nResultParmesan = nNumPar  * fToppingPrices[3] * 1.5;
		
		}if(*nResultOlives != 0){
			
			int nNumo = *nResultOlives;
			
			*nResultOlives = nNumo* fToppingPrices[4] * 1.5;
		}
		
		/* puts value on variable */
		*nPizzaPriceSize = MEDIUMSIZE;
		*cPizzaNameSize = 'm';
		break;
		
case 'l':
case 'L': 	
				  

		/* if not zero then execute */
		if(*nResultPineapple != 0){
			
			/* puts value on variable */
			int nNump = *nResultPineapple;
			
			/* multiples using the array */
			*nResultPineapple = nNump * fToppingPrices[1] * 1.75;
		
		}if(*nResultHam != 0){
		
			int nNumh = *nResultHam ;
	
			*nResultHam = nNumh * fToppingPrices[0] * 1.75;
			
		}if(*nResultSausage != 0){	
		
			int nNums = *nResultSausage;
			
			*nResultSausage = nNums * fToppingPrices[2] * 1.75;

		}if(*nResultGorgonzola != 0){	
			
			int nNumg = *nResultGorgonzola;
			
			*nResultGorgonzola = nNumg  * fToppingPrices[3] * 1.75;
			
		}if(*nResultFontina != 0){	
			
			int nNumf = *nResultFontina;
			
			*nResultFontina = nNumf * fToppingPrices[3] * 1.75;	
			
		}if(*nResultParmesan!= 0){	
		
			int nNumPar = *nResultParmesan;
			
			*nResultParmesan = nNumPar  * fToppingPrices[3] * 1.75;
		
		}if(*nResultOlives != 0){
			
			int nNumo = *nResultOlives;
			
			*nResultOlives = nNumo* fToppingPrices[4] * 1.75;
		}
		/* puts value on variable */
		*nPizzaPriceSize = LARGESIZE;
		*cPizzaNameSize = 'l';
		break;
	
}
}

/* This function is to identify what the user has inputted
and determine the type of toppings
Precondition: all inputs are positive

@param *nResultHam is used to display the previous formal 
function's value and it also needed for the computation of total. 
The value in the function will also be passed to ComputeReceipt()

@param *nResultPineapple is used to display the previous formal 
function's value and it also needed for the computation of total. 
The value in the function will also be passed to ComputeReceipt()

@param *nResultSausage is used to display the previous formal 
function's value and it also needed for the computation of total. 
The value in the function will also be passed to ComputeReceipt()

@param *nResultOlives is used to display the previous formal 
function's value and it also needed for the computation of total. 
The value in the function will also be passed to ComputeReceipt()

@param *nResultGorgonzola is used to display the previous formal 
function and it also needed for the computation of total. The 
value in the function will also be passed to ComputeReceipt()

@param *nResultFontina is used to display the previous formal 
function and it also needed for the computation of total. The 
value in the function will also be passed to ComputeReceipt()

@param *nResultParmesan is used to display the previous formal 
function and it also needed for the computation of total. The 
value in the function will also be passed to ComputeReceipt()

@Param *nPizzaPriceSize uses the value passed by the function
ComputationToppings() and prints it

@param *cPizzaNameSize is used to determine if the value is equal
to what the if else() needed.

@param *ResultTypeOfCrust is to determine if the user's past input in
TypeofCrust is the same the needed value in if else()

@param *nNumStuffings is used to identify if the user has inputted
a Stuffings and determine if it will be needed int the computation

@param *cStuffings is used to determine of the user has inputted
an 'n' or 'N'

@param *nSutffingTwo gets the input of nPriceStuffings to be
used in other functions

@return returns all the inputs(typeoftoppings) and total
				 of the user's choosen input.
*/

float
TotalReciept( float *nResultHam,
float *nResultPineapple,
float *nResultSausage,
float *nResultOlives,
float *nResultGorgonzola,
float *nResultFontina,
float *nResultParmesan,
int *nPizzaPriceSize,
char *cPizzaNameSize,
int *ResultTypeOfCrust,
int *nNumStuffings,
char *cStuffings,
float *nSutffingTwo)

{

/* variable declaration*/
float	nSumPizza,
		nPriceStuffings;

system("cls");

/* uses the TypeOfCrust result */
if(*ResultTypeOfCrust == 1){
	
	DisplayNewLine();/* displays \n */
	DisplayUnderscore2();/* displays '_'*/	
	printf("\n\n\t\t\t\t\t");	
	printf("IRISH'S PIZZARIA VENDING MACHINE:");
	
	/* prints out the total of ham */		
	printf("\n\n");
	printf("\t\t\t\t\t\t");
	printf("(TOPPINGS) HAM :    \t %.2f\n",
	 *nResultHam);
	 
	/* prints out the total of pineapple */
 	printf("\t\t\t\t\t\t");	
	printf("(TOPPINGS) PINEAPPLE :   %.2f\n",
	 *nResultPineapple);
	
	/* prints out the total of sausage */
	printf("\t\t\t\t\t\t");	
	printf("(TOPPINGS) SAUSAGE : \t %.2f\n",
	*nResultSausage);
	
	/* prints out the total of gorgonzola */
	printf("\t\t\t\t\t\t");	
	printf("(CHEESE)  GORGONZOLA :\t %.2f\n",
	*nResultGorgonzola);
	
	/* prints out the total of fontina */
	printf("\t\t\t\t\t\t");	
	printf("(CHEESE) FONTINA :  \t %.2f\n",
	*nResultFontina);
	
	/* prints out the total of parmesan */
	printf("\t\t\t\t\t\t");				
	printf("(CHEESE) PARMESAN : \t %.2f\n",
	*nResultParmesan);
	
	/* prints out the total of olives */	
	printf("\t\t\t\t\t\t");	
	printf("(TOPPINGS) OLIVES :  \t %.2f\n",
	*nResultOlives);
		
	/* 
		prints out the price based on the
		size of pies
	*/
	if(*cPizzaNameSize == 's'){
		
		printf("\t\t\t\t\t\t");	
		printf("(PIE) SMALL:  \t\t %d\n",
		*nPizzaPriceSize);
		
		}else if(*cPizzaNameSize == 'm'){
			
		printf("\t\t\t\t\t\t");	
		printf("(PIE) MEDIUM: \t\t %d\n",
		*nPizzaPriceSize);
		
		}else if(*cPizzaNameSize == 'l'){
		
		printf("\t\t\t\t\t\t");	
		printf("(PIE) LARGE:  \t\t %d\n",
		*nPizzaPriceSize);
			
		}


/* if user imput is thick crust */	
}else if(*ResultTypeOfCrust == 2){
	

	CheeseSpamTops(&nPriceStuffings, cStuffings, nNumStuffings);
	
	DisplayNewLine(); /* displays \n */
	DisplayUnderscore2();/* displays '_' */
	
	/* if user doesn't want to choose any stuffings */
	if(*cStuffings!= 'n' && *cStuffings != 'N'){
		
		/* 
		prints out all the results and computation
		of choosen toppings
		
		 */
		printf("\n\n\t\t\t\t\t");	
		printf("IRISH'S PIZZARIA VENDING MACHINE:");
		printf("\n\n");
		printf("\t\t\t\t\t\t");
		printf("(TOPPINGS) HAM :    \t %.2f\n",
		 *nResultHam);
		 
 		printf("\t\t\t\t\t\t");	
		printf("(TOPPINGS) PINEAPPLE :   %.2f\n",
		 *nResultPineapple);
			
		printf("\t\t\t\t\t\t");	
		printf("(TOPPINGS) SAUSAGE : \t %.2f\n",
		 *nResultSausage);
		
		printf("\t\t\t\t\t\t");	
		printf("(CHEESE)  GORGONZOLA :\t %.2f\n",
		   *nResultGorgonzola);
		
		printf("\t\t\t\t\t\t");	
		printf("(CHEESE) FONTINA :  \t %.2f\n",
		 *nResultFontina);
		
		printf("\t\t\t\t\t\t");				
		printf("(CHEESE) PARMESAN : \t %.2f\n",
		 *nResultParmesan);
		
		printf("\t\t\t\t\t\t");	
		printf("(TOPPINGS) OLIVES :  \t %.2f\n",
		 *nResultOlives);
		
		
		/* 
		prints out the stuffings based 
		on the user's choice
		
		 */
		if(*cStuffings == 'c' || *cStuffings == 'C' ){
			printf("\t\t\t\t\t\t");;	
			printf("(ADDS-ON) CHEESE :  \t %.2f\n",
			nPriceStuffings);	
			
		}else if (*cStuffings == 's' || *cStuffings  == 's'){
			printf("\t\t\t\t\t\t");	
			printf("(ADDS-ON) SPAM :  \t %.2f\n",
			nPriceStuffings);
				
		}else if(*cStuffings == 'b' || *cStuffings  == 'B'){
			printf("\t\t\t\t\t\t");	
			printf("(ADDS-ON) SPAM&CHEESE :  %.2f\n",
			nPriceStuffings);
			
		}
		
		/* 
		prints out the price based on the
		size of pizza
		*/
		if(*cPizzaNameSize == 's'){
		
		printf("\t\t\t\t\t\t");	
		printf("(PIE) SMALL:  \t\t %d\n",
		*nPizzaPriceSize);
		
		}else if(*cPizzaNameSize == 'm'){
			
		printf("\t\t\t\t\t\t");	
		printf("(PIE) MEDIUM: \t\t %d\n",
		*nPizzaPriceSize);
		
		}else if(*cPizzaNameSize == 'l'){
		
		printf("\t\t\t\t\t\t");	
		printf("(PIE) LARGE:  \t\t %d\n",
		*nPizzaPriceSize);
			
		}
		
	/* 
	if user doesn't want to choose 
	stuffings anymore
	
	 */	
	}else if(*cStuffings == 'n' || *cStuffings  == 'N'){
		
		/* 
		prints out all the results and computation
		of choosen toppings
		
		*/		
		printf("\n\n\t\t\t\t\t");	
		printf("IRISH'S PIZZARIA VENDING MACHINE:");	
		printf("\n\n");
		printf("\t\t\t\t\t\t");
		printf("(TOPPINGS) HAM :    \t %.2f\n",
		 *nResultHam);
 		printf("\t\t\t\t\t\t");	
		printf("(TOPPINGS) PINEAPPLE :   %.2f\n",
		 *nResultPineapple);
			
		printf("\t\t\t\t\t\t");	
		printf("(TOPPINGS) SAUSAGE : \t %.2f\n",
		 *nResultSausage);
		
		printf("\t\t\t\t\t\t");	
		printf("(CHEESE)  GORGONZOLA :\t %.2f\n",
		   *nResultGorgonzola);
		
		printf("\t\t\t\t\t\t");	
		printf("(CHEESE) FONTINA :  \t %.2f\n",
		 *nResultFontina);
		
		printf("\t\t\t\t\t\t");				
		printf("(CHEESE) PARMESAN : \t %.2f\n",
		 *nResultParmesan);
		
		printf("\t\t\t\t\t\t");	
		printf("(TOPPINGS) OLIVES :  \t %.2f\n",
		 *nResultOlives);
		 
		if(*cPizzaNameSize == 's'){
		
		printf("\t\t\t\t\t\t");	
		printf("(PIE) SMALL:  \t\t %d\n",
		*nPizzaPriceSize);
		
		}else if(*cPizzaNameSize == 'm'){
			
		printf("\t\t\t\t\t\t");	
		printf("(PIE) MEDIUM: \t\t %d\n",
		*nPizzaPriceSize);
		
		}else if(*cPizzaNameSize == 'l'){
		
		printf("\t\t\t\t\t\t");	
		printf("(PIE) LARGE:  \t\t %d\n",
		*nPizzaPriceSize);
			
		}
		
	}

		
}
	
/* Sum of all the choosen toppings, crust and stuffings */
nSumPizza = nPriceStuffings + *nResultHam + *nResultPineapple +
			 *nResultSausage + *nResultGorgonzola +
			 *nResultFontina + *nResultParmesan + 
			 *nResultOlives + *nPizzaPriceSize;
			 
*nSutffingTwo = nPriceStuffings; /* puttings a value on a pointer */
	
printf("\n\t\t\t\t\t\t\t");				 
printf ("TOTAL : %.2f", nSumPizza); /* prints out total of pizza */
printf("\n\n");

DisplayUnderscore2();/* prints \n */
Sleep(2000);
return nSumPizza;/* returns the sum */
}

/*This function displays a number on
with a corresponding php bill.
@return returns nothing

*/
void
DisplayBillsChange()
{
printf("\n\n\t\t\t\t\t\t INSERT BILLS: \n");
printf("\t\t\t\t\t\t 1000 \t\t- 1\n");
printf("\t\t\t\t\t\t 500 \t\t- 2\n");
printf("\t\t\t\t\t\t 100 \t\t- 3\n");
printf("\t\t\t\t\t\t 50 \t\t- 4\n");
printf("\t\t\t\t\t\t 20 \t\t- 5\n");
printf("\t\t\t\t\t\t 10 \t\t- 6\n");
printf("\t\t\t\t\t\t 5 \t\t- 7\n");
printf("\t\t\t\t\t\t 1 \t\t- 8\n");
printf("\t\t\t\t\t\t 0.25 \t\t- 9\n");
printf("\t\t\t\t\t\t 0.10 \t\t- 10\n");
printf("\t\t\t\t\t\t 0.05 \t\t- 11\n");
printf("\t\t\t\t\t\t 0.01 \t\t- 12\n");

}

/* This function displays a number on with
a corresponding php bill.
Precondition: all numbers are assumed to be positive

@param *nBillsresult uses the user's Totalbills and the 
total of the function TotalReciept()

@param *Billchoices is used to determine of the user has 
inputted is valid to be in a switch statement

@param *fTotalTwo gets the total of the bill and passes
it to another function

@return returns all the inputs(typeoftoppings) and total
of the user's choosen input.
*/

float
nBillsChange(float *nBillsresult,
int *Billchoices,
float fTotalTwo)
{
/ variable declaration */
int nAnswer,
n1000 = 0,
n500 = 0,
n100 = 0,
n50 = 0,
n20 = 0,
n10 = 0,
n5 = 0,
n1 = 0,
n025 = 0,
n010 = 0,
n005 = 0,
n001 = 0;

float	nAmount = 0,
		fTotal = 0;


system("cls");
printf("\n\n\n\n");

/* passing the user's input */
nAmount = *nBillsresult; 
nAnswer = *nBillsresult;
DisplayUnderscore2();
printf("\n\n");

switch(*Billchoices)

{
	case 1 :
			/* if user's input is 1 */
			if(*Billchoices == 1){
				
				/* 
					minus user's input to 1000,
					to get the total of the change
				 */
				fTotal = 1000 - *nBillsresult;		
				nAmount = fTotal;
			}
			nAmount = fTotal; /* passing of value */
			n1000 = nAmount / 1000;					
			nAmount = n1000 * 1000; /* multiplies */			
			nAmount =  fTotal - nAmount;  /* minus */
			printf("\t\t\t\t\t");
			/* absolute value*/
			printf("Dispensing Change : %d - Php 1000\n", abs (n1000));

	case 2:
			if(*Billchoices == 2){
	
				fTotal = *nBillsresult - 500;
				nAmount = fTotal;
			}
			n500 = nAmount  / 500;
			nAnswer  = n500 * 500;
			nAnswer =  nAmount  - nAnswer;
			printf("\t\t\t\t\t");
			printf("Dispensing Change : %d - Php 500\n", abs (n500));

 	case 3:
 			if(*Billchoices == 3){
	
				fTotal = *nBillsresult - 100;
				nAnswer= fTotal;
			}
 			n100 = nAnswer/ 100;
			nAmount = n100  * 100;
			nAmount = nAnswer - nAmount;
			printf("\t\t\t\t\t");
			printf("Dispensing Change : %d - Php 100\n", abs (n100));

	case 4: 
			if(*Billchoices == 4){
	
				fTotal = *nBillsresult - 50;
				nAmount = fTotal;
			}
			n50 = nAmount / 50;
			nAnswer =  n50 * 50;
			nAnswer = nAmount - nAnswer;
			printf("\t\t\t\t\t");
			printf("Dispensing Change : %d - Php 50\n", abs (n50));
	
	case 5: 
			if(*Billchoices == 5){
				
				fTotal = *nBillsresult - 20;
				nAnswer = fTotal;
			}
			n20 = nAnswer / 20;     													
			nAmount  = n20 * 20;   	 												
			nAmount  = nAnswer - nAmount;
			printf("\t\t\t\t\t");
			printf("Dispensing Change : %d - Php 20\n", abs (n20));
				
	case 6:	
			if(*Billchoices == 6){
	
				fTotal = *nBillsresult - 10;
				nAmount  = fTotal;
			}	
			n10 = nAmount / 10;												
			nAnswer  = n10  * 10;
			nAnswer = nAmount - nAnswer;
			printf("\t\t\t\t\t");
			printf("Dispensing Change : %d - Php 10\n", abs (n10));
	
	case 7: 
	
			if(*Billchoices == 7){
	
				fTotal = *nBillsresult - 5;
				nAnswer = fTotal;
			}
	   	  	n5 = nAnswer / 5;
			nAmount  = n5 * 5; 
			nAmount  = nAnswer - nAmount;
			printf("\t\t\t\t\t");	
			printf("Dispensing Change : %d - Php 5\n", abs (n5));

	case 8:	
			if(*Billchoices == 8){
	
				fTotal = *nBillsresult - 1;
				nAmount  = fTotal;
			}	
			n1 = nAmount / 1;
			nAnswer  =  n1 * 1;
			nAnswer = nAmount - nAnswer;
			printf("\t\t\t\t\t");
			printf("Dispensing Change : %d - Php 1 \n", abs (n1));
			   	 					
 	case 9:
 			if(*Billchoices == 9){
	
				fTotal = *nBillsresult - 0.25;
				nAnswer = fTotal;
			}
 			n025 = nAnswer / .25;
			nAmount  = n025 * .25; 
			nAmount  = nAnswer - nAmount;
			printf("\t\t\t\t\t");
			printf("Dispensing Change : %d - Php 0.25\n", abs (n025));
		
	case 10: 
			if(*Billchoices == 10){
	
				fTotal = *nBillsresult - .10;
				nAmount  = fTotal;
			}	
			n010 = nAmount / .10;
			nAnswer  =  n010 * .10;
			nAnswer = nAmount - nAnswer;;
			printf("\t\t\t\t\t");	
			printf("Dispensing Change : %d - Php 0.10\n", abs (n010));

	case 11:
			if(*Billchoices == 11){
	
				fTotal = *nBillsresult - 0.05;
				nAnswer = fTotal;
			}
	   	    n005 =  nAnswer / .05;
			nAmount  = n005 * 0.05; 
			nAmount  = nAnswer - nAmount;				
			printf("\t\t\t\t\t");	
			printf("Dispensing Change : %d - Php 0.05\n", abs (n005));			
				
	case 12 :  
			n001 = nAmount / .01;
			nAnswer  =  n001 * .01;
			nAnswer = nAmount - nAnswer;
			printf("\t\t\t\t\t");	    			
			printf("Dispensing Change : %d - Php 0.01\n", abs (n001));
			printf("\n");
			
			break;
								
			
		}

printf("\t\t\t\t\t");
/* absolute value of the total of the inputs*/
printf("Your change : %.2f\n\n", fabs(fTotal));
DisplayUnderscore2();/* displays '_' */
Sleep(2000);

		return fTotal; /*  returns the change */

}
/* This function displays the previous TotalReciept()
but with a few tweaks such as displaying the total
change of the user and adding a itteration counter.
Precondition: all numbers are the same as the previous
functions.

@param *nAddnum is use to define how many iteration the 
program has been used.

@param *fTotalTwo uses the nBillsChange()'s result
		and displays it;

@return returns 1 to the main() to make sure the program
will loop.
*/

int
DisplayReceipt(float *nResultHam,
float *nResultPineapple,
float *nResultSausage,
float *nResultOlives,
float *nResultGorgonzola,
float *nResultFontina,
float *nResultParmesan,
int *nPizzaPriceSize,
char *cPizzaNameSize,
int *ResultTypeOfCrust,
int *nNumStuffings,
char * cStuffings,
float *nPriceStuffings,
float *fTotalTwo,
int *nAddnum)
{

*nAddnum = *nAddnum + 1; //to itterate the number of how the orders

printf("\n\n\n\n");
DisplayUnderscore2();/* displays '_' */
printf("\n\n\t\t\t\t\t");	
printf("#%d",*nAddnum);/* displays the number of itteration */
printf("\n\n\t\t\t\t\t");	
printf("IRISH'S PIZZARIA VENDING MACHINE:");
printf("\n\n");
printf("\t\t\t\t\t\t");
/* 

displays the TotalReceipt but with
the chnage of the user's money

*/

printf("(TOPPINGS) HAM :    \t %.2f\n",
 *nResultHam);
		 
printf("\t\t\t\t\t\t");	
printf("(TOPPINGS) PINEAPPLE :   %.2f\n",
*nResultPineapple);
		
printf("\t\t\t\t\t\t");	
printf("(TOPPINGS) SAUSAGE : \t %.2f\n",
*nResultSausage);
	
printf("\t\t\t\t\t\t");	
printf("(CHEESE)  GORGONZOLA :\t %.2f\n",
*nResultGorgonzola);
		
printf("\t\t\t\t\t\t");	
printf("(CHEESE) FONTINA :  \t %.2f\n",
*nResultFontina);
		
printf("\t\t\t\t\t\t");				
printf("(CHEESE) PARMESAN : \t %.2f\n",
*nResultParmesan);
		
printf("\t\t\t\t\t\t");	
printf("(TOPPINGS) OLIVES :  \t %.2f\n",
*nResultOlives);

/* 
	will run if user's past input is 
	'c', 's', or 'b' for the studdings
	
*/
if(*cStuffings == 'c' || *cStuffings == 'C' ){
		printf("\t\t\t\t\t\t");;	
		printf("(ADDS-ON) CHEESE :  \t %.2f\n",
		*nPriceStuffings);	
			
}else if (*cStuffings == 's' || *cStuffings  == 's'){
		printf("\t\t\t\t\t\t");	
		printf("(ADDS-ON) SPAM :  \t %.2f\n",
		*nPriceStuffings);
				
}else if(*cStuffings == 'b' || *cStuffings  == 'B'){
		printf("\t\t\t\t\t\t");	
		printf("(ADDS-ON) SPAM&CHEESE :  %.2f\n",
		*nPriceStuffings);	
}

/* 
	will run if user's past input is 
	'c', 's', or 'b' for the studdings
	
*/		
if(*cPizzaNameSize == 's'){
		
		printf("\t\t\t\t\t\t");	
		printf("(PIE) SMALL:  \t\t %d\n",
		*nPizzaPriceSize);
		
		}else if(*cPizzaNameSize == 'm'){
			
		printf("\t\t\t\t\t\t");	
		printf("(PIE) MEDIUM: \t\t %d\n",
		*nPizzaPriceSize);
		
		}else if(*cPizzaNameSize == 'l'){
		
		printf("\t\t\t\t\t\t");	
		printf("(PIE) LARGE:  \t\t %d\n",
		*nPizzaPriceSize);		
}

printf("\n\t\t\t\t\t\t\t");	
/* displays change */			 
printf ("RECIEPT: %.2f", fabs(*fTotalTwo));
printf("\n\n");
DisplayUnderscore2();


return 1; /* returns 1 to loop main() */
}

/* This function displays the countdown of making a pizza.
Precondition: all numbers are the same as the previous
functions.
@param *TimerTotalStuffs uses the sum of nTimerTotalTops
*nNumStuffings to know how many numbers will be added to
nSeconds
@return returns nothing
*/
void
PizzaTimer(int *TimerTotalStuffs)

{
/* variable declaration */
int nMinutes = 3,
nSeconds = 0;

	/* passing value  */	
	nSeconds =	*TimerTotalStuffs;
	
	
/* 
	will add 1 to minutes if nSeconds is
	greater than 60 and will minus 60 from 
	seconds	
*/	
if(nSeconds > 60) 
{		
		nMinutes += 1;
		nSeconds -= 60;
		
/*
	will add the total seconds 
	based from the toppins and 
	stuffings 

 */	
}else if(nSeconds > 1 && nSeconds < 60){
		
		nSeconds = 0;
		nSeconds = nSeconds + *TimerTotalStuffs;
}

printf("\n\n\n");	

/* will execute until 0: 00 */		
while(nSeconds != -1 && nMinutes!= -1) 
			{
				printf("\n %d:%d",nMinutes,nSeconds);
				if(nSeconds != -1)
				{
					nSeconds--;     /* decrement*/
				}
				if(nSeconds == 0 && nMinutes != 0)
				{
					nSeconds = 59; /* passing of value*/
					nMinutes--;    /* decrement*/
				}
				
		}
			
printf("\n\n Please enjoy the pizza!");
}

int
main()
{
/* variable declaration*/

int		*nAddnum,
		nRepeatProg,
		nNum11 = 0;
		
nAddnum = &nNum11;



/* infinite loop */

while((nRepeatProg = 1)){



/* variable declaration  and initialization*/

char	cPizzaNameSize,
		*cResultcCrustSize,
		*cStuffings,
		cCharFlush2,
		nNum2 = 0,
		nNum3 = 0;			

int		nBillschoices,
		nNum1 = 0,
		nToppingsHam = 0,
		nToppingsPineapple = 0,
		nToppingsSausage = 0, 
		nToppingsOlives = 0, 
		nToppingsGorgonzola = 0, 
		nToppingsFontina = 0,
		nToppingsParmesan = 0,
		nPizzaPriceSize,
		nResultTypeOfCrust,
		*nNumStuffings,
		nTimerTotalTops,
		TimerTotalStuffs;

float	nResultPineapple = 0,  
		nResultHam = 0, 
		nResultSausage = 0,  
		nResultOlives = 0,
		nResultGorgonzola = 0,
		nResultFontina = 0,			
		nResultParmesan = 0,
		Totalbills = 0,
		fTotalChange = 0,
		nSutffingTwo;
		
	
nNumStuffings = &nNum1;	
cResultcCrustSize = &nNum2;	    
cStuffings = &nNum3;

InterfaceScreen(); /*shows the start up screen*/

/* initialization of nResultTypeOfCrust*/
nResultTypeOfCrust = TypeOfCrust();

/* pass by reference*/
cCrustSize(cResultcCrustSize);    


/* pass by value*/
TypeOfToppings(&nToppingsHam,
			    &nToppingsPineapple,
				&nToppingsSausage, 
				&nToppingsOlives, 
				&nToppingsGorgonzola, 
				&nToppingsFontina,
				&nToppingsParmesan);
										
										
/*initialization of TypeOfToppings()*/
nResultHam = nToppingsHam;
nResultPineapple = nToppingsPineapple;
nResultSausage = nToppingsSausage;
nResultOlives = nToppingsOlives;
nResultGorgonzola = nToppingsGorgonzola;
nResultFontina = nToppingsFontina;
nResultParmesan = nToppingsParmesan;										
										

/* pass by value of the TypeOfToppings() */						  						   		
ComputationToppings(&nResultHam, 
					&nResultPineapple,
					&nResultSausage, 
					&nResultOlives,
					&nResultGorgonzola, 
					&nResultFontina, 
					&nResultParmesan, 
					&nPizzaPriceSize,
					&cPizzaNameSize, 	
					cResultcCrustSize);
					

/* pass by value and reference*/	  		
Totalbills = TotalReciept(  &nResultHam,
						    &nResultPineapple,  
						    &nResultSausage,  
						    &nResultOlives,
					    	&nResultGorgonzola,
							&nResultFontina,			
							&nResultParmesan,
							&nPizzaPriceSize,
							&cPizzaNameSize,
							&nResultTypeOfCrust,
							nNumStuffings,
							cStuffings,
							&nSutffingTwo);						



/* loop to determine if input is valid */
do{
	
DisplayBillsChange();/* displays the type of bills*/

printf("\n");
printf("\t\t\t\t\t\t ===> ");


/* stores the value*/
if(scanf("%d", &nBillschoices) != 1){
		
		/* removes the loop cause by char*/
		scanf(" %c", &cCharFlush2);
		printf("\t\t\t\t\t\t\t  <INVALID>");
		Sleep(500);
		system("cls");
	
		
}else if(nBillschoices < 1 || nBillschoices > 12 ){
	  
	  printf("\t\t\t\t\t\t\t  <INVALID>");
	  Sleep(500);
	  system("cls");
	
}else
	/* passing value to a variable */
	fTotalChange = nBillsChange(&Totalbills, &nBillschoices, 
                        	&fTotalChange);

}while(nBillschoices != 0 && nBillschoices != 1 && 
      nBillschoices != 2 && nBillschoices != 3 && 
      nBillschoices != 4 && nBillschoices != 5 &&
      nBillschoices != 6 && nBillschoices != 7 && 
	  nBillschoices != 8 && nBillschoices != 9 && 
	  nBillschoices != 10 && nBillschoices != 11 &&
      nBillschoices != 12);

/* computes the all user's toppings input*/
nTimerTotalTops = (nToppingsHam  + nToppingsPineapple +
				  + nToppingsSausage + nToppingsOlives +
				  + nToppingsGorgonzola + nToppingsFontina 
				  + nToppingsParmesan) * 2;


/* determines the user's stuffing's input if it's 'b'*/
if(*cStuffings == 'b' || *nNumStuffings == 'B')


	*nNumStuffings *= 10;/* gives value 10 */
	
	
/* determines the choosen stuffing's if it's 's' or 'c'*/	
else if(*cStuffings == 's' || *nNumStuffings == 'S'|| 
		*cStuffings == 'c' || *nNumStuffings == 'C')
 		
 		
	*nNumStuffings *= 5; 	/* gives value 5 */


/* computes the user's toppings and stuffings */
TimerTotalStuffs = 	nTimerTotalTops + *nNumStuffings;
		
/* timer */
PizzaTimer(&TimerTotalStuffs);


/* 
	Calling all the user's input
	from TotalReceipt() and the 
	fTotalChange() then calculates it.
	also this returns a 1 to loop the 
	main()

*/
nRepeatProg =	DisplayReceipt(&nResultHam, 
						  	&nResultPineapple,  
							&nResultSausage,  
							&nResultOlives,
							&nResultGorgonzola,
							&nResultFontina,			
							&nResultParmesan,
							&nPizzaPriceSize,
							&cPizzaNameSize,
							&nResultTypeOfCrust,
							nNumStuffings,
							cStuffings,
							&nSutffingTwo,
							&fTotalChange,
							nAddnum);

	

Sleep(2000);

}
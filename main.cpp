#include "windows.h"
#include "stdio.h"
#include "math.h"
#include "stdlib.h"
#include "conio.h"
#define pi 22/7
using namespace std;

int main(void) {

  // Develop a switch case to toggle the color attribute before any printf or scnaf
  // Selcet code then use ctrl+ "/" to uncomment it
  // switch (SetConsoleTextAttribute(hConsole,FOREGROUND_GREEN)) {
    //   case printf("%f\n", );:
    //
    //   break;
    // }

  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  float s1 , s2, s3, theta;


  do {

  printf("\n Please enter the first side:\n");
  SetConsoleTextAttribute(hConsole,FOREGROUND_GREEN);
  scanf("%f", &s1 );

  SetConsoleTextAttribute(hConsole,FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
  printf(" Please enter the second side:\n");
  SetConsoleTextAttribute(hConsole,FOREGROUND_GREEN);
  scanf("%f", &s2 );

  SetConsoleTextAttribute(hConsole,FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
  printf(" Please enter angle between them:\n");
  SetConsoleTextAttribute(hConsole,FOREGROUND_GREEN);
  scanf("%f", &theta);

  theta = theta* pi /180;
  s3 = sqrt( pow(s1,2) + pow(s2,2) - 2*s1*s2*cos(theta));


  SetConsoleTextAttribute(hConsole,FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
  printf(" The third side is: ");
  SetConsoleTextAttribute(hConsole,FOREGROUND_RED);
  printf("%5.2f\n\n", s3);
  SetConsoleTextAttribute(hConsole,FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);


  printf("Do you want to try again?(y/n) \n");
}

while(getche()=='y');
}

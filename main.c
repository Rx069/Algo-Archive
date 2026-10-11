/*

////////////////////////////////////////////
// Code to Define some Data Types

#include<stdio.h>
int main(){

  int num = 5;
  float dec = 3.140;
  char word[] = "Hello, World!";

  printf("%d is an integer!\n", num);
  printf("%f is a float!\n", dec);
  printf("%s is a string!\n", word);
  return 0;
}

///////////////////////////////////////////
*/

//----------------------------------------------------------

///////////////////////////////////////////////////////
// Merge name and greet, with string copy/paste method
///////////////////////////////////////////////////////


/*
#include<stdio.h>
#include<string.h> // required for strcat and strcpy
int main(){

  char name[100];
  char name2[100];
  char fullname[200];

  printf("Enter your First name: ");
  scanf("%s", name);
  printf("Enter your Last name:  ");
  scanf("%s", name2);

  //generate full name;

  //strcpy(fullname, name); //add first name in full name
  //strcat(fullname, " ");  // Give Space in name
  //strcat(fullname, name2); // glue to the end, just adds text in end.


  printf("Hello, %s how are youhhh\n",fullname);

  return 0;
}
*/

////////////////////////////////////////////////////////////////////////
//---------------------------------------------------------------------------

///////////////////////////////////////////////////
///Merge name and greet without string copy/paste
//////////////////////////////////////////////////
/*
#include<stdio.h>

int main(){

  char name[100];
  char name2[100];

  printf("Enter your First name: ");
  scanf("%s", name);
  printf("Enter your Last name:  ");
  scanf("%s", name2);


  printf("Hello, %s %s how are youhhh\n", name, name2);

  return 0;
}

*/
///////////////////////////////////////////////////////////
//-----------------------------------------------------------

//////////////////////////////////////////////
/*🏋️ The Challenge: Circle Calculator

     Write a short C program that calculates the area of a circle.
    /////////////////////////////////////////////


// logic : formula of area of circle -> area = (Pi * radius * radius) .

#include <stdio.h>
int main(){

    const float PI = 3.14159;
    float radius = 5.5;
    float area = PI * radius * radius;
    printf("Area is : %.2f" , area);  // extras: usin "%.2f" will cap the output to only ( xx.yy ) two palce values.

    return 0;
}
*/
//////////////////////////////////////////////////////////

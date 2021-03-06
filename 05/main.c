/*
   University of California Extension, Santa Cruz

   Advanced C Programming

   Instructor: Rajainder A.
   Author: Kei Nohguchi
   Assignment Number: 5

   Topic: Pointers and pointer of pointers.

   file name: main.c

   Date: April 30th, 2016

   Objective: There is an integer 25, a float 3.142, a double 1.73217,
              a string "Hello, C Programmer", and a char 'x'.

              All the above have their pointers and pointers are assigned
              the addresses of respective variables.

              There is a special pointer which is a pointer to the integer
              pointer.

              You can initialize all the variables and pointers at compile
              time.  Print the value of the variables, their addresses and
              the address of the pointers.

              Dereference the pointers and print the values at respective
              pointers.  Dereference the pointer to integer pointer and
              print the value.

*/

#include <stdio.h>

int main()
{
	int i = 25;
	float f = 3.142;
	double d = 1.73217;
	char *s = "Hello, C Programmer";
	char c = 'x';
	int *iptr = &i;
	float *fptr = &f;
	double *dptr = &d;
	char **sptr = &s;
	char *cptr = &c;
	int **iptrptr = &iptr;

	printf("Actual values\n");
	printf("-------------\n");
	printf("%-55s %d\n", "Integer i:", i);
	printf("%-55s %f\n", "Float f:", f);
	printf("%-55s %F\n", "Double d:", d);
	printf("%-55s %s\n", "String s:", s);
	printf("%-55s %c\n", "Character c:", c);

	printf("\nAddresses of the value, using the corresponding pointers\n");
	printf("--------------------------------------------------------\n");
	printf("%-55s %p\n", "Address of integer i:", iptr);
	printf("%-55s %p\n", "Address of float f:", fptr);
	printf("%-55s %p\n", "Address of double d:", dptr);
	printf("%-55s %p\n", "Address of string s:", sptr);
	printf("%-55s %p\n", "Address of character c:", cptr);
	printf("%-55s %p\n", "Address of pointer to integer i:", iptrptr);

	printf("\nAddress of the pionters\n");
	printf("-----------------------\n");
	printf("%-55s %p\n", "Address of the integer pionter iptr:", &iptr);
	printf("%-55s %p\n", "Address of the float pointer fptr:", &fptr);
	printf("%-55s %p\n", "Address of the double pinter dptr:", &dptr);
	printf("%-55s %p\n", "Address of the string s pointer sptr:", &sptr);
	printf("%-55s %p\n", "Address of the character c pinter cptr:", &cptr);
	printf("%-55s %p\n", "Address of the pointer to integer i iptrptr:",
			&iptrptr);

	printf("\nActual values by dereferencing the corresponding pointers\n");
	printf("---------------------------------------------------------\n");
	printf("%-55s %d\n", "Integer i, by *iptr:", *iptr);
	printf("%-55s %f\n", "Float f, by *fptr:", *fptr);
	printf("%-55s %F\n", "Double d, by *dptr:", *dptr);
	printf("%-55s %s\n", "String s, by *sptr:", *sptr);
	printf("%-55s %c\n", "Character c, by *cptr:", *cptr);
	printf("%-55s %d\n", "Integer i, by **iptrptr:", **iptrptr);
}

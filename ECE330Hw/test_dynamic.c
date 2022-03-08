#include "matrix_dynamic.h"
#include "matrix_dynamic.c"

int main() 
{
	  static T data[] = {1,2,3,4};
	    matrix  a,b;
		  a = create_initvals(2,2,data);
		    b = create_empty(2,2);
			  equate(&a,&b);
			    printf("\n Matrix a:");
				  matrix_print(a);
				    printf("\n Matrix b:");
					  matrix_print(b);
					    printf("\n a+b:");
						  matrix_print(add(a,b));
						  printf("\nBefore Transpose, matrix a is:");
						  matrix_print(a);
						  transpose(a);
						  printf("\nBefore Transpose, matrix b is:");
						  matrix_print(b);
						  transpose(b);
						 
						 
}

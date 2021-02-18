//Write a program in C to copy the elements of one array into another array.
//Input Format: Input consist of Two lines. First Line contains the number of elements N and the next contains array elements (space separated). 
//Output Format: Output consist of a single line, display the array elements( first and second(copied array) array) in the given order with space separated with appropriate statement
//Example
//Input:
//3 
//15 10 12
//Output: 
//The elements stored in the first array are :
//15 10 12
//The elements copied into the second array are :
//15 10 12
#include<stdio.h> 

int main()
{
   //Declare all the variables[N, array a & array b, i] used in the code
   int N , a[10] , b[10] , i;
   printf("Enter the value of N\n");
   scanf("%d",&N);
   printf("Enter the array & elements\n");
   for(i=0 ; i<N ; i++)
   {
     scanf("%d",&a[i]);
   }
   for(i=0 ; i<N ;i++)
   {
     b[i]=a[i];
   }
   printf("The elements stored in he first array A :\n");
   for(i=0 ; i<N ;i++)
   {
     printf("%d\t",a[i]);
   }
   printf("\nThe elements stored in the second array B :\n");
   for(i=0 ; i<N ;i++)
   {
     printf("%d\t",b[i]);
   }  


   //Read the Value of N using scanf statement
   //Read the array elements using for loop and scanf statment
   //Copy the elements of array 'a'[first array] to  array 'b'[second array] using for loop
   //Print the both array elements in using printf statement in the above specified format
   return 0; 
}

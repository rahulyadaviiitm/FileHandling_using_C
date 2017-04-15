#include <stdio.h>
void main()

{
    FILE *fptr;
    char name[20];
    int marks;
    float salary;
   fptr = fopen("marksfl.txt", "w");
   if (fptr == NULL)
    {
      printf("File does not exists \n");
      return;
    }
    do
    {
    printf("Enter the Marks\n");
    scanf("%d", &marks);
    fprintf(fptr, "%d\n", marks);
    }
    while (marks!=-1)
    fclose(fptr);

}
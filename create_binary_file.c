#include <stdio.h>
void main()

{
    FILE *fptr;
    char name[20];
    int marks;
    float salary;
   fptr = fopen("binarymarksfl.b", "wb");
   if (fptr == NULL)
    {
      printf("File does not exists \n");
      return;
    }
    do
    {
    printf("Enter the Marks\n");
    scanf("%d", &marks);
    fwrite(&marks ,sizeof(int), 1 , fptr);
    }
    while (marks!=-1);
    fclose(fptr);

}
#include <stdio.h>
void main()

{
    FILE *fptr;
    int marks,count=0,sum=0;
    fptr = fopen("marksfl.txt", "rt");
   if (fptr == NULL)
    {
      printf("File does not exists \n");
      return;
    }
     while (!feof(fptr))
    {

     fscanf(fptr, "%d\n", &marks);
     printf("%d\n",marks);
     sum+=marks;
     count++;
    }
   int res=sum/count;
   printf("Avg Marks: \n");
   printf("%d\n",res);
    fclose(fptr);


}
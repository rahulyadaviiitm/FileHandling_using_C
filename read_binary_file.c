#include <stdio.h>
void main()

{
    FILE *fptr;
    int marks,count=0,sum=0;
    fptr = fopen("binarymarksfl.b", "rb");
   if (fptr == NULL)
    {
      printf("File does not exists \n");
      return;
    }
     while (!feof(fptr))
    {

     fread(&marks ,sizeof(int), 1 , fptr);
     printf("%d\n",marks);
     sum+=marks;
     count++;
    }
    // fseek(fptr,+1*sizeof(int),SEEK_SET);
    // fread(&marks ,sizeof(int), 1 , fptr);
   int res=sum/count;
   printf("Avg Marks: \n");
   printf("%d\n",marks);
   fclose(fptr);
}
#include<stdio.h>

int main()
{
  FILE *f;
  char s[50];
  f=fopen("testFile.txt","w");//will create a new file if it does not exist
  if(f!=NULL)
  {
    printf("\nfile opened successfuly");

  }
  else
  {
  printf("\nsorry file couldn't open");
  return 0;
  }
  printf("\nenter the string\n");
  gets(s);
  for(int i=0;s[i]!='\0';i++)
  {
    fputc(s[i],f);
  }
  fclose(f); //will force buffer to transfer data from buffer to file
  //until this line file won't be written
  return 0;
}
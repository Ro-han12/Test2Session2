#include<stdio.h>
void input_string(char *string,char *substring)
{
  printf("Enter the string\n");
  scanf("%s",string); //hello
  printf("Enter the substring\n");
  scanf("%s",substring); //llo
}
int str_reverse(char *string,char *substring)
{
  int count=0,count1=0,index,i,j;
  for(i=0;string[i]!='\0';i++)
  {
    count++;   //hello
  }
  for(int i=0;substring[i]!='\0';i++)
  {
    count1++;
  }
  if(count1>count)
  {
    index=-1;
  }
  for(i=0;i<count;i++) //hello 
  {
    for(j=0;j<count1;j++) //llo
    {
      if(string[i+j]!=substring[j])
      {
        break;
      }
    }
    if(j==count1)
    {
      index=i;
    }
  }
  return index;
}
void output(char *string,char *substring,int index)
{
  int count=0,i;
  for(i=0;string[i]!='\0';i++)
  {
    count++;
  }
  if(index<count && index>=0)
    printf("The index of %s in %s is %d",substring,string,index);
    
  else
    printf("not possible");
}
int main()
{
  char string[200],substring[200];
  int index;
  input_string(string,substring);
  index=str_reverse(string,substring);
  output(string,substring,index);
  return 0;
}
.
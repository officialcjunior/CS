#include<stdio.h>
int search(char[],char[]);
void delete_word(char[],char[],int);
int main()
{
  char str[100],word[30];
  int index;
  printf("Enter the string\n");
  fgets(str,100,stdin);
  printf("Enter the word to be deleted\n");
  scanf("%s",word);
  index=search(str,word);
  if(index!=-1)
  {
    delete_word(str,word,index);
    printf("The string without the word is:\n%s\n",str);
  }
  else
  printf("Word not present in the string\n");
  return 0;
}
void delete_word(char str[],char word[],int index)
{
   int i,l;
   for(l=0;word[l]!='\0';l++);
   for(i=index;str[i+l]!='\0';i++)
   str[i]=str[i+l+1];
   str[i]='\0';
}
int search(char str[],char word[])
{
    int i=0,j=0,len;
    for(len=0;word[len]!='\0';len++);
    while(str[i]!='\0' && word[j]!='\0')
    {
      if(str[i]==word[j])
      j++;
      else 
      j=0;
      i++;
    }
    if(j==len)
    return (i-j);
    else
    return -1;
}

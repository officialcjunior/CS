/*Write a use defined function for replacing a pattern (word) with another word in a given text string.(Do not use any inbuilt functionof string.h)
Sample input :- Input Text:-He is a bad boy
              Pattern:- to be replaced bad
              Textto:- replace the abovepattern good
              Output:- He is a good boy
*/
#include<stdio.h>
int search(char[],char[]);                           //This function for searching the position of the word to be replaced
void replace_word(char[],char[],char[],char[],int); //This function helps to replace the word
int main()
{
  char str[100],word[30],neword[30],newstr[100];
  int index;
  printf("Enter the string\n");       
  fgets(str,100,stdin);                      //To accept the main initial string
  printf("Enter the word to be replaced\n");
  scanf("%s",word);                          //To accept the word that has to be replaced from the above sentence
  printf("Enter the word which should come instead\n");
  scanf("%s",neword);                        //To accept the word that has to come in its place
  index=search(str,word);                    //Function call to check if the word is present in the sentence
  if(index!=-1)
  {
    replace_word(str,word,neword,newstr,index); //If the word is present in the sentence we sent it to the replace function to replace it and display it here.
    printf("The string without the word is:\n%s\n",newstr);
  }
  else
  printf("Word not present in the string\n"); //Else it means the enter word is not there in the sentence.
  return 0;
}
void replace_word(char str[],char word[],char neword[],char newstr[],int index)
{
   int i,l,t;
   for(l=0;word[l]!='\0';l++);  //This helps to find the length of the word to be replaced.
   for(i=0;i<index;i++)         //Here we are adding all the words until that word to the new string.
   newstr[i]=str[i];
   for(t=0;neword[t]!='\0';i++,t++) //Here we are adding the new word in place of the old word.
   newstr[i]=neword[t];
   for(t=index+l;str[t]!='\0';t++,i++)  //The remaining words if any are added at the end.
   newstr[i]=str[t];
   newstr[t]='\0';
   str[i]='\0';
}
int search(char str[],char word[])
{
    int i=0,j=0,len;
    for(len=0;word[len]!='\0';len++);      //This helps to find the length of the word to be searched.
    while(str[i]!='\0' && word[j]!='\0')
    {
      if(str[i]==word[j])     //This loop helps to iteratively find if the word we are searching is there in the string by comparing character by character.
      j++;
      else 
      j=0;   //If any one position does not matter the loop variable of the word starts from 1st.If the word is still not found we return -1 .
      i++;
    }
    if(j==len)
    return (i-j);
    else
    return -1;
}

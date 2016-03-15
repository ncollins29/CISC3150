#include<iostream>
using namespace std;

void reverse(char *begin, char *end);

void reverseWords(char *r)
{
    char *word_begin = NULL;
    char *temp = r; 
 
    /*STEP 1 of the above algorithm */
    while( *temp )
    {
        /*This condition is to make sure that the string start with
          valid character (not space) only*/
        if (( word_begin == NULL ) && (*temp != ' ') )
        {
            word_begin=temp;
        }
        if(word_begin && ((*(temp+1) == ' ') || (*(temp+1) == '\0')))
        {
            reverse(word_begin, temp);
            word_begin = NULL;
        }
        temp++;
    } /* End of while */
 
    /*STEP 2 of the above algorithm */
    reverse(r, temp-1);
}

/* UTILITY FUNCTIONS */
/*Function to reverse any sequence starting with pointer
  begin and ending with pointer end  */
void reverse(char *begin, char *end)
{
  char temp;
  while (begin < end)
  {
    temp = *begin;
    *begin++ = *end;
    *end-- = temp;
  }
}
 
/* checking the functions to make sure it works*/
int main()
{
  char r[] = "This is an interesting class";
  char *temp = r;
  reverseWords(r);
  printf("%s", r);
  getchar();
  return 0;
}

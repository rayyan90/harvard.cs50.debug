#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>
int main(void)
{
   string key = get_string("key: ");
   string Plain = get_string("plain text: ");
   int len = strlen(Plain);
   int KEY = atoi(key);
   int len2 = strlen(key);
  
   for(int i = 0; i < len; i++)
   {
     for(int z = 0; z < len2; z++)
     {      
       if (isdigit(Plain[i]))
       {
           printf("error\n");
       }
       else if(isdigit(key[z]))
       {
       if(isalpha(Plain[i]))
       {
           for(int x = 0; x < len; x++)
           {  
           if(isupper(Plain[x]))
           {
               if(Plain[x] + KEY > 'Z')
               {
                   char keyremainder = Plain[x] + KEY - 'Z';
                   char UP = keyremainder + 'A' - 1;
                   printf("%c", UP);
                   if(x == len - 1)
                   {
                       return 0;
                   } 
               }
               else
               {
                   char up = Plain[x] + KEY - 1;
                   printf("%C", up);
                   if(x == len - 1)
                   {
                       return 0;
                   } 
               }
           }
           if(islower(Plain[x]))
           {
               if(Plain[x] + KEY > 'z')
               {
                   char KEYREMAINDER = Plain[x] + KEY - 'z';
                   char LOW = KEYREMAINDER + 'a' - 1;
                   printf("%c", LOW);
                   if(x == len - 1)
                   {
                       return 0;
                   } 
               }
               else
               {
                   char low = Plain[x] + KEY - 1;
                   printf("%C", low);
                   if(x == len - 1)
                   {
                       return 0;
                   } 
               }
           }
           if(Plain[x] > 'a')
           {
               if(Plain[x] < 'z')
               {
                    char LOw = Plain[x] + KEY - 1;
                   printf("%C", LOw);
                   if(x == len - 1)
                   {
                       return 0;
                   } 
               }
           }
           if(Plain[x] > 'A')
           {
               if(Plain[x] < 'Z')
               {
                    char uP = Plain[x] + KEY - 1;
                   printf("%C", uP);
                   if(x == len - 1)
                   {
                       return 0;
                   } 
               }
           }
           }
       }
       }
     }
   }
}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MY_DIC_SIZE 20
#define MY_WORD_LEN 20


char g_dic[MY_DIC_SIZE][MY_WORD_LEN] = {
   "family"
   ,"love"
   ,"security"
   ,"hello"
   ,"computer"
   ,"sungshin"
   ,"network"
   ,"system"
   ,"hacking"
   ,"science"
   ,"future"
   ,"software"
   ,"structure"
   ,"convergence"
   ,"information"
   ,"forensic"
   ,"database"
   ,"learning"
};

int g_step = 0;

void IniGame(char* com, char* p)
{
   int index;
   int i;

   srand(time(NULL));
   index = rand() % MY_DIC_SIZE;
   strcpy(com, g_dic[index]);
   
   for (i = 0; i < strlen(com); i++)
   {
      p[i] = '*';
   }
   p[i] = '\0';
}

int main()
{
   char com[MY_WORD_LEN];
   char p[MY_WORD_LEN];


   IniGame(com, p);


   return 0;
}
int InputChar(char com[MY_WORD_LEN], char p[MY_WORD_LEN])
{
    char key;
    
    int len;
    int check=0;
    int i;
    
    printf(" |nHint:%s |n", p);
    printf(" Input char:");
    
    if (scanf(" %c", &key) !=1) {
    printf
    }}

    void ShowHangman()
{
   switch (g_step)
   {
   case 0:
      printf("   +---+\n");
      printf("       |\n");
      printf("       |\n");
      printf("       |\n");
      printf("       |\n");
      printf("       |\n");
      printf("\n");

      break;
   case 1:
      printf("   +---+\n");
      printf("   O   |\n");
      printf("       |\n");
      printf("       |\n");
      printf("       |\n");
      printf("       |\n");
      printf("\n");

      break;
   case 2:
      printf("   +---+\n");
      printf("   O   |\n");
      printf("   |   |\n");
      printf("       |\n");
      printf("       |\n");
      printf("       |\n");
      printf("\n");

      break;
   case 3:
      printf("   +---+\n");
      printf("   O   |\n");
      printf("  /|   |\n");
      printf("       |\n");
      printf("       |\n");
      printf("       |\n");
      printf("\n");

      break;
   case 4:
      printf("   +---+\n");
      printf("   O   |\n");
      printf("  /|\\  |\n");
      printf("       |\n");
      printf("       |\n");
      printf("       |\n");
      printf("\n");

      break;
   case 5:
      printf("   +---+\n");
      printf("   O   |\n");
      printf("  /|\\  |\n");
      printf("   |   |\n");
      printf("       |\n");
      printf("       |\n");
      printf("\n");

      break;
   case 6:
      printf("   +---+\n");
      printf("   O   |\n");
      printf("  /|\\  |\n");
      printf("   |   |\n");
      printf("  /    |\n");
      printf("       |\n");
      printf("\n");

      break;
   case 7:
      printf("   +---+\n");
      printf("   O   |\n");
      printf("  /|\\  |\n");
      printf("   |   |\n");
      printf("  / \\  |\n");
      printf("       |\n");
      printf("\n");

      break;
   case 8:
      printf("   +---+\n");
      printf("       |\n");
      printf("       |\n");
      printf("       |\n");
      printf("       |\n");
      printf("0-<-<  |\n");
      printf("\n");

      break;
   default:
      break;
   }
}
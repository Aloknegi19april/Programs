#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include<time.h>
#include<ctype.h>
#include <time.h>
#include <windows.h>
#include <process.h>

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

#define SIZE 4
#define BORDER 219
#define ESC 57
#define PR 2
int a[20];
int Matrix[SIZE+1][SIZE+1]={0};
int score=0,last=0,count = 2584;
void starting()
{
  
    printf("\n\n\n\t\t\tINSTRUCTION\n\n\n");
    printf(" -> Use the arrow keys to move\n");
    printf(" -> Combine numbers that are next to each other in the Fibonacci sequence\n to make bigger numbers\n\n");
    printf(" -> For wining this game any one box must have value 2584. \nAlso You have 2584 tries to win\n\n\n\n");
    printf("\t\t\t\t\t\tPRESS ANY KEY TO PLAY\n");
    while(!kbhit());
}
void print_ever()
{
    printf("\n\n\n\t\t\tFIBONACCI TWO-ZERO-FOUR-EIGHT\n\n");
    printf("\t\t\t\t\t\t SCORE  : %d\n\n\n\n",score);
    printf("\t\t\t %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER);

}
void Display()
{
    int i,j;
    system("cls");
    print_ever();
    for(i=0;i<SIZE;i++)
    {
        printf("\t\t\t %c",BORDER);
        for(j=0;j<SIZE;j++)
        {
            if(Matrix[i][j]==0)
            {
                printf("      ");
            }
            else
                printf(" %4d ",Matrix[i][j]);
        }
        printf("%c\n\t\t\t %c                        %c\n",BORDER,BORDER,BORDER);
    }
    printf("\t\t\t %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n",BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER);
}
void Random_creater()
{
    int temp1,temp2,i,j;
    srand(time(NULL));
    temp1=rand()%SIZE;  // i

    srand(time(NULL));
    temp2=rand()%SIZE;  // j



    for(i=0;i<temp1;i++)
    {
        for(j=temp2;j<SIZE;j++)
        {
            if(Matrix[i][j]==0)
            {
                Matrix[i][j]=1;
                return;
            }
        }
    }

}
void Starting_Random()
{
    int temp1,temp2,add,i,j;
    srand(time(NULL));
    temp1=rand()%SIZE;  // i

    srand(time(NULL));
    temp2=rand()%SIZE;  // j
    Matrix[temp1][temp2]=1;
    Random_creater();
    Display();
}


printer(char s[])
{
    int i=0,k;
    while(s[i]!='\0')
    {
        printf("%c",s[i]);
        for(k=0;k<65535;k++);
        for(k=0;k<65535;k++);
        i++;
    }
}
void record()
{
    char plname[20],cha,c;
    int i,j;
    FILE *info;
    info=fopen("record.txt","a+");
    getch();
    system("cls");
    printf("Enter your name\n");
    scanf("%s",plname);
  
    fprintf(info,"Player Name :%s\n",plname);
    //for date and time

 time_t mytime;
   mytime = time(NULL);
   fprintf(info,"Played Date:%s",ctime(&mytime));
   fprintf(info,"Score:%d\n",score);//call score to display score
    
    for(i=0;i<=50;i++)
    fprintf(info,"%c",'_');
    fprintf(info,"\n");
    fclose(info);
    printf("want to see past records press 'y'\n");
    cha=getch();
    system("cls");
    if(cha=='y'){
     info=fopen("record.txt","r");
     do{
         putchar(c=getc(info));
        }while(c!=EOF);}
      fclose(info);
      printf("\n\n\n\t\t\t\tPRESS ANY KEY TO EXIT\n");
      while(!kbhit());
}
void ending()
{
    /*here print prev high score and current score from file */
    printf("\n\n\t\t\t\tYOUR SCORE is  : %d",score);
    record();
}


int Temp_counter()
{
    /* IT SHOULD FIND MAX VALUE FROM WHOLE MATRIX  */
    int temp=0,i,j;

    for(i=0;i<SIZE;i++)
    {
        for(j=0;j<SIZE;j++)
        {
            if(Matrix[i][j]==2584)
                return(1);
            if(Matrix[i][j]==0)
                temp=1;
        }
    }
    if(temp==1)
    {
        last=0;
        return(-99);
    }
    else
    {
        if(last==1)
        {
            return(0);
        }
        last=1;
        return(-99);
    }
}

void Down()
{
    int i,j;
    for(j=0;j<SIZE;j++)
    {
        i=2;
        while(1)
        {
            while(Matrix[i][j]==0)
            {
                if(i==-1)
                    break;
                i--;
            }
            if(i==-1)
                break;
            while(i<SIZE-1 && (Matrix[i+1][j]==0 || (Matrix[i][j] == 1 && Matrix[i+1][j]==1) ||((Matrix[i][j] != Matrix[i+1][j]) && !(abs(Matrix[i][j]-Matrix[i+1][j]) > min(Matrix[i][j],Matrix[i+1][j])))))
            {
                if(Matrix[i+1][j] != 0)
     score = score +Matrix[i+1][j]+Matrix[i][j];
    Matrix[i+1][j]+=Matrix[i][j];
              
                Matrix[i][j]=0;
                i++;
            }
            i--;
        }
    }
}
void Up()
{
    int i,j;
    for(j=0;j<SIZE;j++)
    {
        i=1;
        while(1)
        {
            while(Matrix[i][j]==0)
            {
                if(i==SIZE)
                    break;
                i++;
            }
            if(i==SIZE)
                break;
            while(i>0 && (Matrix[i-1][j]==0 || (Matrix[i][j] == 1 && Matrix[i-1][j]==1) ||((Matrix[i][j] != Matrix[i-1][j]) && !(abs(Matrix[i][j]-Matrix[i-1][j]) > min(Matrix[i][j],Matrix[i-1][j])))))
            {
                if(Matrix[i-1][j] != 0)
     score = score +Matrix[i-1][j]+Matrix[i][j];
    Matrix[i-1][j]+=Matrix[i][j];
              
                Matrix[i][j]=0;
                i--;
            }
            i++;
        }
    }
}
void Right()
{
    int i,j;
    for(i=0;i<SIZE;i++)
    {
        j=2;
        while(1)
        {
            while(Matrix[i][j]==0)
            {
                if(j==-1)
                    break;
                j--;
            }
            if(j==-1)
                break;
            while(j<SIZE-1 && (Matrix[i][j+1]==0 || (Matrix[i][j] == 1 && Matrix[i][j+1]==1) ||((Matrix[i][j] != Matrix[i][j+1]) && !(abs(Matrix[i][j]-Matrix[i][j+1]) > min(Matrix[i][j],Matrix[i][j+1])))))
            {
                if(Matrix[i][j+1] != 0)
     score = score +Matrix[i][j+1]+Matrix[i][j];
    Matrix[i][j+1]+=Matrix[i][j];
              
                Matrix[i][j]=0;
                j++;
            }
            j--;
        }
    }
}
void Left()
{
    int i,j;
    for(i=0;i<SIZE;i++)
    {
        j=1;
        while(1)
        {
            while(Matrix[i][j]==0)
            {
                if(j==SIZE)
                    break;
                j++;
            }
            if(j==SIZE)
                break;
            while(j>0 && (Matrix[i][j-1]==0 || (Matrix[i][j] == 1 && Matrix[i][j-1]==1) ||((Matrix[i][j] != Matrix[i][j-1]) && !(abs(Matrix[i][j]-Matrix[i][j-1]) > min(Matrix[i][j],Matrix[i][j-1])))))
            {
                if(Matrix[i][j-1] != 0)
     score = score+Matrix[i][j-1]+Matrix[i][j];
    Matrix[i][j-1]+=Matrix[i][j];
              
                Matrix[i][j]=0;
                j--;
            }
            j++;
        }
    }
}

void Action(int Arrow)
{
 
    switch(Arrow)
    {
        case UP:
            {
                Up();
                break;
            }
        case DOWN:
            {
                /* logic here */
                Down();
                break;
            }
        case LEFT:
            {
                Left();
                break;
            }
        case RIGHT:
            {
                Right();
                break;
            }
        default:
            {
                /*DO NOTHING */
                return;
            }
    }
    count--;
    Random_creater();
    Display();
}




main()
{
    int aro,i,k;
    char Arrow;
    char s[]="THANKS FOR PLAYING, GOOD LUCK FOR NEXT TIME ";
    int temp;
    starting();
    Starting_Random();
    Arrow=DOWN;
    while(Arrow!='\e')  //  HERE IF USER WANT TO EXIT THEN PRESS ESC KEY
    {
        Arrow=getch();
        aro=Arrow;
        Action(Arrow);
        temp=Temp_counter();
        if(temp==1)
        {
            printf("\n\t\t\tYOU WON");
            break;
        }
        if(temp==0 || count < 0)
        {
            printf("\n\t\t\tSORRY !  GAME OVER\n");
            break;
        }
    }
    printf("\n\n\n\t");
    printer(s);
 ending();
    system("cls");
  
   for(k=0;k<65535;k++);
   for(k=0;k<65535;k++);
}

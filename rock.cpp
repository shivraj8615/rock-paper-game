# include<stdio.h>
# include<stdlib.h>
# include<time.h>
int rockpapersicsor(char you, char comp){
if (you==comp){
return 0;
}
else if (you='r'&&comp=='s'){
return -1;
}
else if (you='r'&&comp=='p'){
return 1;
}
else if (you='p'&&comp=='s'){
return -1;
}
else if (you='p'&&comp=='r'){
return 1;
}
else if (you='s'&&comp=='p'){
return 1;
}
else if (you='s'&&comp=='r'){
return -1;
}
}

int main(){
char you,comp;
int num;
srand(time(0));
num=rand()%100+1;
if(num<=33){
comp ='s';}
else if(num<=66&&num>33){
comp ='p';}
else{
comp = 'r';}
printf("Enter 'r' for Rock, 'p'for paper, 's'for sicsor :\n");
scanf("%c",&you);
int result = rockpapersicsor(you,comp);
if(result=1){
printf("You won the match");}
else if(result=0)
{
printf("You draw the match");}
else
{printf("You lose the match");
}
return 0;
}

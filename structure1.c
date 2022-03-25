#include<stdio.h>
#include<string.h>
struct student 
{
  int roll_no;
  char name[20];
  float per;	
};
int main()
{
  struct student x;
  printf("\n enter a student details:");
  scanf("%d%s%f",&x.roll_no,&x.name,&x.per);
  printf("\n %d\n%s\n%f",x.roll_no,x.name,x.per);
  return (0);
}

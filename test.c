#include <stdio.h>
struct test
{
char *name;
int *age;
int *salary;
} emp1,emp2;

int Manager()
{struct 
{ char *name; 
  int  age;
  int salary;
} Manager;
Manager.salary=100000;


int main()
{
  printf("Enter the slary of employee1: ");
  scanf("%d", &emp1.salary);
  printf("Enter the salary of Employee2: ");
  scanf("%d",&emp2.salary);
  printf("Salary of Employee1 = %d\n",emp1.salary);
  printf("Salary of employee2 = %d\n",emp2.salary);
  printf("Salary of manager = %d\n",Manager());
}

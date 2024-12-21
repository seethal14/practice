#include<stdio.h>
#include<string.h>
struct Employee
{
   char name[20];
   int empid,salary;
    /* data */
};

int main()
{
  char name[7][20] = {"Akash","Arun","Varun","Dileep","Shyam","Shamil","Muhammed"};
  int salary[7] = {25000,25000,20000,23000,15000,15000,15000};
  int empId[7] = {1001, 1002, 1003, 1004, 1005,1006,1007 };
  
  struct Employee employee[7];
  for(int i=0;i<7;i++){
    strcpy(employee[i].name,name[i]);
    employee[i].salary=salary[i];
    employee[i].empid=empId[i];

  }
  int searchid;
  printf("enter the empid");
  scanf("%d",&searchid);
  for(int i=0;i<7;i++){
    if(employee[i].empid==searchid)
    {
    printf("empid-%d\n",employee[i].empid);
    printf("%s\n",employee[i].name);
    printf("salary-%d\n",employee[i].salary);
    }
  }

}

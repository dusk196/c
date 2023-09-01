/* LINKED LIST
   SAYANTAN ROY
   2ND YEAR (CSE DEPT)
   ROLL: 47
   ENROLLMENT NO: 12013002001059
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct record
{
 int value;
 struct record *next;
}
NODE;

void append();
void add_begin();
void add_after();
void del_begin();
void del_after();
void del_last();
void search();
void display();
void reverse();
NODE *start = NULL;

void main()
{
 int prompt;
 do{
  clrscr();
  printf("\n.:: LINKED LIST ::.");
  printf("\n<1> To ADD a new node to a new LIST or at the END of an existed LIST");
  printf("\n<2> To ADD a new node at the BEGINNING of the LIST");
  printf("\n<3> To ADD a new node AFTER a given node in the LIST");
  printf("\n<4> To DELETE a node from the BEGINNING of the LIST");
  printf("\n<5> To DELETE a node AFTER a given node in the LIST");
  printf("\n<6> To DELETE the LAST node in the LIST");
  printf("\n<7> To SEARCH for a value in the LIST");
  printf("\n<8> To REVERSE the LIST");
  printf("\n<9> To DISPLAY the LIST");
  printf("\n<0> To END the operation");
  printf("\n\nEnter choice : ");
  scanf("%d", &prompt);
  switch(prompt)
  {
   case 1: append();
	   printf("\nThe given data is added in the list successfully.");
	   display();
	   getch();
	   break;
   case 2: add_begin();
	   printf("\nThe given data is added in the list successfully.");
	   display();
	   getch();
	   break;
   case 3: add_after();
	   printf("\nThe given data is added in the list successfully.");
	   display();
	   getch();
	   break;
   case 4: del_begin();
	   printf("\nThe first data is deleted from the list successfully.");
	   display();
	   getch();
	   break;
   case 5: del_after();
	   printf("\nThe given data is deleted from the list successfully.");
	   display();
	   getch();
	   break;
   case 6: del_last();
	   printf("\nThe last data is deleted from the list successfully.");
	   display();
	   getch();
	   break;
   case 7: search();
	   getch();
	   break;
   case 8: reverse();
	   printf("\nThe list is reversed successfully.");
	   display();
	   getch();
	   break;
   case 9: display();
	   getch();
	   break;
   case 0: break;
   default: printf("\nInvalid input. Enter correct choice : ");
  }
 } while (prompt!=0);
 getch();
}

void append()
{
 NODE *temp, *curr;
 temp = (NODE*)malloc(sizeof(NODE));
 printf("\nEnter data : ");
 scanf("%d", &temp -> value);
 temp -> next = NULL;
 if(start==NULL)
 {
  printf("\n.:: FIRST NODE OF THE LIST IS CREATED ::.\n");
  start = temp;
 }
 else
 {
  curr = start;
  while (curr -> next != NULL)
  {
   curr = curr -> next;
  }
  curr -> next = temp;
 }
}

void display()
{
 int count=0;
 NODE* curr = start;
 printf("\n\nCurrent List:\n\n");
 while (curr != NULL)
 {
  printf("Data %d = %d\n", ++count, curr -> value);
  curr = curr -> next;
 }
}

void add_begin()
{
 NODE *curr = start, *temp;
 temp = (NODE*)malloc(sizeof(NODE));
 printf("\nEnter data : ");
 scanf("%d", &temp -> value);
 temp -> next = NULL;
 if( start == NULL )
 {
  start = temp;
  curr = temp;
 }
 else
 {
  temp -> next = start;
  start = temp;
 }
}

void add_after()
{
 NODE *curr = start, *temp;
 int p;
 printf("\nEnter position after which to insert a new node : ");
 scanf("%d",&p);
 while( (p>1) && (curr!=NULL) )
 {
  curr = curr -> next;
  p--;
 }
 if (curr == NULL)
 {
  printf("\n.:: Position is outside the list ::.");
  getch();
  exit(1);
 }
 temp = (NODE*)malloc(sizeof(NODE));
 printf("\nEnter data : ");
 scanf("%d", &temp->value);
 temp -> next = curr -> next;
 curr -> next = temp;
}

void del_begin()
{
 NODE *temp = start;
 start = start -> next;
 free (temp);
}

void del_after()
{
 NODE *curr = start, *temp;
 int p;
 printf("\nEnter position after which to delete a new node : ");
 scanf("%d",&p);
 while( (p>1) && (curr!=NULL) )
 {
  curr = curr -> next;
  p--;
 }
 if (curr == NULL)
 {
  printf("\n.:: Position is outside the list ::.");
  getch();
  exit(1);
 }
 temp = curr -> next;
 curr -> next = temp -> next;
 free(temp);
}

void del_last()
{
 NODE *curr = start, *temp;
 while( curr -> next -> next != NULL )
 {
  curr = curr -> next;
 }
 temp = curr -> next;
 curr -> next = NULL;
 free(temp);
}

void search()
{
 NODE *curr = start;
 int find, flag = 0, count = 0;
 printf("\nEnter the value to search : ");
 scanf("%d",&find);
 while( curr != NULL )
 {
  count++;
  if (curr -> value == find)
  {
   printf("\nData %d found in position %d", find, count);
   flag = 1; break;
  }
  curr = curr -> next;
 }
 if(flag==0)
 {
  printf("\nValue not found in the list.");
 }
}

void reverse()
{
 NODE *curr = start, *prev = NULL, *sprev = NULL;
 while( curr != NULL )
 {
  sprev = prev;
  prev = curr;
  curr = curr -> next;
  prev -> next = sprev;
 }
 start = prev;
}

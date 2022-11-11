#include <stdio.h>
#include<stdlib.h>
struct abc
{
  char name[20];
  int prn;
  struct abc *prv;
  struct abc *next;
}*head;
void insert (struct abc *head)
{
  struct abc *new;
  new = (struct abc *) malloc (sizeof (struct abc));
  printf ("enter your name:");
  scanf ("%s", new->name);
  printf ("\nenter the prn:");
  scanf ("%d", &new->prn);
  new->next = NULL;
  head->next = new;
  new->prv = head;
}
  void insertm(void){
  struct abc *new;
  new = (struct abc *) malloc (sizeof (struct abc));
  printf ("enter your name:");
  scanf ("%s", new->name);
  printf ("\nenter the prn:");
  scanf ("%d", &new->prn);
  new->next=head->next;
  new->prv=head;
  head->next->prv=new;
  head->next=new;

  
}
void deletep(void){
    struct abc* temp;
    temp=head;
    head=head->next;
    head->prv=NULL;
    free(temp);
    
}
void delete_s(void){
     struct abc* temp,*tempb;
     temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    tempb=temp->prv;
    tempb->next=NULL;
    free(temp);
}
void deletem(void){
    
}
void count(void){
    struct abc* temp;
    int i=1;
    while(temp!=NULL){
        i++;
        temp=temp->next;
    }
    printf("%d are the no. of nodes",i);
}
void display(void){
    struct abc* temp;
    while(temp!=NULL){
        printf("\n name:%s\nprn:%d\n",temp->name,temp->prn);
        temp=temp->next;
    }
}
void reverse(void){
    struct abc* temp;
     while(temp->next!=NULL){
        temp=temp->next;
    }
     while(temp!=NULL){
        printf("\n name:%s\nprn:%d\n",temp->name,temp->prn);
        temp=temp->prv;
    }
}
int main ()
{
 // struct abc *head;
  head = (struct abc *) malloc (sizeof (struct abc));
  printf ("enter the name of the president:");
  scanf ("%s", head->name);
  printf ("\nenter the prn:");
  scanf ("%d", &head->prn);
  head->next = NULL;
  head->prv = NULL;
  int ch, y;
  do
    {
      printf ("enter the choice :\n 1 for inserting the member\n 2 for deleting the president\n 3 for deleting the secretary\n 4 for deleting a member\n 5 for finding total no. of member\n 6 for displaying the members\n 7 to reverse: ");
      
      
      scanf ("%d", &ch);
      switch (ch)
	{
	case 1:
	  insertm ();
	  break;
	case 2:
	  deletep();
	  break;
	case 3:
	  delete_s();
	  break;
	case 4:
	  deletem();
	  break;
	case 5:
	  count();
      break;
    case 6:
     display();
       break;
    case 7:
    reverse();
      break;
    default:
    printf("enter something valid!!\n");
    
	}
	printf("do want to continue: \t 0 for no\t 1 for yes");
	scanf("%d",&y);
	
    }while(y==1);
    return 0;
  }


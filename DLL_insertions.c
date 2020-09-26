#include <stdio.h>
#include <stdlib.h>

struct Node{ 

int data;
struct Node*next;
struct Node*prev;

};



struct Node*start=NULL;


void insert_begin()
{ 
  
  int ele; 
  
  printf("Enter value to be inserted : ");
  scanf("%d",&ele);

  struct Node* next=NULL;
  struct Node* prev=NULL;
  
  
  struct Node*newNode=NULL;

  newNode=(struct Node*) malloc(sizeof(struct Node)); 
  
  newNode->data=ele;
  
  if(start==NULL)
  {
      start=newNode;
  }
  
  else{
      
      newNode->next=start;
      newNode->prev=NULL;
      start->prev=newNode;
      start=newNode;
  }
  
  

}


void insert_end()
{  

 int ele; 
  
  printf("Enter value to be inserted : ");
  scanf("%d",&ele);

  struct Node* next=NULL;
  struct Node* prev=NULL;
  
  struct Node* temp=start;
  
  struct Node*newNode=NULL;

  newNode=(struct Node*) malloc(sizeof(struct Node)); 
  
  newNode->data=ele;
  
  newNode->next=NULL;
  
  if(start==NULL)
  {
      newNode->prev=NULL;
      start=newNode;
  }
  
  else{
      
      while(temp->next!=NULL){
          temp=temp->next;
      }
      
      temp->next=newNode;
      newNode->prev=temp;
  }
  
  
  
  

}



void insert_before()
{ 

int ele,before_val; 
  
  printf("Enter value to be inserted : ");
  scanf("%d",&ele);
  
  printf("Enter value before which the element is to be inserted : ");
  scanf("%d",&before_val);

  struct Node* next=NULL;
  struct Node* prev=NULL;
  
  struct Node* temp=start;
  struct Node* ref=start;
  
  struct Node*newNode=NULL;

  newNode=(struct Node*) malloc(sizeof(struct Node)); 
  
  newNode->data=ele;
  
  newNode->next=NULL;
  
  // searching the before_val to check  whether this element really exists in linked list or not
  
  int found=0;
  
  while(ref!=NULL)
  {
      
      if(ref->data==before_val)
      { //printf("found!!");
        found=1;
      }
      
      ref=ref->next;
      
      
  }
  
  
  
  if(found==1)
  
  {
  
  
  if(start->data==before_val){
      
      newNode->next=start;
      start->prev=newNode;
      start=newNode;
      
  }
  
  else{
      
      while(temp->next->data!=before_val){
          temp=temp->next;
      }
      
      newNode->next=temp->next;
      temp->next=newNode;
      newNode->prev=temp;
      newNode->next->prev=newNode;
      
      
  }
  
  }
  
  else{
      
      printf("The element before which the new value is to be inserted doesnt exist in the linked list!");
  }
  

}


void insert_after()
{ 

  int ele,after_val; 
  
  printf("Enter value to be inserted : ");
  scanf("%d",&ele);
  
  printf("Enter value after which the element is to be inserted : ");
  scanf("%d",&after_val);

  struct Node* next=NULL;
  struct Node* prev=NULL;
  
  struct Node* temp=start;
  struct Node* ref=start;
  
  struct Node*newNode=NULL;

  newNode=(struct Node*) malloc(sizeof(struct Node)); 
  
  newNode->data=ele;
  
  newNode->next=NULL;
  
  // searching the after_val to check  whether this element really exists in linked list or not
  
  int found=0;
  
  while(ref!=NULL)
  {
      
      if(ref->data==after_val)
      { //printf("found!!");
        found=1;
      }
      
      ref=ref->next;
      
      
  }
  
  
  
  if(found==1)
  
  {
  
  while(temp->data!=after_val){
          temp=temp->next;
      }
      
      
      if(temp->next==NULL){
          
          
          temp->next=newNode;
          newNode->prev=temp;
          
      }
      
      else
      {
      newNode->next=temp->next;
      temp->next=newNode;
      newNode->prev=temp;
      newNode->next->prev=newNode;
      
      }
      
      
  
  
  }
  
  else{
      
      printf("The element after which the new value is to be inserted doesnt exist in the linked list!");
  }
  


}






void traverse() 
{  
    
    struct Node* p;
  
  if(start==NULL)
  { printf("The list is empty");
    printf("\n");
  }
  
  else
  {  
      p=start;
      
      printf("The elements are : ");
      
      while (p != NULL)
     {      
         printf(" %d ", p->data); 
         p = p->next; 
        
      
     } 
  
  }
  
} 



int main()
{ 
int ch;

while(1)
{ 
printf("\nDLL insertion \n");

printf("1- begin , 2- end , 3-before , 4-after , 5-traverse , 6-exit\n");

printf("Enter your choice : ");
scanf("%d",&ch);


switch(ch)

{ case 1: insert_begin();
          break;

case 2: insert_end();
        break;
        
case 3: insert_before();
        break;

case 4: insert_after();
        break;

case 5: traverse();
        printf("\n");
        break;

case 6: exit(0);
        break;

default: printf("Wrong choice !");
         break;

}

} 
return 0;
}

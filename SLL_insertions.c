#include <stdio.h>
#include <stdlib.h>

struct Node{ 

int data;
struct Node*next;

};



struct Node*start=NULL;


void insert_begin()
{ 

int ele; 

printf("Enter value to be inserted : ");
scanf("%d",&ele);

struct Node*newNode=NULL;

newNode=(struct Node*) malloc(sizeof(struct Node)); 

if(newNode==NULL)
{ printf("out of memory sorry!");
  return;
}

newNode->data=ele;

if(start==NULL)
{ 
start=newNode;
}

else
{ 
newNode->next=start;
start=newNode;

}


}



void insert_before()
{ 

int ele,val; 

if(start==NULL)
{ printf("list is empty!");
  printf("\n");
}


else
{
    

printf("Enter value to be inserted : ");
scanf("%d",&ele);

printf("Enter value before which it is to be inserted : ");
scanf("%d",&val);


struct Node*newNode=NULL;
struct Node*temp;

newNode=(struct Node*) malloc(sizeof(struct Node)); 

if(newNode==NULL)
{ printf("out of memory sorry!");
  return;
}

newNode->data=ele;

temp=start;




if(start->data==val)  // if the new element is to be added is before the then first element

{   
    newNode->next=start;
    start=newNode;
    
}

else
{

while(temp->next->data!=val)

{ 

temp=temp->next;

if(temp==NULL)
{ printf("element not found!");
  return;
}


}

newNode->next=temp->next;
temp->next=newNode;

}

}
}


void insert_after()
{  

int ele,val; 

if(start==NULL)
{ printf("list is empty!");
  printf("\n");
}

else

{  

printf("Enter value to be inserted : ");
scanf("%d",&ele);

printf("Enter value after which it is to be inserted : ");
scanf("%d",&val);


struct Node*newNode=NULL;
struct Node*temp;

newNode=(struct Node*) malloc(sizeof(struct Node)); 

if(newNode==NULL)
{ printf("out of memory sorry!");
  return;
}

newNode->data=ele;

temp=start;


while(temp->data!=val)

{ 

temp=temp->next;

if(temp==NULL)
{ printf("element not found!");
  return;

}

}

newNode->next=temp->next;
temp->next=newNode;


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
printf("\nSLL insertion \n");

printf("1- begin , 2- before , 3-after , 4-traverse , 5-exit\n");

printf("Enter your choice : ");
scanf("%d",&ch);


switch(ch)

{ case 1: insert_begin();
          break;

case 2: insert_before();
        break;

case 3: insert_after();
        break;

case 4: traverse();
        printf("\n");
        break;

case 5: exit(0);
        break;

default: printf("Wrong choice !");
         break;

}

} 
return 0;
}


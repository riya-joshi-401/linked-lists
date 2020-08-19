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

int delete_begin()
{ 

 struct Node*temp;
 int x;
 
 if(start==NULL)
 { printf("list is empty");
 }
 
 else
 {  
    temp=start;
    start=start->next;
    x=temp->data;
    free(temp);
    return x;

}

}


int delete_particular()
{  

 struct Node*temp;
 struct Node*ref;
 
 int x,val;
 
 if(start==NULL)
 { printf("list is empty");
 }
 
 else
 {  
    printf("Enter the element which is to be deleted : ");
    scanf("%d",&val);
    
    
    
    if(start->data==val) // if the first element is to be deleted
    {   x=start->data;
        start=NULL;
        return x;
        
    }
        
    else
    {
        temp=start;
        ref=temp;
    
    while(temp->next->data!=val)
    { 
        temp=temp->next;
        
    }
    ref=temp->next;
    temp->next=ref->next;
    x=ref->data;
    free(ref);
    return x;
    

}

}

}


int delete_before()
{ 

struct Node*temp;
struct Node*ref;

 int x,val;
 
 if(start==NULL)
 { printf("list is empty");
 }
 
 else
 {  
     
    printf("Enter the value before which the element is to be deleted : ");
    scanf("%d",&val);
    
    if(start->data==val)
    { printf("This is the first element !! nothing before it to delete ...");
    
    }
    
    else
    {
    
    temp=start;
    ref=temp;
    
    if(start->next->data==val)
    
    {  
        start=start->next;
        x=temp->data;
        free(temp);
        return x;
        
    }
    
    else
    {
    
    while(temp->next->next->data!=val)
    {  
        temp=temp->next;
        
    }
    
    ref=temp->next;
    temp->next=ref->next;
    x=ref->data;
    free(ref);
    return x;

}

}

}

}


int delete_after()
{  

struct Node*temp;
struct Node*ref;

 int x,val;
 
 if(start==NULL)
 { printf("list is empty");
 }
 
 else
 {  
     
    printf("Enter the value after which the element is to be deleted : ");
    scanf("%d",&val);
    
    
    temp=start;
    ref=temp;
    
    
    
    while(temp->data!=val)
    {  
        temp=temp->next;
        
    }
    
    if(temp->next==NULL)
    { 
        printf("%d is the last element ! nothing after that to delete ....",val);
    }
    
    else
    {
    
    ref=temp->next;
    temp->next=ref->next;
    x=ref->data;
    free(ref);
    return x;

}

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
printf("\nSLL deletion \n");

printf(" 1-insert before  , 2- begin , 3- partcular , 4- before , 5-after , 6-traverse , 7-exit\n");

printf("Enter your choice : ");
scanf("%d",&ch);


switch(ch)

{ case 1: insert_begin();
          break;

case 2: delete_begin();
        break;
        
case 3: delete_particular();
        break;
        
case 4: delete_before();
        break;

case 5: delete_after();
        break;

case 6: traverse();
        printf("\n");
        break;

case 7: exit(0);
        break;

default: printf("Wrong choice !");
         break;

}

} 
return 0;

}

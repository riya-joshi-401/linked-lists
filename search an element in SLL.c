#include<stdio.h>
#include<stdlib.h>


struct Node{
   
    int data;
    struct Node*next;
};

struct Node*start=NULL;

void insert()
{
    
    int ele;
   
    printf("Enter value to be inserted : ");
    scanf("%d",&ele);
   
    struct Node*newNode=NULL;
    struct Node*temp;
    temp=start;
   
    newNode=(struct Node*) malloc(sizeof(struct Node));
   
    if(newNode==NULL)
    {
        printf("out of memory sorry!");
        return;
    }
   
    newNode->data=ele;
   
    if(start==NULL)
    {
        start=newNode;
       
    }
   
    else
    {
       
        while(temp->next!=NULL)
        {
           
            temp=temp->next;
        }
       
        temp->next=newNode;
       
    }


}


void search()
{
    
  struct Node*temp=start;
  int val;
  
  
  printf("enter value to be searched : ");
  scanf("%d",&val);
  
  while(temp!=NULL)
  {
      
      if(temp->data==val)
      { printf("found!!");
      }
      
      temp=temp->next;
      
      
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
   
    int choice;
   
    while(1)
   
    {   printf("\n");
        printf("1- insert , 2- search , 3- traverse , 4- exit");
        printf("\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
       
        switch(choice)
       
        {
           
            case 1: insert();
                    break;
                   
            
            case 2: search();
                    break;
                    
            case 3: traverse();
                    break;
                   
            case 4: exit(0);
           
            default: printf(" Wrong choice !");
                     break;
           
           
        }
       
       
       
       
    }

    return 0;
}

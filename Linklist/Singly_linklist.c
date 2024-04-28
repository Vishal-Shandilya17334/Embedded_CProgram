#include <stdio.h>
#include <stdlib.h> //for memory allocation functions like malloc and free

struct node
{
    int data;
    struct node *link;

};

struct node *start = NULL;

struct node* create_node()
{
    struct node *ptr;
    ptr = (struct node*) malloc(sizeof(struct node));
    return (ptr);
}

void insert_node()
{
    struct node *ptr , *temp;
    ptr = create_node();
    printf("enter node value");
    scanf("%d",&ptr->data);
    ptr->link = NULL;
    if(start == NULL)
    {
        start = ptr;
    
    }
    else
    {
        
         temp = start;
        while(temp->link != NULL)
            temp = temp->link;
            temp->link = ptr;

        
    }
}

void delete_node()
{
    struct node *ptr;
    ptr= start;
    if(ptr==NULL)
    {
        printf("list is empty");

    }
    else
    {
        start=ptr->link;

    }
    free(ptr);
} 

void display()
{
    struct node *temp;
    temp = start;
    if(start == NULL)
    printf("list is empty");
    else
    {
        while(temp != NULL)
        {
            printf("%d->",temp->data);
            temp=temp->link;
        }
    }
}


int main()
{
    int ch;
      while(1)
      {
          system("clear");
        
        printf("\n1.insert_node\n2.delete_node\n3.display_node\n4.exit\n");
        scanf("%d",&ch);
   
  
   switch (ch)
    {
    
    
        case 1:
             delete_node();
            break;

        case 2:
            delete_node();
            break; 

        case 3:
            display();
            break;

        case 4:
            exit;
        
        default:
            printf("wrong input");
    
    }
      }
}
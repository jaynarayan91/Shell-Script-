    #include<stdio.h>  
    #include<stdlib.h>  
    void insert_element();
    void delete_element(); 
    void reverse(); 
    struct node  
    {  
        int data;  
        struct node *next;  
        struct node *prev;
        struct Node **head_ref;  
    };  
    struct node *head;  
    void main ()  
    {  
        int choice = 0;  
        while(choice!=3)
          
        {   printf("\n*********Main Menu*********\n");  
            printf("\nChoose one option from the following list ...\n");  
            printf("\n===============================================\n"); 
            printf("\n1.Enter the item which you want to insert?\n2.Delete the item which is inserted\n3.Reverse\n4.Exit\n");
            printf("\nEnter your choice?\n");    
            scanf("%d",&choice);  
           
            switch(choice)  
            {  
                case 1:  
                insert_element();  
                break;  
                case 2:  
                delete_element(); 
                break; 
                case 3:
                reverse();
                case 4:
                exit(0);
                default:
                printf("Please enter valid choice..");
            }
        }        
    } 
     
  void insert_element(int item)  
   {  
       
       struct node *ptr = (struct node *)malloc(sizeof(struct node));  
       if(ptr == NULL)  
       {  
           printf("\nOVERFLOW");  
       }  
       else  
      {  
          printf("\nEnter Item value");  
          scanf("%d",&item);  
              
       if(head==NULL)  
       {  
           ptr->next = NULL;  
           ptr->prev=NULL;  
           ptr->data=item;  
           head=ptr;  
       }  
       else   
        {  
           ptr->data=item;  
           ptr->prev=NULL;  
           ptr->next = head;  
           head->prev=ptr;  
           head=ptr;  
        }  
      } 
    } 
    
    void delete_element()  
{  
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\n UNDERFLOW\n");  
    }  
    else if(head->next == NULL)  
    {  
        head = NULL;   
        free(head);  
        printf("\nNode Deleted\n");  
    }  
    else  
    {  
        ptr = head;  
        head = head -> next;  
        head -> prev = NULL;  
        free(ptr);  
        printf("\nNode Deleted\n");  
    }  
}  

void reverse(*head_ref)
{
     struct Node *temp = NULL; 
     struct Node *current = *head_ref;
      
     while (current !=  NULL)
     {
       temp = current->prev;
       current->prev = current->next;
       current->next = temp;             
       current = current->prev;
     }     
      
     if(temp != NULL )
        *head_ref = temp->prev;
}  
         
     

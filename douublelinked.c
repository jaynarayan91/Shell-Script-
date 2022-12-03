// write a program of double linked list using all operations!!

    #include<stdio.h>  
    #include<stdlib.h>  
    struct node  
    {  
        struct node *prev;  
        struct node *next;  
        int data;  
    };  
    struct node *head;  
    void insertion_beginning();  
    void insertion_last();  
    void insertion_specified();   
    void display();   
    void main ()  
    {  
    int choice =0;  
        while(choice != 9)  
        {  
            printf("\n*********Main Menu*********\n");  
            printf("\nChoose one option from the following list ...\n");  
            printf("\n===============================================\n");  
            printf("\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Show\n5.Exit\n");  
            printf("\nEnter your choice?\n");  
            scanf("\n%d",&choice);  
            switch(choice)  
            {  
                case 1:  
                insertion_beginning();  
                break;  
                case 2:  
                insertion_last();  
                break;  
                case 3:  
                insertion_specified();  
                break;  
                case 4:  
                display();  
                break;  
                case 5:  
                exit(0);  
                break;  
                default:  
                printf("Please enter valid choice..");  
            }  
        }  
    }  
    void insertion_beginning()  
    {  
       struct node *ptr;   
       int value;  
       ptr = (struct node *)malloc(sizeof(struct node));  
       if(ptr == NULL)  
       {  
           printf("\nOVERFLOW");  
       }  
       else  
       {  
        printf("\nEnter Item value");  
        scanf("%d",&value);  
          
       if(head==NULL)  
       {  
           ptr->next = NULL;  
           ptr->prev=NULL;  
           ptr->data=value;  
           head=ptr;  
       }  
       else   
       {  
           ptr->data=value;  
           ptr->prev=NULL;  
           ptr->next = head;  
           head->prev=ptr;  
           head=ptr;  
       }  
       printf("\nNode inserted\n");  
    }  
         
    }  
    void insertion_last()  
    {  
       struct node *ptr,*temp;  
       int value;  
       ptr = (struct node *) malloc(sizeof(struct node));  
       if(ptr == NULL)  
       {  
           printf("\nOVERFLOW");  
       }  
       else  
       {  
           printf("\nEnter value");  
           scanf("%d",&value);  
            ptr->data=value;  
           if(head == NULL)  
           {  
               ptr->next = NULL;  
               ptr->prev = NULL;  
               head = ptr;  
           }  
           else  
           {  
              temp = head;  
              while(temp->next!=NULL)  
              {  
                  temp = temp->next;  
              }  
              temp->next = ptr;  
              ptr ->prev=temp;  
              ptr->next = NULL;  
              }  
                 
           }  
         printf("\nNode Inserted\n");  
        }  
    void insertion_specified()  
    {  
       struct node *ptr,*temp;  
       int value,loc,i;  
       ptr = (struct node *)malloc(sizeof(struct node));  
       if(ptr == NULL)  
       {  
           printf("\n OVERFLOW");  
       }  
       else  
       {  
           temp=head;  
           printf("Enter the location");  
           scanf("%d",&loc);  
           for(i=0;i<loc;i++)  
           {  
               temp = temp->next;  
               if(temp == NULL)  
               {  
                   printf("\n There are less than %d elements", loc);  
                   return;  
               }  
           }  
           printf("Enter value");  
           scanf("%d",&value);  
           ptr->data = value;  
           ptr->next = temp->next;  
           ptr -> prev = temp;  
           temp->next = ptr;  
           temp->next->prev=ptr;  
           printf("\nNode Inserted\n");  
       }  
    } 
    void display()  
    {  
        struct node *ptr;  
        printf("\n printing values...\n");  
        ptr = head;  
        while(ptr != NULL)  
        {  
            printf("%d\n",ptr->data);  
            ptr=ptr->next;  
        }  
    }              


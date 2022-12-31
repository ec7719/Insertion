#include <conio.h>
#include <stdlib.h>
#include<stdio.h>
struct Node {
    int data;
    struct Node* next;
}*head,*temp,*tp;

int main()
{
    int c,n;
    while(1)
    {
        printf("\n1.insert at first");
        printf("\n2.display");
        printf("\exit");
        printf("enter the option");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
      printf("Enter an elements : ");
    scanf("%d",&n); 
    temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = n;
    temp->next = NULL;
    if(head==NULL)
    head = temp;
    else  {
      temp->next = head;
        head = temp;
            }
    break;
    case 2:
        
    
    tp=head;
    while(tp!= NULL)
    {
    printf("%d",tp->data);
    tp=tp->next;
        
    }
    break;
    case 3:

break;
}
}
}

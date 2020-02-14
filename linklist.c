//6210402402 Narongrit Thammapalo
#include <stdio.h>
#include <stdlib.h>
struct node {
 struct node *prev;
 int data;
 struct node *next;
};
void check_append(struct node **start, struct node **last, struct node **check, struct node **back, int input)
{
    if(*start == NULL)
    {
        *start = *last = *check = *back = (struct node *)malloc(sizeof(struct node));
        (*last)->data = input;
        (*check) -> data;
        (*last) -> next = NULL;
        (*back) -> next = NULL;

    }else
    {
        if(input >= (*check)->data)
        {
            (*last)->next = (struct node *)malloc(sizeof(struct node));
            (*last)->next->prev = *back;
            *back = (*back)->next;
            *last = (*last)->next;
            *check = (*check) -> next;
            (*check) -> data = input;
            (*last)->data = input;
            (*last) -> next = NULL;
            (*back) -> next = NULL;
        }else
        {
          if(input<=(*start)->data)
          {
            struct node *new_node = (struct node *)malloc(sizeof(struct node));
            (new_node)->next = *start;
            (*start)->prev = new_node;
            *start = (*start)->prev;
            (*start)->data = input;
          }else{
          while(1)
          {
            *back = (*back)->prev;
            if(input >= (*back)->data)
            {
              struct node *new_node = (struct node *)malloc(sizeof(struct node));
              (new_node)->data = input;
              *back = (*back)->next;
              (*back)->prev->next = new_node;
              (*back)->prev->next->next = *back;
              *back = (*back) -> prev;
              (*back)->next->next->prev = new_node;
              (*back)->next->prev = *back;
              break;
            }
          }
          *back = *last;
          }
        }
    }
}
void print_list(struct node *head)
{
    for (; head; head = head->next)
        printf("%d\n", head->data);
}
int main(){
    int input;
    struct node *start=NULL, *last=NULL, *check=NULL, *back=NULL;
    while(1){
        scanf("%d",&input);
        if(input <= -1){
            break;
        }
        check_append(&start,&last,&check, &back, input);
    }
    print_list(start);
}
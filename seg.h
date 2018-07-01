#include<stdio.h>
#include<stdlib.h>
struct list
{
 int seg,base,limit;
 struct list *next;
}*s;
void insert(struct list *q,int base,int lt,int seg);
int search_limit(struct list *q,int seg);
int search_base(struct list *q,int seg);

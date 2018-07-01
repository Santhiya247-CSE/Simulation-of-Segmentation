#include"seg.h"
struct list *p;
void insert(struct list *q,int base,int limit,int seg)
{
 if(p==NULL)
 {
  p=malloc(sizeof(struct list));
  p->limit=limit;
  p->base=base;
  p->seg=seg;
  p->next=NULL;
 }
 else
 {
  while(q->next!=NULL)
  {
   q=q->next;
   printf("yes");
  }
  q=malloc(sizeof(struct list));
  q->limit=limit;
  q->base=base;
  q->seg=seg;
  q->next->next=NULL;
 }
}
int searchlimit(struct list *q,int seg)
{
 while(q->seg!=seg)
 {
  q=q->next;
 }
 return q->limit;
}
int searchbase(struct list *q,int seg)
{
 while(q->seg!=seg)
 {
  q=q->next;
 }
 return q->base;
}


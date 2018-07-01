#include"seg.h"
int main()
{
 struct list *p=NULL;
 int seg,offset,limit,base,physicaladdr;
 int lt,bs;
 printf("Simulation of Segmentation\n");
 printf("Enter Segment table\n");
 //-1 for seg value termination
 do
 {
  printf("Enter the segment number\n");
  scanf("%d",&seg);
  if(seg!=-1)
  {
   printf("Enter the base value:\n");
   scanf("%d",&base);
   printf("Enter the limit value\n");
   scanf("%d",&limit);
   insert(p,base,limit,seg);
  }
 if(seg=-1);
 {
  printf("Enter the offset value\n");
  scanf("%d",&offset);
  printf("Enter the segmentation number\n");
  scanf("%d",&seg);
  lt=searchlimit(p,seg);
  bs=searchbase(p,seg);
  if(offset<lt)
  {
   physicaladdr=base+offset;
   printf("The Physical Memory address is %d\n",physicaladdr);
  }
  else
  {
   printf("Can't find the physical address\n");
  }
 }
}while(seg!=-1);
return 0;
}

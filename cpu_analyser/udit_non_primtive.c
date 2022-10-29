#include<stdio.h>
#include<stdlib.h>
struct node
{
	int burst;
	int arrival;
	int name;
	struct node *next;
}*start=NULL,*p=NULL,*q=NULL;
int a[10],b[10],j,min_arrival=99,m;
int c[10];
int main()
{   
    struct node *temp;
    int n,k=1,aa,bb,time_passed=0,strt=0,end=100,i;

    char name1;
 	printf("enter th no. of process");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
    {
	  	printf("enter the node information\n");
		temp= (struct node*)malloc(sizeof(struct node));
		if(k==1)
		{
			start=temp;
		    printf("enter the program name\n");
			scanf("%d",&name1);
			temp->name=name1;
			printf("enter the burst time\n");
			scanf("%d",&bb);
			temp->burst=bb;		
			printf("enter the arrival time\n");
			scanf("%d",&aa);
			temp->arrival=aa;
			q=start;
			q->next==NULL;
		}	
		else
		{
		    q->next=temp;
		  	printf("enter the program name\n");
			scanf("%d",&name1);
    		temp->name=name1;
			printf("enter the burst time\n");
			scanf("%d",&bb);
			temp->burst=bb;		
			printf("enter the arrival time\n");
			scanf("%d",&aa);
			temp->arrival=aa;
			q=temp;
	    	q->next=NULL;
	    	k++;
		}
		
	}
	q=start;
    end=p->burst;  
	for(i=1;i<=n;i++)
{	
	min_arrival=min(strt,end);
	time_passed=p->arrival+p->burst;
	printf("%d\n",p->name);
	end=time_passed;
}
return 0;	
}
 int min(int strt,int end)
 {
	while(q->next==NULL)
	{
		printf("%d",q->arrival);
		if((strt<min_arrival<end)&&(min_arrival>q->arrival))
		{
		min_arrival=q->arrival;
		p=q;
		a[j]=min_arrival;
		b[j]=q->burst;
		c[j]=q->name;
    	}
        q=q->next;
        m=j;
        j++;
    }
    // deleting the node
    return(min_arrival);
  }


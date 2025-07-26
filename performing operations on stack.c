#include<stdio.h>
#include<stdlib.h>
struct stack
{
	int top,cap;
	int *a;
};
struct stack*createstack(int cap)
{
	struct stack*stack=(struct stack*)malloc(sizeof(struct stack));
	stack->cap=cap;
	stack->top=-1;
	stack->a=(int*)malloc(cap * sizeof(int));
	return stack;
}
void deletestack(struct stack*stack)
{
	free(stack->a);
	free(stack);
}	
int isFull(struct stack*stack)
{
  return stack->top>=stack->cap-1;
}
int isEmpty(struct stack*stack)
{
	return stack->top==-1;
}
int push(struct stack*stack,int x)
{
    if(isFull(stack))
	{
	printf("over flow...");
	return 0;
    }				
   stack->a[++stack->top]=x;
   return 1;
 }
 int pop(struct stack*stack)
 {
	int (isEmpty(stack))
	 {
		 printf("underflow...");
		 return 0;
	}
  return stack->a[stack->top--];
  } 	
 int peek(struct stack*stack)
 {
	 int (isEmpty(stack))
	 {
	 printf("underflow...");
     return 0;
   }
   return stack->a[stack->top];	
}
     
int main()
{
	struct stack*s=createstack(5);
	push(s,10);
    push(s,80);
    push(s,30);
    push(s,1000);
    push(s,70);
	printf("\n element popped from stack:%d\n",pop(s));
	printf("\n top element in the stack:%d\n",peek(s));
	printf("elements present in the stack:\n");
	while(!isEmpty(s))
	{
		printf("\n %d",peek(s));
		pop(s);
	}
	deletestack(s);
	return 0;
 }		

	 
	  	 
	 

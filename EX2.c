#include<stdio.h>
#define max 40
int stack[max];
int top=-1;
void push(int a){
    if(top==max-1){
        printf("stack is full");
    }
    else{
        top++;
        stack[top]=a;
        printf("%d is pushed value",a);
    }
}
//pop
void pop(){
    if(top==-1){
        printf("empty");
    }
    else{
        a=stack[top];
        top--;
        printf("%d",a);
    }
}
void peek(){
    if(top==-1){
        printf("empty");
    }
    else{
        printf("%d",stack[top]);
    }
}
void display(){
    if("top==-1"){
        printf("stack is empty");
    }
    else{
        for(int i=[top];i>=0;i--){
    printf("%d",stack[i]);
        }
    printf("\n")  
    }
}
int main(){
    int choice;int a;
    do{
        printf("MENU\n");
        printf("1.push\n");
        printf("2.pop\n");       
        printf("3.peek\n");   
        printf("4.display\n");
        printf("Enter your choice:"):
        scanf("%d",&choice);
         
        switch(choice){
            case 1:
            int a:
            printf("enter the value to push:");
            scanf("%d",&a);
            push(a);
            break;}
            case 2:
            pop();
            break;
            case 3:
            peek();
            break;
            case 4:
            display();
            break:
        }

    }while(choice!=4);
    return 0;

}

#include<stdio.h>
int cq[5]={2,4,5,6,3};
int max=5;
void insert(int x){
if(rear+1)%size==front{
    printf("the Queue is full");
}
else if(front==-1&&rear==-1){
     front=rear=0;
}
else if(rear==max-1&&front!=0){
    rear=0
}else{
    rear=(rear+1)%max;
    cq[rear]=a;

}
}
void delete(){
    if(front==-1 && rear==-1){
        printf("the queue is empty");
    }
    else if(rear==front){
        printf("%d",cq[front]);
        rear=front=-1;
    }
    else{
        printf("deleted element %d",cq[front]);
        front=(front+1)%max;
    }
}

void display(){
            if(front==-1){
                        print("the queue is empty");
            }
            for(int i=front)
            
            
            }

            int main(){
                int ch,x;
                while(1){
                    printf("1.Inser\n 2.Delete\n 3.Display\n 4.Exit");
                    printf("enter your choice:");
                    scanf("%d",&ch);
                    switch(ch){
                        case 1:printf("enter element:");
                        scanf("%d",&x);
                        insert(x);
                        break;
                        case 2:
                        delete();
                        break;
                        case 3:
                        display();
                        break;
                        case 4:
                        return 0;
                        printf("Default");

                    }
                }
            }

     
     





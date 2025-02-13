#include<stdio.h>
#include<stdlib.h>

struct node{
    char data;
    struct node* next;
};

struct node* insert_first(struct node* head, char n){
    struct node* temp = (struct node* )malloc(sizeof(struct node));
    temp->data = n;
    temp->next = NULL;

    if(head == NULL){
        return temp;
    }
    else{
        temp->next = head;
        return temp;
    }
}

int main(){
    int str = 0;
    int integer = 0;
    int floating = 0;
    char digit;
    printf("Enter the Data :\n");
    struct node* head1 = (struct node* )malloc(sizeof(struct node));
    head1 = NULL;
    int i = 0;
    while(5>2){
        scanf("%c", &digit);
        if(digit=='\n'){
            break;
        }
        head1 = insert_first(head1, digit);
        i++;
    }
    int j = i;
    int ascii;
    while(head1!=NULL){
        ascii = head1->data - '0';
        if(ascii >=0 && ascii <=9){
            integer++;
        }
        else if(integer >0 && ascii == -3 && j==1){
            integer++;
        }
        else{
            break;
        }
        head1 = head1->next;
        j--;
    }

    while(head1!=NULL){
        ascii = head1->data - '0';
        if(ascii == -2 && integer >0){
            floating++;
            integer = 0;
        }
        else if(floating > 0 && ascii >=0 && ascii <=9){
            floating++;
        }
        else if(floating > 0 && integer >0 && ascii == -3 && j==1){
            floating++;
        }
        else{
            integer = 0;
            break;
        }
        head1 = head1->next;
        j--;
    }

    if(j!=0){
        floating = 0;
        integer = 0;
        str++;
    }

    if(str!=0){
        printf("The data entered is a String");
    }
    else if(floating!=0){
        printf("The data entered is a Float");
    }
    else if(integer!=0){
        printf("The data entered is an Integer");
    }
}
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* insert_first(struct node* head, int n){
    struct node* temp = malloc(sizeof(struct node));
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

struct node* sub(struct node* head1, struct node* head2){
    struct node* ptr1 = malloc(sizeof(struct node));
    struct node* ptr2 = malloc(sizeof(struct node));
    ptr1 = head1;
    ptr2 = head2;
    struct node* diff = malloc(sizeof(struct node));
    diff = NULL;
    int result = 0;
    int borrow = 0;
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1->data - borrow >= ptr2->data){
        result = ptr1->data - ptr2->data - borrow;
        borrow = 0;
        }
        else{
            result = 10 + ptr1->data - ptr2->data - borrow;
        borrow = 1;
        }
        diff = insert_first(diff, result);
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    while(ptr1!=NULL){
        if(ptr1->data - borrow >= 0){
        result = ptr1->data - borrow;
        borrow = 0;
        }
        else{
            result = 10 + ptr1->data - borrow;
        borrow = 1;
        }
        diff = insert_first(diff, result);
        ptr1 = ptr1->next;
    }
    while(ptr2!=NULL){
        if(ptr2->data - borrow >= 0){
        result = ptr2->data - borrow;
        borrow = 0;
        }
        else{
            result = 10 + ptr2->data - borrow;
        borrow = 1;
        }
        diff = insert_first(diff, result);
        ptr2 = ptr2->next;
    }
    return diff;
}

struct node* reverse(struct node * head){
    struct node* prev = malloc(sizeof(struct node));
    struct node* current = malloc(sizeof(struct node));
    struct node* after = malloc(sizeof(struct node));
    prev = NULL;
    current = head;
    after = head->next;
    while(current!=NULL){
        current->next = prev;
        prev = current;
        current = after;
        if(after!=NULL){
        after = current->next;
        }
    }
    
    return prev;
}

int ll_length(struct node * head){
    int i = 0;
    struct node* ptr = malloc(sizeof(struct node));
    ptr = head;
    while(ptr!=NULL){
        i++;
        ptr=ptr->next;
    }
    return i;

}

struct node* remove_zero(struct node * head){
    struct node* ptr = malloc(sizeof(struct node));
    ptr = head;
    while(ptr!=NULL){
        if(ptr->data != 0){
            break;
        }
        ptr=ptr->next;
    }
    return ptr;

}

int main(){
    printf("Enter 1st Number :\n");
    char number1[1000];
    scanf("%s", number1);
    printf("Enter 2nd Number :\n");
    char number2[1000];
    scanf("%s", number2);

    struct node* head1 = malloc(sizeof(struct node));
    head1 = NULL;
    int i = 0;
    while(number1[i]!='\0'){
        head1 = insert_first(head1, number1[i]-'0');
        i++;
    }
    
    /*while(head1!=NULL){
        printf("%d", head1->data);
        head1 = head1->next;
    }
    exit(0);*/

    struct node* head2 = malloc(sizeof(struct node));
    head2 = NULL;
    i = 0;
    while(number2[i]!='\0'){
        head2 = insert_first(head2, number2[i]-'0');
        i++;
    }

    /*while(head2!=NULL){
        printf("%d", head2->data);
        head2 = head2->next;
    }
    exit(0);*/

    struct node* answer = malloc(sizeof(struct node));
    answer = head1;

    // printf("%d", ll_length(answer));
    // printf("%d", ll_length(head2));
    // exit(0);

    int quotient = 0;

    while(ll_length(answer) >= ll_length(head2)){
        answer = sub(answer, head2);
        answer = remove_zero(answer);
        if(answer!=NULL){
        answer = reverse(answer);
        }
        else{
            answer = insert_first(answer, 0);
        }
        quotient++;
    }
    
    printf("The Quotient is : ");
    printf("%d\n", quotient);

    printf("The Remainder is : ");
    struct node* ans_ptr = malloc(sizeof(struct node));
    ans_ptr = answer;
    while(ans_ptr!=NULL){
        printf("%d", ans_ptr->data);
        ans_ptr = ans_ptr->next;
    }

    return 0;
    

}
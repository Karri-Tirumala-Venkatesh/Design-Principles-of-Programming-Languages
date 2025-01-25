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

struct node* sum(struct node* head1, struct node* head2){
    struct node* ptr1 = malloc(sizeof(struct node));
    struct node* ptr2 = malloc(sizeof(struct node));
    ptr1 = head1;
    ptr2 = head2;
    struct node* add = malloc(sizeof(struct node));
    add = NULL;
    int result = 0;
    int carry = 0;
    while(ptr1!=NULL && ptr2!=NULL){
        result = ptr1->data + ptr2->data + carry;
        carry = result/10;
        result = result%10;
        add = insert_first(add, result);
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    while(ptr1!=NULL){
        result = ptr1->data + carry;
        carry = result/10;
        result = result%10;
        add = insert_first(add, result);
        ptr1 = ptr1->next;
    }
    while(ptr2!=NULL){
        result = ptr2->data + carry;
        carry = result/10;
        result = result%10;
        add = insert_first(add, result);
        ptr2 = ptr2->next;
    }
    if(carry != 0){
        add = insert_first(add, carry);
    }
    return add;
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

    struct node* head2 = malloc(sizeof(struct node));
    head2 = NULL;
    i = 0;
    while(number2[i]!='\0'){
        head2 = insert_first(head2, number2[i]-'0');
        i++;
    }
  
    int product;
    int carry;
    struct node* ptr1 = malloc(sizeof(struct node));
    struct node* head[100];
    struct node* ptr2 = malloc(sizeof(struct node));
    ptr2 = head2;
    
    
    for(int j = 0; j<i; j++){
        product = carry = 0;
        ptr1 = head1;
        head[j] = NULL;
        for(int k = 0; k<j; k++){
            head[j] = insert_first(head[j], 0);
        }
        
        while(ptr1!=NULL){
            product = (ptr1->data * ptr2->data) + carry;
            carry = product/10;
            product = product%10;
            head[j] = insert_first(head[j],product);
            ptr1 = ptr1->next;
        }
        if(carry!=0){
            head[j] = insert_first(head[j],carry);
        }
        
        ptr2 = ptr2->next;
    }
    

    for(int l = 0; l<i; l++){
        head[l] = reverse(head[l]);
    }

    struct node* answer = malloc(sizeof(struct node));
    answer = NULL;
    for(int m = 0; m<i; m++){
        answer = sum(answer, head[m]);
        answer = reverse(answer);
    }
    
    answer = reverse(answer);

    struct node* ans_ptr = malloc(sizeof(struct node));
    ans_ptr = answer;
    while(ans_ptr!=NULL){
        printf("%d", ans_ptr->data);
        ans_ptr = ans_ptr->next;
    }

    return 0;
}
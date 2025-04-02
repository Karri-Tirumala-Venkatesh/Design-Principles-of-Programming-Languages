#include <stdio.h>
#include <stdlib.h>

struct node
{
    char key;
    char value;
    struct node *next;
};

struct node *dictionary_insert(struct node *head, char k, char v)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->key = k;
    temp->value = v;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
        return head;
    }
    else
    {
        struct node *ptr = head;
        while (ptr->next != NULL)
        {
            if (ptr->key == k)
            {
                ptr->value = v;
                return head;
            }
            ptr = ptr->next;
        }
        if (ptr->key == k)
        {
            ptr->value = v;
            return head;
        }
        else
        {
            ptr->next = temp;
            return head;
        }
    }
}

void print_dictionary(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%c : %c\n", ptr->key, ptr->value);
        ptr = ptr->next;
    }
}

int main()
{
    struct node *head = NULL;
    head = dictionary_insert(head, '1', 'K');
    head = dictionary_insert(head, '1', 'T');
    head = dictionary_insert(head, 'V', 'V');
    print_dictionary(head);
    return 0;
}
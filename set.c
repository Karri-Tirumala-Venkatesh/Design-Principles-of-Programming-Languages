#include <stdio.h>

void create_set(int set[], int n)
{
    for (int i = 0; i < n; i++)
    {
        set[i] = 0;
    }
}

void insert(int set[], int index)
{
    set[index] = 1;
}

void print(int set[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (set[i] == 1)
        {
            printf("%d ", i);
        }
    }
}

void set_union(int set1[], int set2[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (set1[i] == 1 || set2[i] == 1)
        {
            set1[i] = 1;
        }
        else
        {
            set1[i] = 0;
        }
    }
}

void set_intersection(int set1[], int set2[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (set1[i] == 1 && set2[i] == 1)
        {
            set1[i] = 1;
        }
        else
        {
            set1[i] = 0;
        }
    }
}

void set_complement(int set1[], int set2[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (set1[i] == 1 && set2[i] == 0)
        {
            set2[i] = 1;
        }
        else
        {
            set2[i] = 0;
        }
    }
}

void set_difference(int set2[], int set1[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (set1[i] == 1)
        {
            set2[i] = 0;
        }
    }
}

int main()
{

    int universal[10];
    int n = sizeof(universal) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        universal[i] = 1;
    }

    printf("Universal Set : ");
    print(universal, n);
    printf("\n");

    int set1[10];
    create_set(set1, n);

    insert(set1, 1);
    insert(set1, 4);
    insert(set1, 9);
    insert(set1, 3);
    insert(set1, 5);
    insert(set1, 3);
    insert(set1, 7);

    printf("Set 1 Initially : ");
    print(set1, n);
    printf("\n");

    set_complement(universal, set1, n);
    printf("Set 1 after Complement : ");
    print(set1, n);
    printf("\n");

    int set2[10];
    create_set(set2, n);

    insert(set2, 2);
    insert(set2, 1);
    insert(set2, 3);
    insert(set2, 6);
    insert(set2, 5);
    insert(set2, 3);
    insert(set2, 4);

    printf("Set 2 Initially : ");
    print(set2, n);
    printf("\n");

    set_intersection(set1, set2, n);
    printf("Set 1 after Intersection with Set 2 : ");
    print(set1, n);
    printf("\n");

    set_difference(set2, set1, n);
    printf("Set 2 after Difference with Set 1 : ");
    print(set2, n);
    printf("\n");

    set_union(set1, set2, n);
    printf("Set 1 after Union with Set 2 : ");
    print(set1, n);
    printf("\n");

    return 0;
}
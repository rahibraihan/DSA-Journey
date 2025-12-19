#include <stdio.h>
#include <stdlib.h>
#define SIZE 4
int top = -1, arr[SIZE];
void push();
void pop();
void show();
int main()
{
    int choice;
    while (1)
    {
        printf("perform operaration on the stack:");
        printf("\n1.push\n2.pop\n3.show\n4.end\n");
        printf("\nenter the choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);

        default:
            printf("\ninvalid number!!");
            break;
        }
    }
}
void push()
{
    int x;
    if (top == SIZE - 1)
    {

        printf("\noverflow");
    }
    else
    {
        printf("\nenter the new elment:");
        scanf("%d", &x);
        top = top + 1;
        arr[top] = x;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("\nunderflow!!");
    }
    else
    {
        printf("\npopped elment:%d", arr[top]);
        top--;
    }
}
void show()
{
    if (top == -1)
    {
        printf("\nempty stack");
    }
    else
    {
        printf("\nshow the stack after operation:");
        for (int i = top; i >= 0; --i)
        {
            printf("%d  ", arr[i]);
        }
    }
    printf("\n");
}
#include <stdio.h>
#include <stdlib.h>

#define MAX 100000

int stack[MAX];
int maxStack[MAX];
int top = -1;
int topMax = -1;

void push(int x) {
    stack[++top] = x;
    if (topMax == -1 || x >= maxStack[topMax]) {
        maxStack[++topMax] = x;
    }
}

void pop() {
    if (top == -1) return;
    if (stack[top] == maxStack[topMax]) {
        topMax--;
    }
    top--;
}

int getMax() {
    if (topMax == -1) return -1;
    return maxStack[topMax];
}

int main() {
    int n, command, x;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &command);
        if (command == 1) {
            scanf("%d", &x);
            push(x);
        } else if (command == 2) {
            pop();
        } else if (command == 3) {
            printf("%d\n", getMax());
        }
    }

    return 0;
}

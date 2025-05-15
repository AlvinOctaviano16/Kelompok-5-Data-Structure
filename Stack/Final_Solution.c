#include <stdio.h>
#include <stdlib.h>

#define MAX 100000

int main() {
    int q;
    scanf("%d", &q);
    
    int stack[MAX], maxStack[MAX];
    int top = -1, maxTop = -1;

    for (int i = 0; i < q; i++) {
        int type;
        scanf("%d", &type);

        if (type == 1) {
            int x;
            scanf("%d", &x);
            stack[++top] = x;

            if (maxTop == -1 || x >= maxStack[maxTop])
                maxStack[++maxTop] = x;

        } else if (type == 2) {
            if (top != -1) {
                int popped = stack[top--];
                if (popped == maxStack[maxTop])
                    maxTop--;
            }

        } else if (type == 3) {
            if (maxTop != -1)
                printf("%d\n", maxStack[maxTop]);
        }
    }

    return 0;
}

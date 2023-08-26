#include <stdio.h>
#include <stdlib.h>

char stack[10];
int top = -1;

char pop();
void push(char x);

int main() {
    char a[20][20], g[20], x;
    int n, i, j, state[20];
    
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    printf("Enter %d nodes: ", n);
    for (i = 1; i <= n; i++) {
        fflush(stdin);
        g[i] = getchar();
    }

    printf("Enter adjacency matrix:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            scanf(" %c", &a[i][j]); // Note the space before %c to consume the newline character from previous input
        }
    }

    for (i = 1; i <= n; i++)
        state[i] = 1;

    printf("DFS Traversal: ");
    state[1] = 2;
    push(g[1]);

    while (top >= 0) {
        x = pop();

        for (i = 1; i <= n; i++) {
            if (x == g[i])
                break;
        }

        if (state[i] != 3) {
            state[i] = 3;
            printf("%c ", g[i]);
        }

        for (j = n; j >= 1; j--) {
            if ((a[i][j] == '1') && (state[j] == 1)) { // Note the comparison with character '1'
                state[j] = 2;
                push(g[j]);
            }
        }
    }

    printf("\n");
    getch(); // Assuming this code is run on a Windows system and "getch()" is available
    return 0;
}

void push(char x) {
    stack[++top] = x;
}

char pop() {
    return stack[top--];
}

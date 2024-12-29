// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I

#include <stdio.h>
#include <string.h>

int main() {
    char s[100001];
    scanf("%s", s);

    int size = strlen(s);
    int flag = 0;

    for (int i = 0, j = size - 1; i < size; i++, j--) {
        // printf("%c %c", s[i], s[j]);
        // printf("\n");

        if (s[i] != s[j]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

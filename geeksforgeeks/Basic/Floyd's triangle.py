#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    for(int i=1,j=1;i<n+1;i++){

        for (int c=0;c<i;c++){

            printf("%d ",j++);

        }

        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main() {

    int w=1189;
    int h=841;

    printf("Paper Size A0: %d mm * %d mm\n",w,h);

    int i;
    for (i = 1; i <= 8; i++)
    {

        int n_w=h;
        int n_h=w/2;

        w= n_w;
        h= n_h;

        printf("Paper Size A%d: %d mm * %d mm\n", i, w, h);
    }

    return 0;
}


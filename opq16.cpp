#include <stdio.h>
        int main()
        {
            int x = 1, y = 0, z = 5;
            int a = x && y || z++;
            printf("%d %d %d",x,y, z);
            return 0;
        }

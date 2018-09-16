#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int t, tc;
    long double a, a2, x1, y1, x2, y2;

	scanf("%d", &t);
	tc = 1;
	while(tc <= t) {
		scanf("%Lf", &a);
        a2 = a/2;
        x1 = 0.5 *(a2 + sqrtl(0.5 - a2 * a2));
        y1 = a2 - x1;
        x2 = -y1;
        y2 = x1;

        printf("Case #%d:\n", tc);
        printf("%.16Lf %.16Lf 0\n", x1, y1);
        printf("%.16Lf %.16Lf 0\n", x2, y2);
        printf("0 0 0.5\n");
		tc++;
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int t, tc;
	int i;
	char p[31];
	int d;
	int pow2[31];
	int l, val, res;
	int s1, s2, nc, ns;

	pow2[0] = 1;
	for (i = 1; i < 31; ++i) {
		pow2[i] = pow2[i-1] << 1;
	}
	scanf("%d", &t);
	tc = 1;
	while(tc <= t) {
		scanf("%d", &d);
		scanf("%s", p);
		l = strlen(p);
		//printf("%d %s (%d)\n", d, p, l);

		nc = ns = val = 0;
		for (i = 0; i < l; ++i) {
			if(p[i] == 'S') {
				val += pow2[nc];
				ns++;
			} else {
				nc++;
			}
		}

		s1 = s2 = l;
		i=l-1;
		while(i >= 0) {
			if(p[i] == 'S') {
				s2 = i; break;
			}
			i--;
		}
		s1 = s2;
		while(i > 0) {
			i--;
			if(p[i] != 'S') {
				break;
			}
			s1 = i;
		}
		//printf("p:%s, s1: %d, s2: %d, val:%d, nc:%d, ns:%d, d:%d\n", p, s1, s2, val, nc, ns, d);

		res = 0;
		while(val > d && s1 > 0) {
			p[s1] = 'C';
			p[s1-1] = 'S';
			val -= pow2[nc-((l-s1)-(s2-s1+1))-1];

			if(s2 > s1) {
				s1++;
			} else {
				s1--;
				s2--;
				i = s1;
				while(i > 0) {
					i--;
					if(p[i] != 'S') {
						break;
					}
					s1 = i;
				}
			}
			res++;
			//printf("%d: p:%s, s1: %d, s2: %d, val:%d\n", res, p, s1, s2, val);
		}
		if(val > d)
			printf("Case #%d: IMPOSSIBLE\n", tc);
		else
			printf("Case #%d: %d\n", tc, res);
		tc++;
	}
	return 0;
}

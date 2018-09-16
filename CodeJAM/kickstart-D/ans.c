#include <stdio.h>

int main(void) {
    int i,j, t, n, k, m;
    long long int p1,p2,a1,a2,a3,a4,b1,b2,b3,b4,c1,c2,c3,c4,m1,m2,m3,m4,h1,h2,x1,x2,y1,y2;
    int p[100001];
    int h[100001];
    int x[100001];
    int y[100001];
    int ans, tmp1, tmp2;
    scanf("%lld", &t);
    for(m = 1; m<=t; m++){
        scanf("%d %d", &n, &k);
        scanf("%lld %lld %lld %lld %lld %lld", &p1,&p2,&a1,&b1,&c1,&m1);
        scanf("%lld %lld %lld %lld %lld %lld", &h1,&h2,&a2,&b2,&c2,&m2);
        scanf("%lld %lld %lld %lld %lld %lld", &x1,&x2,&a3,&b3,&c3,&m3);
        scanf("%lld %lld %lld %lld %lld %lld", &y1,&y2,&a4,&b4,&c4,&m4);
       

        p[1] = p1;
        p[2] = p2;
        h[1] = h1;
        h[2] = h2;
        x[1] = x1;
        x[2] = x2;
        y[1] = y1;
        y[2] = y2;


        for(i = 3; i<=n; i++){
            p[i] = (a1*p[i-1]+b1*p[i-2]+c1)%m1 + 1;
            h[i] = (a2*h[i-1]+b2*h[i-2]+c2)%m2 + 1;
        }

        for(i=3; i<=k; i++){            
            x[i] = (a3*x[i-1]+b3*x[i-2]+c3)%m3 + 1;
            y[i] = (a4*y[i-1]+b4*y[i-2]+c4)%m4 + 1;
        }
        ans = 0;
        
        for(i = 1; i<=k; i++){
            tmp1 = x[i]+y[i];
            tmp2 = -x[i]+y[i];
            for(j=1; j<=n; j++){
                if(tmp1-p[j]-h[j]<=0 && tmp2+p[j]-h[j]<=0){
                    ans++;
                    break;
                }
            }
        }
        printf("Case #%d: %d\n",m, ans);
    }
    return 0;
}
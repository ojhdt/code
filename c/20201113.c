#include <stdio.h>
int main(void)
{
    int i, j, k, l, m, n, o, p, q, r=0, s=1;
    for(i = 1; i <= 9;i++){r += i;s *= i;for(j = 1; j <= 9;j++){r += j;s *= j;for(k = 1; k <= 9;k++){r += k;s *= k;for(l = 1; l <= 9;l++){r += l;s *= l;for(m = 1; m <= 9;m++){r += m;s *= m;for(n = 1; n <= 9;n++){r += n;s *= n;for(o = 1; o <= 9;o++){r += o;s *= o;for(p = 1; p <= 9;p++){r += p;s *= p;for(q = 1; q <= 9;q++){r += q;s *= q;if(r == 45 && s == 362880) printf("YES\n");}}}}}}}}}
}
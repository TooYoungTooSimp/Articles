#include <cstdio>
const int maxn = 1010;
int phi[maxn], sum[maxn];
int main()
{
    phi[1] = 1;
    for (int i = 2; i <= 1005; i++) if (!phi[i])
        for (int j = i; j <= 1005; j += i)
        {
            if (!phi[j]) phi[j] = j;
            phi[j] = phi[j] / i * (i - 1);
        }
    for (int i = 1; i <= 1005; i++) sum[i] = sum[i - 1] + phi[i];
    int T, x;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        scanf("%d", &x);
        printf("%d %d %d\n", i, x, sum[x] << 1 | 1);
    }
    return 0;
}

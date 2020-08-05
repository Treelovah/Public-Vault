#include <iostream>
#include <cstdio>
#include <algorithm>

void secret_function()
{
    printf("Found secret");
}

int max_of_four(int a, int b, int c, int d)
{
    int max_a{ std::max(a,b) };
    int max_b{ std::max(c,d) };
    int max{ std::max(max_a,max_b) };
    return max;
}

int main(int argc, char const *argv[])
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int ans = max_of_four(a,b,c,d);
    printf("%d\n",ans);
    return 0;
}

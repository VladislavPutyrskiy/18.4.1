#include <iostream>

void evendigits(long long& n, int* ans)
{
    while (n)
    {
        ++* ans;
        n /= 10;
        evendigits(n, ans);
    }

}

int main()
{
    int ans = 0;
    long long number = 9223372036854775806;
    evendigits(number, &ans);
    std::cout << ans;
}

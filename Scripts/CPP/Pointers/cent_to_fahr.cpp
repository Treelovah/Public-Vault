#include <iostream>

void convert_temp(double *p);

int main(int argc, char const *argv[])
{
    double c;
    std::cin >> c;
    convert_temp(&c);
    printf("%.2f\n",c);
    return 0;
}

void convert_temp(double *p) {
    *p = (*p * 1.8) + 32;
}
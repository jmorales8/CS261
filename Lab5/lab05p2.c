int main()
{
    int a = 2024;
    int b = 261;
    int s = 0;

    // swap the values of `a` and `b` via `s`
    s = a;
    a = b;
    b = s;

    // store the average of `a` and `b` in `s`
    s = a + b;
    s = s / 2;

    return 0;
}
var powerOfTwo = if ((n & -n) == n);
var check number_of_set_bits =
    int count_one(int n)
    {
    int count = 0;
while (n) {
    n = n & (n - 1);
    count++;
}
return count;
}


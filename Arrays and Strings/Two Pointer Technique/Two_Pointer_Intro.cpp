// Reversing array using two pointers

void reverse(int *v, int N) {
    int i = 0;
    int j = N - 1;
    while (i < j) {
        swap(v[i], v[j]);
        i++;
        j--;
    }
}

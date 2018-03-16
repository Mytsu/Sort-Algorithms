
template <class T>
void insertionSort(T a[], size_t size) {
	int i, j;
	T key;
	for (i = 1; i < n; i++) {
		key = a[i];
		j = i - 1;

		while (j >= 0 && a[j] > key) {
			a[j + 1] = a[j];
			j = j - 1;
		}
		a[j + 1] = key;
	}
}
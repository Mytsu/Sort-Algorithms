#include "../utils/util.hpp"

template <class T>
void gnomesort(T a[], size_t size) {
	for (int i = 1; i < size; ) {
		if (a[i - 1) <= a[i])
			++i;
		else {
			swap(a[i - 1], a[i]);
			--i;
			if (i == 0)
				i = 1;
		}
	}
}
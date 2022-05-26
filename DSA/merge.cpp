
#include <iostream>
using namespace std;

void merge(int array[], int const p, int const q, int const r)
{
	auto const N1 = q - p + 1;
	auto const N2 = r - q;

	auto *pArray = new int[N1],
		*rArray = new int[N2];

	for (auto i = 0; i < N1; i++)
		pArray[i] = array[p + i];
	for (auto j = 0; j < N2; j++)
		rArray[j] = array[q + 1 + j];

	auto i = 0, 
		j = 0; 
	int k = p; 

	while (i < N1 && j < N2) {
		if (pArray[i] <= rArray[j]) {
			array[k] = pArray[i];
			i++;
		}
		else {
			array[k] = rArray[j];
			j++;
		}
		k++;
	}
	while (i < N1) {
		array[k] = pArray[i];
		i++;
		k++;
	}
	while (j < N2) {
		array[k] = rArray[j];
		j++;
		k++;
	}
}

void mergeSort(int array[], int const l, int const ri)
{
	if (l >= ri)
		return; 

	auto q = l + (ri - l) / 2;
	mergeSort(array, l, q);
	mergeSort(array, q + 1, ri);
	merge(array, l, q, ri);
}


void printArray(int A[], int size)
{
	for (auto i = 0; i < size; i++)
		cout << A[i] << " ";
}


int main()
{
	int E;
    cin >> E;
    int arr[E];
    for (int i = 0; i <E;i++){
        cin >> arr[i];
    }
	auto arr_size = sizeof(arr) / sizeof(arr[0]);
	mergeSort(arr, 0, arr_size - 1);

	printArray(arr, arr_size);
	return 0;
}



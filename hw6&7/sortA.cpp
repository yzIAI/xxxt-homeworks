// C++ program for implementation of selection sort
#include <iostream>
#include <chrono>
#include <vector>

using namespace std;
using namespace std::chrono;

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(vector<int> &a)
{
	int n = a.size();

	// One by one move boundary of unsorted subarray
	for (int i = 0; i < n; ++i) { // now lets pick the i-th smallest as a[i]
        int cand = i;
        for (int j = i + 1; j < n; ++j)
            if(a[j] < a[cand]) cand = j;
        swap(a[i], a[cand]);
    }
}


void read(int size) { 
    FILE *f = fopen(fileName, "r");
    int *arr = (int*) malloc(size * sizeof(int) + 1);
    for (int i = 0; i < size; i++) {
        fscanf(f, "%d", &arr[i]);
    }
    auto start = chrono::high_resolution_clock::now();
    selectionSort(arr, size);
    auto stop = chrono::high_resolution_clock::now();
    auto duration = duration_cast<chrono::microseconds>(stop - start);
    fclose(f);
    free(arr);
}
// Driver program to test above functions
int main()
{
	return 0;
}

// This is code is contributed by rathbhupendra

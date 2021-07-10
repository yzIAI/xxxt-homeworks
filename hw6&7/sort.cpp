// C++ program for implementation of selection sort
#include <iostream>
#include <time.h>
#include <vector>

using namespace std;
using namespace std::chrono;

int size = 100000;
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

void sub_merge_sort(vector<int> &a, int l, int r) {
    if (l == r) return;
    int m = (l + r) / 2;
    static vector<int> tmp; tmp.resize(a.size());
    sub_merge_sort(a, l, m); sub_merge_sort(a, m + 1, r);
    int i = l, j = m + 1, k = i;
    while (i <= m && j <= r) {
        if(a[i] < a[j]) tmp[k++] = a[i++];
        else tmp[k++] = a[j++];
    }
    while (i <= m) tmp[k++] = a[i++];
    while (j <= r) tmp[k++] = a[j++];
    for (int p = l; p <= r; ++p) a[p] = tmp[p];
}

void merge_sort(vector<int> &a) {
    int n = a.size();
    sub_merge_sort(a, 0, n - 1);
}

int RandomNumber () { return (rand() % size); }

void run() { 
    vector<int> values(size);
    generate(values.begin(), values.end(), RandomNumber);
    clock_t t;
    t = clock();
    // selectionSort(values);
    // merge_sort(values);
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    cout <<"time taken is " << time_taken << endl;

}
// Driver program to test above functions
int main()
{
    run();
	return 0;
}

// This is code is contributed by rathbhupendra

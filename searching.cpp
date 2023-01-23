// solved by __abdykerimov__

#include <bits/stdc++.h>

#define int long long
#define all(s) s.begin(), s.end()
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second

using namespace std;

int solve()
{

}

    // bubble sort
    // in this type of search, every element is compared with the next one, and if such two numbers do not stand in an appropriate order, they will be swapped
    void bubbleSort(int arr[], int arrLength)
    {


		for(int i = arrLength - 1; i >= 0; i--)
		{
		    for (int j = 0; j <= i; j++)
			if(arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
    }

    // selection sort
    // We are looking for the smallest value in the array and put it in the position from where we started the passage. Then we move to the next position.
    int findSmallestPosition(int arr[], int startPosition, int arrLength)
    {
        int smallestPosition = startPosition;
        for(int i = startPosition; i < arrLength; i++)
            {
                if(arr[i] < arr[smallestPosition])
                smallestPosition = i;
            }
        return smallestPosition;
    }
    void selectionSort(int arr[], int arrLength)
    {
        for(int i = 0; i < arrLength; i++)
            {
                int smallestPosition = findSmallestPosition(arr, i, arrLength);
                swap(arr[i], arr[smallestPosition]);
            }
        return;
    }


    // Insertion sort
    void insertionSort(int arr[], int arrLength)
    {
        for(int i = 1; i < arrLength; i++)
            {
                int j = i - 1;
                while(j >= 0 && arr[j] > arr[j + 1])
                    {
                        swap(arr[j], arr[j + 1]);
                        j--;
                    }
            }
    }
    // Quick sort

    // Merge sort

    // Shell sort

    // Heap sort


main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    //	freopen("input.txt", "r", stdin);
    //	freopen("output.txt", "w", stdout);
    solve();
}





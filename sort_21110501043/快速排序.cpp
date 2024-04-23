#include <iostream>
#include <vector>
using namespace std;
 
void swap(vector<int>& nums, int a, int b)
{
    int temp = nums[a];
    nums[a] = nums[b];
    nums[b] = temp;
}
 
void quicksort(vector<int>& nums, int start, int end)
{
    if (start >= end) return;
 
    int i = start;
    int j = end;
    int pivot = start;
 
    while (i < j){
        while(nums[j] > nums[pivot] && i < j){
            j--;
        }
        while(nums[i] <= nums[pivot] && i < j){
            i++;
        }
        if(i < j){
            swap(nums, i, j);
        }
    }
    swap(nums, pivot, i);
 
    quicksort(nums, start, i-1);
    quicksort(nums, i+1, end);
}
 
void print(vector<int>& nums)
{
    for (int i: nums){
        cout << i << " ";
    }
    cout << endl;
}
 
int main() {
    vector<int> array1 = {3,2,1,5,4,6,90,8};
    vector<int> array2 = {90,3,76,21,1,3,5};
 
    quicksort(array1, 0, array1.size()-1);
    quicksort(array2, 0, array2.size()-1);
 
    print(array1);
    print(array2);
 
    return 0;
}
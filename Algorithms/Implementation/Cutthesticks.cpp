#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    
    //Input
    for(int arr_i = 0;arr_i < n;arr_i++)
    {
       cin>> arr[arr_i];
    }
    
    // + Insertion Sort
    int j, temp;
		
	for (int i = 0; i < n; i++)
    {
		j = i;
		
		while (j > 0 && arr[j] > arr[j-1])
        {
			  temp = arr[j];
			  arr[j] = arr[j-1];
			  arr[j-1] = temp;
			  j--;
			  }
    }
    // - Insertion Sort
    
    
    cout<<n<<endl;
    while(n>=1)
    {
        for(int i=0; i<n; i++)
        {
            arr[i] = arr[i] - arr[n-1];
            if(arr[i]==0)
                n = i;
        }
        if(n!=0)
        {
            cout<<n;
            cout<<endl;
        }
    }
    
    
    return 0;
}


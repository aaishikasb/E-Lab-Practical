#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int arr[a], b, i;
    for (i = 0; i < a; i++)
        cin >> arr[i];
    int key, j;  
    for (i = 1; i < a; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
    }
    int max,num=arr[0];
    for(i=1;i<a;)
    {
        int max1=1;
        while(arr[i]==arr[i-1])
        {
            max1++;
            i++;
        }
        if(max1>max)
        {
            max=max1;
            num=arr[i];
        }
    }
    cout<<max<<" "<<num;
    return 0;
}
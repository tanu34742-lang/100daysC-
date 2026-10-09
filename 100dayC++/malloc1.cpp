#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int *arr = (int*)malloc(n * sizeof(int));
    if (arr==NULL)
    {
        cout<<"overflow";
        return 0;



        }
    cout<<"enter"<<n<<"marks";
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];


    }

    cout<<"total"<<"sum";
    free(arr);
    return 0;

}
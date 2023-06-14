//Matrix addition
#include <iostream>
using namespace std;
//Matrix addition
// int main()
// {
//     int r = 2, c = 4 , sum [2][4], i, j;

//     int a[2][4] = {{1,5,9,4}, {3,2,8,3}};
//     int b[2][4] = {{6,3,8,2}, {1,5,2,9}};

//     cout<<"The first matrix is : "<<endl;
//     for (i = 0; i<r; i++)
//     {
//         for (j = 0; j<c; j++)
//         cout<<a[i][j]<<" ";
//         cout<<endl;
//     }
//     cout<<endl;
//     cout <<"The second matrix is : "<<endl;
//     for (i =0; i<r; i++)
//     {
//         for (j = 0; j<c; j++)
//             cout<<b[i][j]<<" ";
//             cout<<endl;
//     }
//     cout<<endl;
//     for (i = 0; i<r; i++)
//     for (j = 0; j<c; j++)
//     sum [i][j] = a[i][j]+b[i][j];
//     cout<<"Sum of the two matrix is: "<<endl;

//     for (i = 0; i<r; ++i)
//     {
//         for (j = 0; j<c; ++j)
//         cout<<sum [i][j]<<" ";
//         cout<<endl;
//     }
//     cout<<endl;
//     return 0;
// }

// // Sum of rows
// #include <iostream>
// using namespace std;

// int M 4
// int N 4
 
// int sum(int arr[M][N])
// {
//     int i, j;
//     int sum = 0;
 
    
//     for (i = 0; i < M; ++i) {
//         for (j = 0; j < N; ++j) {
            
//             sum = sum + arr[i][j];
//         }
//     }
//     return sum;
// }
 
// int main()
// {
//     int i, j;
//     int arr[M][N];
 
    
//     int x = 1;
//     for (i = 0; i < M; i++)
//         for (j = 0; j < N; j++)
//             arr[i][j] = x++;
 
    
//     cout << sum(arr);
//     return 0;
// }

// maximum element in a array
#include <iostream>
using namespace std;
 
int main()
{
    // Get the array
    int arr[] = { 1, 45, 54, 71, 76, 12 };
 
    // Compute the sizes
    int n = sizeof(arr) / sizeof(arr[0]);
 
    // Print the array
    cout << "Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
 
    // Find the maximum element
    cout << "\nMax Element = " << *max_element(arr, arr + n);
    return 0;
}

// // C++ program to find the maximum element

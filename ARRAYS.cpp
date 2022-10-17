//store elements in 1d array and display it
#include <iostream>
using namespace std;

int main(){
    int n;
    int arr[10];
     cout<<"enter the size of array";
    cin>>n;
    cout<<"entr"<<n<<"integers";
    for (int i=1; i<=5; i++) {
        cin>>arr[i];}
    cout<<"the elements are;";
    for(int i=1; i<=5;i++ ){
        cout<<arr[i]<<" ";
    }
    return 0;

     
}














//Linear Search using array
#include <iostream>
  using namespace std;

void linearSearch(int a[], int n) {
  int temp = -1;

  for (int i = 0; i < 5; i++) {
    if (a[i] == n) {
      cout << "Element found at position: " << i + 1 << endl;
      temp = 0;
      break;
    }
  }

  if (temp == -1) {
    cout << "No Element Found" << endl;
  }

}

int main() {
  int arr[5];
  cout << "Please enter 5 elements of the Array" << endl;
  for (int i = 0; i < 5; i++) {
    cin >> arr[i];
  }
  cout << "Please enter an element to search" << endl;
  int num;
  cin >> num;

  linearSearch(arr, num);

  return 0;
}
















//binary searcḣ using array
#include <iostream>  
#include <conio.h>  
using namespace std;  
int main ()  
{  
    // declaration of the variables and array  
    int arr[100], st, mid, end, i, num, tgt;  
      
    cout << " Define the size of the array: " << endl;  
    cin >> num; // get size  
      
    // enter only sorted array  
        cout << " Enter the values in sorted array either ascending or descending order: " << endl;  
    // use for loop to iterate values  
    for (i = 0; i < num; i++)  
    {  
        cout << " arr [" << i << "] = ";  
        cin >> arr[i];  
    }  
      
    // initialize the starting and ending variable's values  
    st = 0;  
    end = num - 1; // size of array (num) - 1  
      
    // define the item or value to be search  
    cout << " Define a value to be searched from sorted array: " << endl;  
    cin >> tgt;  
      
    // use while loop to check 'st', should be less than equal to 'end'.  
    while ( st <= end)  
    {  
        // get middle value by splitting into half  
        mid = ( st + end ) / 2;  
        /* if we get the target value at mid index, print the position and exit from the program. */  
        if (arr[mid] == tgt)  
        {  
            cout << " Element is found at index " << (mid + 1);  
            exit (0); // use for exit program the program  
        }  
        // check the value of target element is greater than the mid element' value  
        else if ( tgt > arr[mid])  
        {  
            st = mid + 1; // set the new value for st variable  
        }  
          
        // check the value of target element is less than the mid element' value  
        else if ( tgt < arr[mid])  
        {  
            end = mid - 1; // set the new value for end variable  
        }  
    }  
    cout << " Number is not found. " << endl;  
    return 0;  
}   











//2D array multiplication
#include <iostream>
using namespace std;
int main() {
    cout << " =====  Program to demonstrate Addition of two Matrices ===== \n\n";

    //loop variable i to iterate rows and j to iterate columns.
    int row, col, i, j;
    //Declaring the 3 matrices (2D arrays) m1-first matrix, m2- second matrix and sum- stores the addition of the two matrices
    int m1[10][10], m2[10][10], sum[10][10];
    cout << "\n\nEnter the number of Rows and Columns of matrix : ";
    cin >> row >> col;
    cout << "\nEnter the " << row * col << " elements of first matrix : \n";
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cin >> m1[i][j];
        }
    }
    cout << "\nEnter the " << row * col << " elements of second matrix : \n";
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cin >> m2[i][j];
        }
    }
    //calculating the sum matrix
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }
    cout << "\n\nThe first matrix is : \n";
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cout << m1[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "\n\nThe second matrix is : \n";

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cout << m2[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "\n\nThe Sum matrix is : \n";
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cout << sum[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "\n\n";
    return 0;
}
//Test1 2-2
#include <iostream>
using namespace std;
int main()
{
    srand(time(NULL));
    int numRows, numCols;
    cout<<"Type in the row: ";
    cin>>numRows;
    cout<<endl;
    cout<<"Type in the column: ";
    cin>>numCols;
    cout<<endl;

    char arr[numRows][numCols];
    cout<<"Array before sorting: "<<endl;
    for (int i=0; i<numCols; i++)
    {
        for(int j=0; j<numRows; j++)
        {
            int r = rand()%25+'a';
            char ch = (char)r;
            arr[i][j] = ch;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout <<"Array after sorting by row: ";
    for(int i=0; i<numRows*numCols; i++)
    {
        for(int l=0; l<numRows; l++)
        {
            for(int p=0; p<numCols-1; p++)
            {
                if(arr[l][p]>arr[l][p+1])
                {
                    int temp = arr[l][p];
                    arr[l][p] = arr[l][p+1];
                    arr[l][p+1] = temp;
                }
            }
        }
    }
    cout <<"\n";
    for(int i=0; i<numRows; i++)
    {
        for(int j=0; j<numCols; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //column
    for(int o=0; o<numCols; o++)
    {
        for(int r=0; r<numRows-1; r++)
        {
            if(o%2==0)
            {
                if(arr[r][o]>arr[r+1][o])
                {
                    int temp=arr[r][o];
                    arr[r][o]=arr[r+1][o];
                    arr[r+1][o]=temp;
                }
            }
            else
            {
                if(arr[r][o]<arr[r+1][o])
                {
                    int temp=arr[r][o];
                    arr[r][o]= arr[r+1][o];
                    arr[r+1][o]=temp;
                }
            }
        }
    }
    cout<<"Array after sorting by column: "<<endl;
    for(int i=0; i<numRows; i++)
    {
        for(int j=0; j<numCols; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
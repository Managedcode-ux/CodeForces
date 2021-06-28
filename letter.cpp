//this solution is not working(error:-blank output)
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int row=0,column=0,i=0,j=0;
//     char input=0;
//     vector<vector<char>> v1;
//     int min_row=-1,min_col=-1,max_row=row,max_col=column;  
    
    
    
//     cin>>row>>column;

//     for(i=0; i<row; i++)
//     {
//         vector<char>v2;
//         for(j=0; j<column; j++)
//         {
//             cin>>input;
//             v2.push_back(input);
//         }
//         v1.push_back(v2);
//     }

//     for(i=0;i<row;i++)
//     {
//         for(j=0;j<column;j++)
//         {
//             if(v1[i][j] == '*')
//             {
//                 if(i<min_row)
//                     min_row = i;
//                 if(i>max_row)
//                     max_row = i;
//                 if(j<min_col)
//                     min_col = j;
//                 if(j>max_col)
//                     max_col = j;
//             }
//         }
//     }

//    

//      for(i = min_row; i<max_row; i++)
//     {
//         for(j = max_col; j<max_col; j++)
//         {
//             cout<<v1[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


#include<iostream>
#define max 50
using namespace std;

int main()
{
    char array[max][max],input;
    int n,m;
    int min_row=n,min_col=m,max_row=-1,max_col=-1;  
    cin>>n>>m;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>input;
            array[i][j] = input;
        }
    }


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(array[i][j] == '*')
            {
                if(i<min_row)
                    min_row = i;
                if(i>max_row)
                    max_row = i;
                if(j<min_col)
                    min_col = j;
                if(j>max_col)
                    max_col = j;                
            }
        }
    }

    for(int i=min_row;i<=max_row;i++)
    {
        for(int j=min_col;j<=max_col;j++)
        {
            cout<<array[i][j];
        }
        cout<<endl;
    }

    return 0;

}

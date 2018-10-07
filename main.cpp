// Course:  CS213 - Programming II  - 2018
// Title:   Assignment I - Task 1 - Problem 1
// Program: CS213-2018-A1-T1-P1
// Purpose: Skeleton code for the student to start working
// Author:  Dr. Mohammad El-Ramly
// Date:    10 August 2018
// Version: 1.0

#include <iostream>
#include <iomanip>
//#include <cassert>

using namespace std;

// A structure to store a matrix
struct matrix
{
    int* data;       // Pointer to 1-D array that will simulate matrix
    int row, col;
};

// Already implemented
void createMatrix (int row, int col, int num[], matrix& mat)
{
// Takes an array of data and stores in matrix according
// to rows and columns

    mat.row = row;
    mat.col = col;
    mat.data = new int [row * col];
    for (int i = 0; i < row * col; i++)
        mat.data [i] = num [i];
}
matrix operator ++ (matrix &mat)
{
    for(int i=0; i<(mat.col*mat.row); i++)
    {
        mat.data[i]++;
    }
    matrix newMat;
    newMat.row=mat.row;
    newMat.col=mat.col;
    newMat.data=new int[newMat.col*newMat.row];
    for(int i=0; i<(mat.col*mat.row); i++)
    {
        newMat.data[i]=mat.data[i];
    }

    return newMat;

}
matrix operator -- (matrix &mat)
{
    for(int i=0; i<(mat.col*mat.row); i++)
    {
        mat.data[i]--;
    }
    matrix newMat;
    newMat.row=mat.row;
    newMat.col=mat.col;
    newMat.data=new int[newMat.col*newMat.row];
    for(int i=0; i<(mat.col*mat.row); i++)
    {
        newMat.data[i]=mat.data[i];
    }

    return newMat;

}



matrix operator+= (matrix& mat1, matrix mat3)
{
// Adding Two matrices
    if (mat1.row == mat3.row && mat1.col == mat3.col)
    {

        for (int i=0; i<(mat1.row*mat1.col); i++)
        {
            mat1.data[i] = mat1.data[i] + mat3.data[i];      // msh bysht8al 3la de msrady ygm3hom
        }
    }
    return mat1;
}
matrix operator-= (matrix& mat1, matrix mat3)
{
// Adding Two matrices
    if (mat1.row == mat3.row && mat1.col == mat3.col)
    {

        for (int i=0; i<(mat1.row*mat1.col); i++)
        {
            mat1.data[i] = mat1.data[i] - mat3.data[i];      // msh bysht8al 3la de msrady ygm3hom
        }
    }
    return mat1;
}
matrix operator+= (matrix mat1, int scalar)
{
    if (mat1.row == scalar && mat1.col == scalar)
    {
        for(int i=0; i<(mat1.row*mat1.col); i++)
        {
            mat1.data[i]=mat1.data[i]+scalar;
        }
    }

    return mat1;

}
matrix operator-= (matrix mat1, int scalar)
{
    if (mat1.row == scalar && mat1.col == scalar)
    {

        for(int i=0; i<(mat1.row*mat1.col); i++)
        {
            mat1.data[i]=mat1.data[i]+scalar;
        }
    }

    return mat1;

}



ostream& operator<< (ostream &out, matrix mat)
{
    cout<< "matrix is : " << endl;

    for (int i = 0; i < mat.row; i++)
    {
        for(int j=0; j<mat.col; j++)
        {
            out << mat.data[i*j] << " ";
        }
        cout<< endl;
    }
    // out<< mat.data[i] << " ";
    return out;
}
istream operator>> (istream& in,  matrix &mat)
{
    cout<< "Enter rows: ";
    cin>> mat.row;
    cout<< "Enter cols: ";
    cin>> mat.col;
    mat.data=new int [mat.col*mat.row];
    for(int i=0; i<mat.row; i++)
        for(int j=0; j<mat.col; j++)
            in>> mat.data[i*mat.col+j];
}
int main()
{
    int data1 [] = {1,2,3,4,5,6,7,8};
    int data2 [] = {13,233,3,4,5,6};
    int data3 [] = {10,100,10,100,10,100,10,100};

    matrix mat1, mat2, mat3, mat4;
    createMatrix (4, 2, data1, mat1);
    createMatrix (2, 3, data2, mat2);
    createMatrix (4, 2, data3, mat3);

// The next code will not work until you write the functions
    cout <<" mat 1 is =  " <<mat1 << endl;
    cout << " mat 2 is =  "<< mat2 << endl;
    cout << " mat 3 is =  "<< mat3 << endl;

// cout << (mat1 + mat3);
//  cout << (mat3 + mat3);

    cout <<" mat 1++ is =  " <<(++mat1);  //tmam
    cout <<" mat 1-- is =  " <<(--mat2); //tmam
// cout << (mat1+3);
//cout << mat1 << endl;

      mat1+= mat3 += mat3;  //tmam
     mat1-=mat3-=mat3;      //tmam
    cout<<"oop -= is "<<mat1<<endl;
   cout<< "opp+=" << mat1 << endl;
    //cout << mat2 << endl;
// cout << mat3 << endl;
    // Add more examples of using matrix
    // .......

    return 0;
}


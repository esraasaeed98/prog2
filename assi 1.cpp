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
void createMatrix (int row, int col, int num[], matrix& mat){
// Takes an array of data and stores in matrix according
// to rows and columns

 mat.row = row;
  mat.col = col;
  mat.data = new int [row * col];
  for (int i = 0; i < row * col; i++)
    mat.data [i] = num [i];
}


// Student #1 with the smallest ID (e.g., 20170080)
// All these operations return a new matrix with the calculation result
matrix operator+  (matrix mat1, matrix mat2){ // Add if same dimensions


	for (int i=0; i<(mat1.row*mat1.col); i++){
        mat1.data[i] = mat1.data[i] + mat2.data[i];      // msh bysht8al 3la de msrady ygm3hom
}
	return mat1;
}


matrix operator-  (matrix mat1, matrix mat2){ // Sub if same dimensions

    if (mat1.row == mat2.row && mat1.col == mat2.col){

	for (int i=0; i<(mat1.row*mat1.col); i++){
         mat1.data[i] = mat1.data[i] - mat2.data[i];
}}
	return mat1;
}


matrix operator*  (matrix mat1, matrix mat2){ // Multi if col1 == row2
    r1=mat1.row;
    c1=mat1.col;
    r2=mat2.row;
    c2=mat2.col;
        if (mat1.row == mat2.col){

	for (int i=0; i<(mat1.row*mat1.col); i++){
        mat1.data[i] = mat1.data[c1][r1] * mat2.data[c2][r2];
}}
	return mat1;
}

matrix operator+  (matrix mat1, int scalar){
    for(int i=0;i<(mat1.row*mat1.col);i++){
        mat1.data[i]=mat1.data[i]+scalar;
    }

return mat1;

}

matrix operator-  (matrix mat1, int scalar){  // Subtract a scalar

    for(int i=0;i<(mat1.row*mat1.col);i++){
        mat1.data[i]=mat1.data[i]-scalar;}

return mat1;}



matrix operator*  (matrix mat1, int scalar);  // Multiple by scalar


ostream& operator<< (ostream &out, matrix mat){
    cout<< "matrix is : " << endl;

     for (int i = 0; i < mat.row; i++){
        for(int j=0;j<mat.col;j++){
        out << mat.data[i*j] << " ";}
        cout<< endl;}
       // out<< mat.data[i] << " ";
    return out;
}
istream operator>> (istream& in ,  matrix &mat){
cout<< "Enter rows: ";
cin>> mat.row;
cout<< "Enter cols: ";
cin>> mat.col;
mat.data=new int [mat.col*mat.row];
for(int i=0;i<mat.row;i++)
    for(int j=0;j<mat.col;j++)
    in>> mat.data[i*mat.col+j];
}

/*matrix operator ++ (matrix &mat){
for(int i=0;i<(mat.col*mat.row);i++){
    mat.data[i]++;}
matrix newMat;
newMat.row=mat.row;
newMat.col=mat.col;
newMat.data=new int[newMat.col*newMat.row];
for(int i=0;i<(mat.col*mat.row);i++){
    newMat.data[i]=mat.data[i];}

return newMat;

}*/
//__________________________________________

int main()
{
  int data1 [] = {1,2,3,4,5,6,7,8};
  int data2 [] = {13,233,3,4,5,6};
  int data3 [] = {10,100,10,100,10,100,10,100};

  matrix mat1, mat2, mat3 , mat4;
  createMatrix (4, 2, data1, mat1);
  createMatrix (2, 3, data2, mat2);
  createMatrix (4, 2, data3, mat3);

// The next code will not work until you write the functions
  cout<< "mat1 is  " << mat1 << endl;
  cout<< "mat2 is  " << mat2 << endl;
  cout<< "mat3 is  " << mat3 << endl;

 // cout<< "mat1+mat3 = " << (mat1 + mat3);
//  cout<<"mat3 + mat3 = " << (mat3 + mat3);

// cout << (++mat1);
// cout<< "mat1+3 = " << (mat1+3);
 //cout << mat1 << endl;
 cout<< "opp* = "<< mat1<<endl;

 /* mat1+= mat3 += mat3;
  cout << mat1 << endl;
  cout << mat2 << endl;
  cout << mat3 << endl;
  // Add more examples of using matrix
  // .......
*/
  return 0;
}

//__________________________________________

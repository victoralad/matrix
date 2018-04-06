#include "main.hpp"
using namespace std;

// calculates the transpose of a matrix
int Victor::transpose(const vector<int> & a)
{
  for( int j = 0; j < a.size( ); ++j )
  {
    cout<<a[j];
  }
  
}

int main()
{
    Victor v; //creates an instance v of the class Victor
	// initialize matrices
	int A[3][2] = {{2,3},{4,3},{4,3}};
	int B[2][3] = {{1,2,3},{3,2,1}};
	int C[2][4] = {{2,4,5,3},{3,5,4,2}};

	//function is called with arguments (A, #rows of A, #columns of A, B, #rows of B, #columns of B)
	//v.multiply(A, 3, 2, B, 2, 3); // multiply matrix A and B
	//function is called with arguments (C, #rows of C, #columns of C)
	v.transpose(C); // transpose matrix C
	
	
    return 0;
}
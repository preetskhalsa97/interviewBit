//https://www.interviewbit.com/problems/spiral-order-matrix-i/

#include <iostream> 
#include <vector>

using namespace std;

vector<int> spiralOrder(const vector<vector<int> > &A) {
    
    vector<int> spiral(A.size() * A[0].size());
    int rows = A.size(), columns = A[0].size();
    vector<int> directions(4); // 0- r, 1- d, 2- l, 3- u
    for (int u = 0; u < directions.size(); u++){
    	directions[u] = u;
    }
    int directionIndex = 0;
    int direction;
    int row = 0;
    int column = 0; // mapping the cursor- (row, column)
    int margin = 0;
    int i,j;
    int track = 0; // tracking entries into spiral
    
    while (true){ // could be in terms of track
        if (directionIndex == 4){
            directionIndex = 0;
        }
        // if (directionIndex == 3){
        //     margin++;
        // }
        direction = directions[directionIndex];
        cout << "direction = " << direction << endl;
        cout << "present row" << row << endl;
        cout << "present col" << column << endl;
        if (direction == 0){
            // right
            while (column <= columns - 1 - margin){
                cout << A[row][column] << endl;
                spiral[track++] = A[row][column];
                column++;
            }
            column--;
            row++;
            if (row + margin == rows){
                break;
            }
            
        }else if(direction == 1){
            // down
            while (row <= rows - 1 - margin){
                cout << A[row][column] << endl;
                spiral[track++]  = A[row][column];
                row++;
            }
            row--;
            column--;
            if (columns + column == margin){
                break;
            }
            
        }else if (direction ==2){
            // left
            while (column >= margin){
                cout << A[row][column] << endl;
                spiral[track++] = A[row][column];
                column--;
            }
            column++;
            row--;
            if (row == margin){
                break;
            }
            margin++;
            
        }else{
            // direction == 3
            // up
            while (row >= margin){
                cout << A[row][column] << endl;
                spiral[track++] = A[row][column];
                row--;
            }
            row++;
            column++;
            if (column + margin == columns){
                break;
            }
        }
        
        directionIndex++;       
        
    }  
    
}

int main(){

	vector <vector<int> > A(1);
	vector<int> v1(1);
	v1[0] = 1;
	A[0] = v1;
	
	vector<int> B = spiralOrder(A);
	for (int i = 0; i < B.size(); i++){
		cout << B[i] << endl;
	}
	return 0;
}





#include <iostream>
#include <vector>

using namespace std;

void printTable(vector<vector<char>> &tabl);
bool possible(vector<vector<char>> &tabl, char val, int x, int y);

int main(){
    cout << std::boolalpha; // To write the bool values as string to the standard output
    // This is the vector (of vectors) that stores the table
    vector<vector<char>> sudoku = {
        {'5',' ',' ',' ','4',' ',' ',' ','7'},
        {' ',' ',' ','9',' ','1',' ',' ',' '},
        {' ',' ',' ','5',' ','8',' ',' ',' '},
        {' ','9','6',' ',' ',' ','5','1',' '},
        {'3',' ',' ',' ','9',' ',' ',' ','4'},
        {' ','8','5',' ',' ',' ','2','6',' '},
        {' ',' ',' ','1',' ','9',' ',' ',' '},
        {' ',' ',' ','7',' ','3',' ',' ',' '},
        {'2',' ',' ',' ','5',' ',' ',' ','6'}
        };
    


    printTable(sudoku);


    cout<<endl<<endl;
    return 0;
}

// This is the function that prints the table of the sudoku game to the standard output
void printTable(vector<vector<char>> &tabl){

    for(int i = 0; i < tabl.size(); i++){
        for(int j = 0; j < tabl[0].size(); j++){
            cout << tabl[i][j];
        }
        cout<<endl;
    }

}

// This function checks that we can put a value to a given coordinate in the table 
bool possible(vector<vector<char>> &tabl, char val, int x, int y){
    // Check is the place we want to put the walue is empty
    if(tabl[x][y] == ' '){
        // Check the row
        for(int i = 0; i < tabl[0].size(); i++){
            if(tabl[y][i] == val){
                return false;
            }
        }

        // Check the column
        for(int i = 0; i < tabl.size(); i++){
            if(tabl[i][x] == val){
                return false;
            }
        }
        // Check the small square
        // Calculate the coordinates of the upper left corner of the small 3 by 3 square
        int start_x = (x / 3) * 3;
        int start_y = (y / 3) * 3;
        //cout<<start_x<<" "<<start_y;
        // From this coordinate check evry value in the small square, that one on this is eq. to the val (that we want to put there)
        for(int i = start_x; i < start_x + 3; i++){
            for(int j = start_y; j < start_y + 3; j++){
                if(tabl[j][i] == val){
                    //cout<<i<<" "<<j;
                    return false;
                }
                //cout<<tabl[j][i];
            }
        }

        return true;
    
    } else{
        return false;
    }
}
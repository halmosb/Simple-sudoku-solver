#include <iostream>
#include <vector>

using namespace std;

void printTable(vector<vector<char>> &tabl);

int main(){
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
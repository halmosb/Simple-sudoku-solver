#include <iostream>
#include <vector>

using namespace std;

void printTable(vector<vector<char>> &tabl);

int main(){
    
    vector<vector<char>> sudoku = {{'1','2','3'}, {'4','5','6'}, {'7','8','9'}};
    
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
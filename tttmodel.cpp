#include "tttmodel.h"
#include <iostream>
#include <ostream>
TTTModel::TTTModel()
{


}

void TTTModel::reset()
{

    for(int i=0; i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
     array[i][j]='-';

}}


   }

void TTTModel::put(int row, int col)
{

   array[row][col]=getWhosTurn();
}

QString TTTModel::getCurrentBoard() // something like "---XOXX--"
{
 QString currentString;
 for(int i=0; i<SIZE; i++){
     for(int j=0; j<SIZE;j++){
     currentString=currentString+array[i][j];

 }}

    return currentString;
}

char TTTModel::getWhosTurn() // "X" or "O" or if somebody already won, return anything
{
    return 'O';
}

bool TTTModel::hasSomeoneWon() // return if somebody has won
{
    bool winnerOrNOt=false;
    QString firstRow= getCurrentBoard().left(3);
    QString secondRow=getCurrentBoard().mid(3,3);
    QString thirdRow=getCurrentBoard().right(3);
    QString firstColumn="";
            firstColumn.append(array[0][0]);
            firstColumn.append(array[1][0]);
            firstColumn.append(array[2][0]);
    QString secondColumn="";
            secondColumn.append(array[0][1]);
            secondColumn.append(array[1][1]);
            secondColumn.append(array[2][1]);
    QString thirdColumn="";
            thirdColumn.append(array[0][2]);
            thirdColumn.append(array[1][2]);
            thirdColumn.append(array[2][2]);
     QString leftCornerDiagonal="";
             leftCornerDiagonal.append(array[0][0]);
             leftCornerDiagonal.append(array[1][ 1]);
             leftCornerDiagonal.append(array[2][2]);
    QString rightCornerDiagonal="";
            rightCornerDiagonal.append(array[0][2]);
            rightCornerDiagonal.append(array[1][ 1]);
            rightCornerDiagonal.append(array[2][0]);

    QString rowWinO="OOO";
    QString rowWinX="XXX";
    if(((firstRow==rowWinO)||(secondRow==rowWinO)||(thirdRow==rowWinO))||
            ((firstRow==rowWinX)||(secondRow==rowWinX)||(thirdRow==rowWinX))){
        winnerOrNOt=true;
    }
 else if(((firstColumn==rowWinO)||(secondColumn==rowWinO)||(thirdColumn==rowWinO))||
            ((firstColumn==rowWinX)||(secondColumn==rowWinX)||(thirdColumn==rowWinX))){
        winnerOrNOt=true;
    }
    else if(((leftCornerDiagonal==rowWinO)||(rightCornerDiagonal==rowWinO))||
            ((leftCornerDiagonal==rowWinX)||(rightCornerDiagonal==rowWinX))){
        winnerOrNOt=true;
    }

    return winnerOrNOt;
}

QString TTTModel::whosWinner() // return "X" or "O" if there's any winner. return anything if there's no winner yet
{
    return "";
}
























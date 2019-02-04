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
    QString firstRow;
    QString secondRow;
    QString thirdRow;
    return false;
}

QString TTTModel::whosWinner() // return "X" or "O" if there's any winner. return anything if there's no winner yet
{
    return "";
}
























/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: R162620H
 *
 * Created on September 13, 2017, 10:42 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;
class Tool {
    protected:
int strength;
char type;

void setStrength(int  thisStr){
strength=thisStr;
}
 public:
bool fight  (fight);
};
class Rock : public Tool{
public:
 Rock(int thisStr, char thisType){
strength=thisStr;
type=this ;
} 

}; 
class Paper:public Tool{
public:
void Paper(int thisStr,char thisType){
strength=thisStr;
}
public:
bool fight(Tool fight);

};
class Scissors : public Tool{
public:
void Scissors(int thisStr, char thisType){
strength=thisStr;
type=thisType;
}
public:
bool fight(Tool fight);

};



/*
 * 
 */
int main(int argc, char** argv) {

    return 0;
}


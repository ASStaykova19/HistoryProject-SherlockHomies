#pragma once


#include<iostream>
#include<iomanip>
#include<conio.h>
#include<stdlib.h>
#include <string>
#include <windows.h>
#include<math.h>


using namespace std;


struct node {
    int number;
    node* next;
};

bool isEmpty(node* head);
char menu();
void insertAsFirstElement(node* head, node*& last, int number);
void insert(node* head, node*& last, int number);
void remove(node* head, node*& last);
void showList(node* current);


void ClearArea();
void mainGame();
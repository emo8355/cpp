// C.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
using namespace std;

typedef  char  codeString[26];
enum  styleType { FORMAL, BRIEF };

struct  refType
{
	codeString  token[2000];
	codeString  symbol[20];
};

struct  mapType
{
	codeString  mapCode;
	styleType  style;
	refType  chart;
};

mapType  guide[200];
mapType  aMap;
refType  aRef;
int  count;
codeString  aCode;

int main()
{
	guide[23].chart = aRef;

	strcpy(guide[6].chart.token[2], aCode);

	guide[34].chart.token[1][23] = 'T';

	strcpy(char aMap.mapCode[2], aRef.symbol[7]);

	return 0;
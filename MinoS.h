#ifndef MINOS_H
#define MINOS_H
#include<iostream>
#include"Mino.h"
using namespace std;
class MinoS:public Mino
{
		public:
			MinoS();
			virtual void paint();
};
#endif


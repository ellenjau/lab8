#include<iostream>
#include<cstdlib>
#include<ctime>
#include<new>
#include"genMino.h"
using namespace std;
int main()
{
	Mino *mino_ptr;
	srand(time(NULL));
	for(int i=0;i<5;i++)
	{
		try	
		{
			mino_ptr=genMino();
			cout << " get to try" << endl;
		}
		catch(bad_alloc &failure)
		{
			cerr<<"exception:"<<failure.what()<<endl;
			exit(1);
		}
	}
	return 0;
}


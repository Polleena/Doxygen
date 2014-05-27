// LabDoxygen.cpp: определяет точку входа для консольного приложения.
//
///Sortirovka puzirkom
/// \file labDoxygen.cpp
#include "stdafx.h"

///\fn int _tmain(int argc, _TCHAR* argv[]) 
int _tmain(int argc, _TCHAR* argv[])
{
	int x[5];  /// x - massiv celih chisel
	cout<<"Vvedite 5 chisel:"<<endl;  /// vvodim 5 chisel
	for (int i=0; i<5; i++)
	cin>>x[i];
	for(int i=0; i<5; ++i)          /// sortirovki massiva
    for(int j=i+1; j<5; ++j)
    if(x[j]<x[i]) swap(x[i],x[j]);
	 
	  /// vivod massiva
	 	cout<<"Posle sortirovki: "<<endl;
    for(int i=0; i<5; ++i)
    cout<<x[i]<<" ";
    cout<<endl;
	getch();
	return 0;
}

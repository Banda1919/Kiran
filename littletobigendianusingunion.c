#include<stdio.h>

typedef union DATA{
	int rawData;
	char arr[4];
}data;
void main()
{
	data _mainVar= {0x11223344};
	data _conVar;
	_conVar.arr[3] = _mainVar.arr[0];
	_conVar.arr[2] = _mainVar.arr[1];
	_conVar.arr[1] = _mainVar.arr[2];
	_conVar.arr[0] = _mainVar.arr[3];
	printf("Little to Big Endian: 0x%x\n",_conVar.rawData);
}

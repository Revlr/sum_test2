#include <iostream>

#include "sum.h"

using namespace std;

void usage(){
	cout << "usage : <start number> <end number>" << endl;
	exit(0);
}

int main(int argc, char *argv[]){
	if(argc != 3) usage();

	cout << sum(atoi(argv[1]), atoi(argv[2])) << endl;
	return 0;
}


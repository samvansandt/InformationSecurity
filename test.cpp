#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char* argv[]){

//char* x = "myfile.bin";
FILE * pFile;
 char buffer[] = { 'l' , 'r' , 'z' };
pFile = fopen(argv[1],"wb");

  fwrite (buffer , sizeof(char), sizeof(buffer), pFile);
  fclose (pFile);
  return 0;





//cout << "done";
}

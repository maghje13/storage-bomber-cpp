#include <iostream>
#include <fstream>

using namespace std;

int main() {

  ofstream file("output.txt", ios::binary);
  
  // Allocate 1GB buffer
  const int bufSize = 1024 * 1024 * 1024 - 73741824;
  char* buffer = new char[bufSize];
  
  // Fill buffer with data
  for(int i=0; i<bufSize; i++) {
    buffer[i] = 'x'; 
  }

  // Write buffer to file
  file.write(buffer, bufSize);
  
  // Cleanup
  delete[] buffer;
  file.close();

  return 0;
}
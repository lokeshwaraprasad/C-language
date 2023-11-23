#include <stdio.h>
#include <string.h>

// Function to write
// string to file
// using fputs
void writeToFile(char str[])
{
	// Pointer to file
	FILE* fp;

	// Name of the file
	// and mode of the file
	fp = fopen("read.txt", "w");

	// Write string to file
	fputs(str, fp);

	// Close the file pointer
	fclose(fp);
}

// Driver Code
int main()
{
	char str[20];
	strcpy(str, "GeeksforGeeks");
	writeToFile(str);
	return 0;
}
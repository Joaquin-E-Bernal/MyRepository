// C program to demonstrate working of tmpfile()
#include <stdio.h>

int main(){
    char str[20]={"Hello GeeksforGeeks"};
    int i=0;
  
    FILE *tmp=tmpfile();
    if(tmp==NULL) puts("Unable to create temp file");
    else{
    	puts("Temporary file is created\n");
    	for(i=0;i<20;i++) fputc(str[i], tmp);
    	
    	// rewind() function sets the file pointer
	    // at the beginning of the stream.
	    rewind(tmp);
	    while(!feof(tmp)) putchar(fgetc(tmp));
	}
	
	return 0;
}
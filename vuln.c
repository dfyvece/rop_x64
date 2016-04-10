#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char** argv) {
	char buf[1024];
	if (argc > 1) {
		strcpy(buf, argv[1]);
		read(0, buf, 4096);
	}
	else {
		system("/bin/false");
	}
}

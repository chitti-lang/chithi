#include <stdio.h>
#include "chithi/common.h"
#include "chithi/compiler.h"

void compile(const char *file_name, const char *buffer) {
	printf("Chithi version %s\n", CHITHI_VERSION);
	printf("%s\n", buffer);
}

#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>

#include "ownet.h"

int main(int argc, char **argv) {

	int ret;

	ret = owAcquire(0, "/dev/ttyUSB0");

	ret = owTouchReset(0);
	if(!ret) {
		perror("No presence pulse of sensor found");
		exit -1;
	}
	
//	ret = owReadRom(0);
#if 1	
//	owEnableRW1990dot1(0);
//    owIsEnabledRW1990dot1(0);
    
//   	ret = owWriteRom(0);
    
//	owDisableRW1990dot1(0);
//    owIsEnabledRW1990dot1(0);

//	ret = owReadRom(0);
#endif
    return 0;
}

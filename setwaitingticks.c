#include "types.h"
#include "stat.h"
#include "user.h"

int 
main(int argc, char * argv[])
{
	int ticks;
    ticks = atoi(argv[1]);
    setwaitingticks(ticks);
    exit(); //return 0;
}

#ifndef ZTRIM_H
#define ZTRIM_H
#include <libztrim.h>
#endif

#include <GUSICommandLine.h>
#include <stdlib.h>

#undef main

DECLARE_MAIN(test)

REGISTER_MAIN_START
REGISTER_MAIN(test)
REGISTER_MAIN_END

int main()
{
#ifndef ZTRIM_DONT_INSTR
ztrim_fInstrument(2173);
#endif
	(void) exec_commands();
	
	return 0;
}

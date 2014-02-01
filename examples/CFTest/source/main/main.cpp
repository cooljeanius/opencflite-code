/*
 * main.cpp
 */

#include "stdafx.h"
#include "SuperString.h"
#include "CFTest.h"
#include "stdio.h"

int		main()
{
	CFTest();

	#if defined(__WIN32__)
		#ifdef __MWERKS__
			getc(stdin);
		#endif /* __MWERKS__ */
	#endif /* __WIN32__ */

	return 0;
}

/* ----------------------------------------------------------------------
 * FILE: as31.c
 * PACKAGE: as31 - 8031/8051 Assembler.
 *
 * DESCRIPTION:
 *	The file contains main(). It handles the arguments and makes
 *	sure that pass 1 is done before pass 2 etc...
 *
 * REVISION HISTORY:
 *	Jan. 	19, 1990 - Created. (Ken Stauffer)
 *	March, 	    2001, Paul Stoffregen: see ChangeLog for details
 *      July, 	    2003, Bernd Porr: added ".inc" to include asm files.
 *	March,  23, 2004, Alexander 'E-Razor' Krause: see ChangeLog for details
 *	May,     6, 2004, Alexander 'E-Razor' Krause: see ChangeLog for details
 *	May,    18, 2004, Martin Langer: see ChangeLog for details
 *
 * AUTHOR:
 *	All code in this file written by Ken Stauffer (University of Calgary).
 *	January, 1990. "Written by: Ken Stauffer"
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "as31.h"



int main(int argc, char **argv)
{
	char *dashF=NULL, *dashA=NULL, *dashO=NULL;
	int use_stdout=0, do_lst=0;
	int r, i;

	if (argc < 2) {
		showhelp(argv[0]);
		exit(1);
	}

	for (i=1; i<argc; i++ ) {
		if( argv[i][0] != '-' ) break;
		if( argv[i][1] == 'l' )
			do_lst = 1;
		else if( argv[i][1] == 'h' ) {
			showhelp(argv[0]);
			exit(1);
		}
		else if( argv[i][1] == 's' )
			use_stdout = 1;
		else if( argv[i][1] == 'v' ) {
			fprintf(stderr, "%s\n", VERSION);
			exit(1);
		} 
		else if( dashF == NULL && argv[i][1] == 'F' )
			dashF = argv[i]+2;
		else if( dashA == NULL && argv[i][1] == 'A' )
			dashA = argv[i]+2;
		else if( dashO == NULL && argv[i][1] == 'O' )
			dashO = argv[i]+2;
		else {
			fprintf(stderr,"Duplicate or unknown flag.\n");
			exit(1);
		}
	}
	if (i == argc) {
		fprintf(stderr,"Missing input file.\n");
		exit(1);
	}

	r = run_as31(argv[i], do_lst, use_stdout, dashF, dashA, dashO);
	return r;
}

/* print list with command options */

void showhelp(const char *cmd)
{
	fprintf(stderr, "AS31 %s\n", VERSION);
	fprintf(stderr,
		"Usage: %s [-h] [-l] [-s] [-v] [-Aarg] [-Ffmt] [-Ofile] file.asm\n\n",
		cmd);
	fprintf(stderr, "  -h       shows this help\n");
	fprintf(stderr, "  -l       create list file\n");
	fprintf(stderr, "  -s       send output to stdout\n");
	fprintf(stderr, "  -v       print version number\n");
	fprintf(stderr, "  -Aarg    optional output format argument\n");
	fprintf(stderr, "  -Ffmt    output format ");
	emitusage();
	fprintf(stderr, " (default=hex)\n");
	fprintf(stderr, "  -Ofile   send output to file\n\n");
	fprintf(stderr, "Look at the manpage for more details.\n");
}

/* the assembler calls here to display any messages */

void mesg(const char *str)
{
	if (str == NULL) str = "(null)";
	fprintf(stderr, "%s", str);
}




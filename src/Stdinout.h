//////////////////////////////////////////////////////////////////////////////
//
//  Stdinout.h - connect various character devices to standard streams
//  Copyright (c) 2014, 2016 Roger A. Krupski <rakrupski@verizon.net>
//
//  Last update: 03 August 2016
//
//  This library is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This library is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program. If not, see <http://www.gnu.org/licenses/>.
//
//////////////////////////////////////////////////////////////////////////////

#ifndef STD_IN_OUT_H
#define STD_IN_OUT_H

#include <stdio.h>
#include "Print.h"

class STDINOUT {

	public:
		void open (Print &);
		void open (Print &, Print &);
		void open (Print &, Print &, Print &);
		void close (void);
		Print &getStream (FILE *);

	private:
		static int getchar0 (FILE *); // char read for stdin
		static int putchar1 (char, FILE *); // char write for stdout
		static int putchar2 (char, FILE *); // char write for stderr
};

extern STDINOUT STDIO; // Preinstantiate STDIO object

#endif

// end of Stdinout.h

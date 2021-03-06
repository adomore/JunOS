/*
 *  limits.h
 * 
 *  This file is part of JunOS C Library.
 *
 *  Copyright (C) 2016, Liu Xiaofeng <lxf.junos@aliyun.com>
 *  Licensed under MIT, http://opensource.org/licenses/MIT.
 */

#ifndef _LIMITS_H
#define _LIMITS_H

/* definitions of char */
#define CHAR_BIT	          8
#define CHAR_MAX	        127
#define CHAR_MIN	       -128
#define UCHAR_MAX	        255

/* definitions of short */
#define SHRT_MIN	     -32768
#define SHRT_MAX	      32767
#define USHRT_MAX	     65535U

/* definitions of int */
#define INT_MIN		-2147483648
#define INT_MAX		 2147483647
#define UINT_MAX        4294967295U

/* Definitions of long */
#define LONG_MIN	-LONG_MAX-1
#define LONG_MAX	 2147483647
#define ULONG_MAX	4294967295U

#define PATH_MAX	        512

#define RAND_MAX	0x7ffffffff

#endif

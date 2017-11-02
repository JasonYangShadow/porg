/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */


#ifndef PORG_CONFIG_H
#define PORG_CONFIG_H 1


/* List of paths to skip */
#define EXCLUDE "/tmp:/dev:/proc:/sys:/run"

/* Disable gtkmm-2.4 API */
/* #undef GTK_DISABLE_DEPRECATED */

/* Define to 1 if you have the `creat64' function. */
#define HAVE_CREAT64 1

/* Define to 1 if you have the declaration of `__open', and to 0 if you don't.
   */
#define HAVE_DECL___OPEN 0

/* Define to 1 if you have the declaration of `__open64', and to 0 if you
   don't. */
#define HAVE_DECL___OPEN64 0

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the `fopen64' function. */
#define HAVE_FOPEN64 1

/* Define to 1 if you have the `freopen64' function. */
#define HAVE_FREOPEN64 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `linkat' function. */
#define HAVE_LINKAT 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `open64' function. */
#define HAVE_OPEN64 1

/* Define to 1 if you have the `openat' function. */
#define HAVE_OPENAT 1

/* Define to 1 if you have the `openat64' function. */
#define HAVE_OPENAT64 1

/* Define to 1 if you have the `renameat' function. */
#define HAVE_RENAMEAT 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `symlinkat' function. */
#define HAVE_SYMLINKAT 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Default porg logs directory */
#define LOGDIR "/var/log/porg"

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Disable libc assertions */
#define NDEBUG 1

/* Name of package */
#define PACKAGE "porg"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "http://porg.sourceforge.net"

/* Define to the full name of this package. */
#define PACKAGE_NAME "porg"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "porg 0.10"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "porg"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.10"

/* Release date */
#define RELEASEDATE "17 May 2016"

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Version number of package */
#define VERSION "0.10"

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Define to `unsigned long' if <sys/types.h> does not define. */
/* #undef ino_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef uint */

/* Define to `unsigned long' if <sys/types.h> does not define. */
/* #undef ulong */


#include "config-bot.h"
#endif


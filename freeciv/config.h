/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Can execute program as root - Amiga */
/* #undef ALWAYS_ROOT */

/* SDL_Mixer support */
/* #undef AUDIO_SDL */

/* Bug reporting URL */
#define BUG_URL "https://gna.org/projects/freeciv/"

/* Version specific subdir for default data path */
#define DATASUBDIR "2.3"

/* Extra debugging support */
/* #undef DEBUG */

/* Connection TCP Port */
#define DEFAULT_SOCK_PORT 5556

/* always defined to indicate that i18n is enabled */
#define ENABLE_NLS 1

/* Configuration autogenerated */
#define FC_CONFIG_H 1

/* These are the CFLAGS used in compilation */
#define FC_STORE_CFLAGS '-save-temps -Wall -Wpointer-arith -Wcast-align -Wmissing-prototypes -Wmissing-declarations -g -O2 -fsigned-char -I/usr/local/include'

/* These are the CPPFLAGS used in compilation */
#define FC_STORE_CPPFLAGS ' -DLOCALEDIR="\"${datarootdir}/locale\"" -DDEFAULT_DATA_PATH="\".:data:~/.freeciv/2.3:${datarootdir}/freeciv\""'

/* These are the CXXFLAGS used in compilation */
#define FC_STORE_CXXFLAGS '-Wall -Wpointer-arith -Wcast-align -g -O2 -fsigned-char'

/* Xfuncproto */
/* #undef FUNCPROTO */

/* Path where to install the games */
#define GAMEDIR "${exec_prefix}/lib/ggz"

/* Path where the games should look for their data files */
#define GGZDATADIR "${datarootdir}/ggz"

/* Game server data directory */
/* #undef GGZDDATADIR */

/* Path where the game registry is located */
#define GGZMODULECONFDIR "/usr/local/etc"

/* Client support for GGZ */
/* #undef GGZ_CLIENT */

/* Support for embedded GGZ through libggz-gtk */
/* #undef GGZ_GTK */

/* Server support for GGZ */
/* #undef GGZ_SERVER */

/* Define to 1 if you have the <arpa/inet.h> header file. */
#define HAVE_ARPA_INET_H 1

/* compile with authentication */
/* #undef HAVE_AUTH */

/* Define to 1 if you have the `bind' function. */
#define HAVE_BIND 1

/* Define to 1 if you have the `bind_textdomain_codeset' function. */
#define HAVE_BIND_TEXTDOMAIN_CODESET 1

/* Define to 1 if you have the <bzlib.h> header file. */
#define HAVE_BZLIB_H 1

/* Define to 1 if you have the `chdir' function. */
/* #undef HAVE_CHDIR */

/* Define to 1 if you have the `connect' function. */
#define HAVE_CONNECT 1

/* Define to 1 if you have the `dcgettext' function. */
#define HAVE_DCGETTEXT 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you don't have `vprintf' but do have `_doprnt.' */
/* #undef HAVE_DOPRNT */

/* fcntl support */
#define HAVE_FCNTL 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `fdopen' function. */
#define HAVE_FDOPEN 1

/* Define to 1 if you have the `fileno' function. */
#define HAVE_FILENO 1

/* Define to 1 if you have the `flock' function. */
#define HAVE_FLOCK 1

/* Define to 1 if you have the `fork' function. */
#define HAVE_FORK 1

/* Define to 1 if you have the `ftime' function. */
#define HAVE_FTIME 1

/* Define to 1 if you have the `gethostbyname' function. */
#define HAVE_GETHOSTBYNAME 1

/* Define to 1 if you have the `gethostbyname2' function. */
#define HAVE_GETHOSTBYNAME2 1

/* Define to 1 if you have the `gethostname' function. */
#define HAVE_GETHOSTNAME 1

/* Define to 1 if you have the `getline' function. */
#define HAVE_GETLINE 1

/* Define to 1 if you have the `getnameinfo' function. */
#define HAVE_GETNAMEINFO 1

/* Define to 1 if you have the `getpwuid' function. */
#define HAVE_GETPWUID 1

/* Define if the GNU gettext() function is already present or preinstalled. */
#define HAVE_GETTEXT 1

/* Define if the gettimeofday function works and is sane. */
#define HAVE_GETTIMEOFDAY 1

/* Define if you have the iconv() function and it works. */
#define HAVE_ICONV 1

/* Define to 1 if you have the `inet_aton' function. */
#define HAVE_INET_ATON 1

/* Define to 1 if you have the `inet_ntop' function. */
#define HAVE_INET_NTOP 1

/* Define to 1 if you have the `inet_pton' function. */
#define HAVE_INET_PTON 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* ioctl support */
/* #undef HAVE_IOCTL */

/* Define to 1 if you have the `isatty' function. */
#define HAVE_ISATTY 1

/* Define if you have <langinfo.h> and nl_langinfo(CODESET). */
#define HAVE_LANGINFO_CODESET 1

/* Define if your <locale.h> file defines LC_MESSAGES. */
#define HAVE_LC_MESSAGES 1

/* Define to 1 if you have the `bz2' library (-lbz2). */
#define HAVE_LIBBZ2 1

/* Define if you have <libcharset.h> and locale_charset(). */
/* #undef HAVE_LIBCHARSET */

/* Define to 1 if you have the <libintl.h> header file. */
#define HAVE_LIBINTL_H 1

/* Define to 1 if you have the `mysqlclient' library (-lmysqlclient). */
/* #undef HAVE_LIBMYSQLCLIENT */

/* Define to 1 if you have the `nls' library (-lnls). */
/* #undef HAVE_LIBNLS */

/* Define to 1 if you have the `png' library (-lpng). */
/* #undef HAVE_LIBPNG */

/* Define to 1 if you have the `png12' library (-lpng12). */
/* #undef HAVE_LIBPNG12 */

/* Readline support */
#define HAVE_LIBREADLINE 1

/* Define if the X11 lib is available */
/* #undef HAVE_LIBX11 */

/* Define if the Xaw lib is to be used */
/* #undef HAVE_LIBXAW */

/* Define if the Xaw3d lib is to be used */
/* #undef HAVE_LIBXAW3D */

/* Define if the Xext lib is available */
/* #undef HAVE_LIBXEXT */

/* Define if the Xmu lib is available */
/* #undef HAVE_LIBXMU */

/* Define if the Xpm lib is available */
/* #undef HAVE_LIBXPM */

/* Define if the Xt lib is available */
/* #undef HAVE_LIBXT */

/* Define to 1 if you have the `z' library (-lz). */
#define HAVE_LIBZ 1

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `mkdtemp' function. */
/* #undef HAVE_MKDTEMP */

/* Have working mkstemp */
#define HAVE_MKSTEMP 1

/* Define to 1 if you have the <netdb.h> header file. */
#define HAVE_NETDB_H 1

/* Define to 1 if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* Modern readline */
#define HAVE_NEWLIBREADLINE 1

/* Define to 1 if you have the `popen' function. */
#define HAVE_POPEN 1

/* Define to 1 if you have the <pwd.h> header file. */
#define HAVE_PWD_H 1

/* Define to 1 if you have the `select' function. */
#define HAVE_SELECT 1

/* Define to 1 if you have the <signal.h> header file. */
#define HAVE_SIGNAL_H 1

/* sigpipe support */
#define HAVE_SIGPIPE 1

/* Define to 1 if you have the `snooze' function. */
/* #undef HAVE_SNOOZE */

/* Define to 1 if the system has the type `socklen_t'. */
#define HAVE_SOCKLEN_T 1

/* Define to 1 if stdbool.h conforms to C99. */
#define HAVE_STDBOOL_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strcasecmp' function. */
#define HAVE_STRCASECMP 1

/* Define to 1 if you have the `strcasestr' function. */
#define HAVE_STRCASESTR 1

/* Define to 1 if you have the `strcoll' function and it is properly defined.
   */
#define HAVE_STRCOLL 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strlcat' function. */
/* #undef HAVE_STRLCAT */

/* Define to 1 if you have the `strlcpy' function. */
/* #undef HAVE_STRLCPY */

/* Define to 1 if you have the `strncasecmp' function. */
#define HAVE_STRNCASECMP 1

/* Define to 1 if you have the `strstr' function. */
#define HAVE_STRSTR 1

/* Define to 1 if you have the <sys/file.h> header file. */
#define HAVE_SYS_FILE_H 1

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/select.h> header file. */
#define HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/signal.h> header file. */
#define HAVE_SYS_SIGNAL_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/termio.h> header file. */
/* #undef HAVE_SYS_TERMIO_H */

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/uio.h> header file. */
#define HAVE_SYS_UIO_H 1

/* Define to 1 if you have the <sys/utsname.h> header file. */
#define HAVE_SYS_UTSNAME_H 1

/* Define to 1 if you have <sys/wait.h> that is POSIX.1 compatible. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if you have the <termios.h> header file. */
#define HAVE_TERMIOS_H 1

/* Define to 1 if you have the `uname' function. */
#define HAVE_UNAME 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `usleep' function. */
#define HAVE_USLEEP 1

/* Define to 1 if you have the `vfork' function. */
#define HAVE_VFORK 1

/* Define to 1 if you have the <vfork.h> header file. */
/* #undef HAVE_VFORK_H */

/* Define to 1 if you have the `vprintf' function. */
#define HAVE_VPRINTF 1

/* Define to 1 if you have the `vsnprintf' function. */
#define HAVE_VSNPRINTF 1

/* Mingw32-specific setting - winsock */
/* #undef HAVE_WINSOCK */

/* Define to 1 if `fork' works. */
#define HAVE_WORKING_FORK 1

/* Define to 1 if `vfork' works. */
#define HAVE_WORKING_VFORK 1

/* Define if you have a version of the 'vsnprintf' function that honours the
   size argument and has a proper return value. */
#define HAVE_WORKING_VSNPRINTF 1

/* Define to 1 if the system has the type `_Bool'. */
#define HAVE__BOOL 1

/* Define to 1 if you have the `_longjmp' function. */
#define HAVE__LONGJMP 1

/* Define as const if the declaration of iconv() needs const. */
#define ICONV_CONST 

/* IPv6 Support built in */
#define IPV6_SUPPORT 1

/* Is this a beta version */
#define IS_BETA_VERSION 0

/* Is this a devel version */
#define IS_DEVEL_VERSION 1

/* Locale directory (windows) */
/* #undef LOCALEDIR */

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Major version */
#define MAJOR_VERSION 2

/* Meta server URL */
#define META_URL "http://meta.freeciv.org/metaserver.phtml"

/* Minor version */
#define MINOR_VERSION 2

/* Narrowproto */
/* #undef NARROWPROTO */

/* No debugging support at all */
/* #undef NDEBUG */

/* Network capability string */
#define NETWORK_CAPSTRING_MANDATORY "+Freeciv.Devel.2009.Oct.18"

/* Additional optional network capabilities */
#define NETWORK_CAPSTRING_OPTIONAL ""

/* Version number of next release */
#define NEXT_STABLE_VERSION "2.3.0"

/* nonblocking sockets support */
#define NONBLOCKING_SOCKETS 1

/* Name of package */
#define PACKAGE "freeciv"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME ""

/* Path where the source is located */
/* #undef PACKAGE_SOURCE_DIR */

/* Define to the full name and version of this package. */
#define PACKAGE_STRING ""

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME ""

/* Define to the version of this package. */
#define PACKAGE_VERSION ""

/* Patch version */
#define PATCH_VERSION 99

/* Month next version will be released */
#define RELEASE_MONTH 3

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* SDL is used */
/* #undef SDL */

/* Mingw32-specific setting - stdin */
/* #undef SOCKET_ZERO_ISNT_STDIN */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Get svn revision information to version number */
/* #undef SVNREV */

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

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
#define VERSION "2.2.99-dev"

/* Version label */
#define VERSION_LABEL "-dev"

/* Version string */
#define VERSION_STRING "2.2.99-dev"

/* Informational URL */
#define WIKI_URL "http://www.freeciv.org/"

/* Mingw32-specific setting - native */
/* #undef WIN32_NATIVE */

/* XPM support */
/* #undef XPM_H_NO_X11 */

/* Define to 1 if the X Window System is missing or not being used. */
/* #undef X_DISPLAY_MISSING */

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define as `fork' if `vfork' does not work. */
/* #undef vfork */

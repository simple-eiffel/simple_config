case $CONFIG in
'')
	if test ! -f ../config.sh; then
		(echo "Can't find ../config.sh."; exit 1)
	fi 2>/dev/null
	. ../config.sh
	;;
esac
case "$O" in
*/*) cd `expr X$0 : 'X\(.*\)/'` ;;
esac
echo "Compiling C code in C24"
$spitshell >Makefile <<!GROK!THIS!
INCLUDE_PATH =  -I"\$(ISE_LIBRARY)\library\time\spec\include" -I"\$(ISE_LIBRARY)/library/runtime/logging/Clib" -I"\$(ISE_LIBRARY)\library\process\base\platform\windows\include" -I"\$(ISE_LIBRARY)\library\wel\spec\windows\include"
SHELL = /bin/sh
CC = $cc
CPP = $cpp
CFLAGS = $wkoptimize $mtccflags $large -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
CPPFLAGS = $wkoptimize $mtcppflags $large -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
LDFLAGS = $ldflags
CCLDFLAGS = $ccldflags  $console_flags
LDSHAREDFLAGS =  $mtldsharedflags
EIFLIB = "$rt_lib/$prefix$mt_prefix$wkeiflib$suffix"
EIFTEMPLATES = $rt_templates
LIBS = $mtlibs
MAKE = $make
AR = $ar
LD = $ld
MKDEP = $mkdep \$(DPFLAGS) --
MV = $mv
CP = $cp
RANLIB = $ranlib
RM = $rm -f
FILE_EXIST = $file_exist
RMDIR = $rmdir
X2C = "$x2c"
SHAREDLINK = $sharedlink
SHAREDLIBS = $sharedlibs
SHARED_SUFFIX = $shared_suffix
COMMAND_MAKEFILE = 
START_TEST = $start_test 
END_TEST = $end_test 
CREATE_TEST = $create_test 
SYSTEM_IN_DYNAMIC_LIB = simple_config$shared_suffix 
!GROK!THIS!
$spitshell >>Makefile <<'!NO!SUBS!'

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C24_c.obj 

OLDOBJECTS =  sp777.o sp777d.o ar785.o ar785d.o ar766.o ar766d.o na784.o na784d.o \
	sp776.o sp776d.o re778.o re778d.o ar759.o ar759d.o it782.o it782d.o \
	it783.o it783d.o li787.o li787d.o re761.o re761d.o in764.o in764d.o \
	to763.o to763d.o dy773.o dy773d.o li774.o li774d.o ar775.o ar775d.o \
	se768.o se768d.o dy767.o dy767d.o ge760.o ge760d.o re779.o re779d.o \
	in781.o in781d.o cu789.o cu789d.o tr788.o tr788d.o bo762.o bo762d.o \
	ta765.o ta765d.o un771.o un771d.o ch772.o ch772d.o ac790.o ac790d.o \
	bi769.o bi769d.o dy770.o dy770d.o ty780.o ty780d.o co786.o co786d.o \
	ba791.o ba791d.o 

all: Cobj24.o

Cobj24.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj24.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

!NO!SUBS!
chmod 644 Makefile
$eunicefix Makefile


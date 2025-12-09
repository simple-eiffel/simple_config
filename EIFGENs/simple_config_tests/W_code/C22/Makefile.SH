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
echo "Compiling C code in C22"
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

OBJECTS = big_file_C22_c.obj 

OLDOBJECTS =  sp710.o sp710d.o ar707.o ar707d.o na708.o na708d.o sp711.o sp711d.o \
	re703.o re703d.o ar709.o ar709d.o it696.o it696d.o it693.o it693d.o \
	li694.o li694d.o re713.o re713d.o in716.o in716d.o to715.o to715d.o \
	dy724.o dy724d.o li725.o li725d.o se719.o se719d.o dy718.o dy718d.o \
	fi701.o fi701d.o ge712.o ge712d.o re704.o re704d.o in706.o in706d.o \
	cu697.o cu697d.o tr695.o tr695d.o bo714.o bo714d.o ta717.o ta717d.o \
	un722.o un722d.o ch723.o ch723d.o ac698.o ac698d.o bi720.o bi720d.o \
	dy721.o dy721d.o bo702.o bo702d.o ty705.o ty705d.o ba699.o ba699d.o \
	co700.o co700d.o 

all: Cobj22.o

Cobj22.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj22.o $(OBJECTS)
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


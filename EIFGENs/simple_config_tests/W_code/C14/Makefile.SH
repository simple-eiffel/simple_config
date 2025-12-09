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
echo "Compiling C code in C14"
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

OBJECTS = big_file_C14_c.obj 

OLDOBJECTS =  sp444.o sp444d.o ar441.o ar441d.o ar452.o ar452d.o na442.o na442d.o \
	sp445.o sp445d.o ar443.o ar443d.o it429.o it429d.o li431.o li431d.o \
	re447.o re447d.o in450.o in450d.o to449.o to449d.o dy458.o dy458d.o \
	li459.o li459d.o ar460.o ar460d.o se454.o se454d.o dy453.o dy453d.o \
	fi437.o fi437d.o ge446.o ge446d.o cu433.o cu433d.o tr432.o tr432d.o \
	bo448.o bo448d.o ta451.o ta451d.o ha440.o ha440d.o un439.o un439d.o \
	ta461.o ta461d.o ch457.o ch457d.o ac434.o ac434d.o bi455.o bi455d.o \
	dy456.o dy456d.o bo438.o bo438d.o co430.o co430d.o ba435.o ba435d.o \
	co436.o co436d.o 

all: Cobj14.o

Cobj14.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj14.o $(OBJECTS)
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


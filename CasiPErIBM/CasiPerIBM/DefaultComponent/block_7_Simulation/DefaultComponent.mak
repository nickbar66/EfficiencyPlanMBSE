
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug=-g
CPPCompileRelease=-O
LinkDebug=-g
LinkRelease=-O

CleanupFlagForSimulink=
SIMULINK_CONFIG=False
ifeq ($(SIMULINK_CONFIG),True)
CleanupFlagForSimulink=-DOM_WITH_CLEANUP
endif

ConfigurationCPPCompileSwitches=   $(INCLUDE_QUALIFIER). $(INCLUDE_QUALIFIER)$(OMROOT) $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/oxf $(DEFINE_QUALIFIER)CYGWIN $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES) -Wno-write-strings $(CPPCompileDebug) -c  $(CleanupFlagForSimulink)
ConfigurationCCCompileSwitches=$(INCLUDE_PATH) -c 

#########################################
###### Predefined macros ################
RM=/bin/rm -rf
INCLUDE_QUALIFIER=-I
DEFINE_QUALIFIER=-D
CC=g++
LIB_CMD=ar
LINK_CMD=g++
LIB_FLAGS=rvu
LINK_FLAGS= $(LinkDebug)   

#########################################
####### Context macros ##################

FLAGSFILE=
RULESFILE=
OMROOT="C:/Program Files/IBM/Rhapsody/9.0.1/Share"
RHPROOT="C:/Program Files/IBM/Rhapsody/9.0.1"
FRAMEWORK_LIB_ROOT="C:/ProgramData/IBM/Rhapsody/9.0.1x64/UserShare"

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.o
EXE_EXT=.exe
LIB_EXT=.a

INSTRUMENTATION=Animation

TIME_MODEL=RealTime

TARGET_TYPE=Executable

TARGET_NAME=DefaultComponent

all : $(TARGET_NAME)$(EXE_EXT) DefaultComponent.mak

TARGET_MAIN=MainDefaultComponent

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/Cygwin

ADDITIONAL_OBJS=

OBJS= \
  block_7.o \
  Default.o




#########################################
####### Predefined macros ###############
$(OBJS) : $(INST_LIBS) $(OXF_LIBS)

ifeq ($(INSTRUMENTATION),Animation)

INST_FLAGS=$(DEFINE_QUALIFIER)OMANIMATOR $(DEFINE_QUALIFIER)__USE_W32_SOCKETS 
INST_INCLUDES=$(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/aom $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/tom
INST_LIBS=$(FRAMEWORK_LIB_ROOT)/LangCpp/lib/cygwinaomanimx64$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)/LangCpp/lib/cygwinoxsiminstx64$(LIB_EXT)
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)/LangCpp/lib/cygwinoxfinstx64$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)/LangCpp/lib/cygwinomcomapplx64$(LIB_EXT)
SOCK_LIB=-lws2_32

else
ifeq ($(INSTRUMENTATION),Tracing)

INST_FLAGS=$(DEFINE_QUALIFIER)OMTRACER 
INST_INCLUDES=$(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/aom $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/tom
INST_LIBS=$(FRAMEWORK_LIB_ROOT)/LangCpp/lib/cygwintomtracex64$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)/LangCpp/lib/cygwinaomtracex64$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)/LangCpp/lib/cygwinoxsiminstx64$(LIB_EXT)
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)/LangCpp/lib/cygwinoxfinstx64$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)/LangCpp/lib/cygwinomcomapplx64$(LIB_EXT)
SOCK_LIB=-lws2_32

else
ifeq ($(INSTRUMENTATION),None)

INST_FLAGS= 
INST_INCLUDES=
INST_LIBS=$(FRAMEWORK_LIB_ROOT)/LangCpp/lib/cygwinoxsimx64$(LIB_EXT)
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)/LangCpp/lib/cygwinoxfx64$(LIB_EXT)
SOCK_LIB=-lws2_32

else
	@echo An invalid Instrumentation $(INSTRUMENTATION) is specified.
	exit
endif
endif
endif

.SUFFIXES: $(CPP_EXT)

#####################################################################
##################### Context dependencies and commands #############






block_7.o : block_7.cpp block_7.h    Default.h 
	@echo Compiling block_7.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o block_7.o block_7.cpp




Default.o : Default.cpp Default.h    block_7.h 
	@echo Compiling Default.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Default.o Default.cpp







$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS)
	@echo Compiling $(TARGET_MAIN)$(CPP_EXT)
	@$(CC) $(ConfigurationCPPCompileSwitches) -o  $(TARGET_MAIN)$(OBJ_EXT) $(TARGET_MAIN)$(CPP_EXT)

####################################################################
############## Predefined Instructions #############################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) DefaultComponent.mak
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	@$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(OXF_LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(INST_LIBS) \
	$(SOCK_LIB) \
	$(LINK_FLAGS) -o $(TARGET_NAME)$(EXE_EXT)

$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) DefaultComponent.mak
	@echo Building library $@
	@$(LIB_CMD) $(LIB_FLAGS) $(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS)



clean:
	@echo Cleanup
	$(RM) block_7.o
	$(RM) Default.o
	$(RM) $(TARGET_MAIN)$(OBJ_EXT) $(ADDITIONAL_OBJS)
	$(RM) $(TARGET_NAME)$(LIB_EXT)
	$(RM) $(TARGET_NAME)$(EXE_EXT)


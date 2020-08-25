##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=DeepCopy
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/user/Desktop/College/Cpp_codes/cpp_class/cpp_class
ProjectPath            :=C:/Users/user/Desktop/College/Cpp_codes/cpp_class/DeepCopy
IntermediateDirectory  :=../cpp_class/build-$(ConfigurationName)/__/DeepCopy
OutDir                 :=../cpp_class/build-$(ConfigurationName)/__/DeepCopy
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=user
Date                   :=25/08/2020
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/MinGW/bin/g++.exe
SharedObjectLinkerName :=C:/MinGW/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=..\cpp_class\build-$(ConfigurationName)\bin\$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/MinGW/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/MinGW/bin/ar.exe rcu
CXX      := C:/MinGW/bin/g++.exe
CC       := C:/MinGW/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=../cpp_class/build-$(ConfigurationName)/__/DeepCopy/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../cpp_class/build-$(ConfigurationName)/__/DeepCopy/.d $(Objects) 
	@if not exist "..\cpp_class\build-$(ConfigurationName)\__\DeepCopy" mkdir "..\cpp_class\build-$(ConfigurationName)\__\DeepCopy"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\cpp_class\build-$(ConfigurationName)\__\DeepCopy" mkdir "..\cpp_class\build-$(ConfigurationName)\__\DeepCopy"
	@if not exist ""..\cpp_class\build-$(ConfigurationName)\bin"" mkdir ""..\cpp_class\build-$(ConfigurationName)\bin""

../cpp_class/build-$(ConfigurationName)/__/DeepCopy/.d:
	@if not exist "..\cpp_class\build-$(ConfigurationName)\__\DeepCopy" mkdir "..\cpp_class\build-$(ConfigurationName)\__\DeepCopy"

PreBuild:


##
## Objects
##
../cpp_class/build-$(ConfigurationName)/__/DeepCopy/main.cpp$(ObjectSuffix): main.cpp ../cpp_class/build-$(ConfigurationName)/__/DeepCopy/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/user/Desktop/College/Cpp_codes/cpp_class/DeepCopy/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../cpp_class/build-$(ConfigurationName)/__/DeepCopy/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../cpp_class/build-$(ConfigurationName)/__/DeepCopy/main.cpp$(ObjectSuffix) -MF../cpp_class/build-$(ConfigurationName)/__/DeepCopy/main.cpp$(DependSuffix) -MM main.cpp

../cpp_class/build-$(ConfigurationName)/__/DeepCopy/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../cpp_class/build-$(ConfigurationName)/__/DeepCopy/main.cpp$(PreprocessSuffix) main.cpp


-include ../cpp_class/build-$(ConfigurationName)/__/DeepCopy//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)



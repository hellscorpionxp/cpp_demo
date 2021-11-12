JDK_HOME=/cygdrive/d/workspace/openjdk-jdk11u/build/windows-x86_64-normal-server-release/images/jdk
SRC=.
#INCLUDES=-I$(SRC) -I$(JDK_HOME)/include -I$(JDK_HOME)/include/linux
INCLUDES=-I$(JDK_HOME)/include -I$(JDK_HOME)/include/win32

all: header share class

header:
	javac -h . com/tony/J2C.java
#header:
#	javah com.tony.J2C

share:
#	g++ $(INCLUDES) -fPIC -c -g -Wall test8.c
#	g++ -shared -o libtest8.so test8.o
	"/cygdrive/c/Program Files (x86)/Microsoft Visual Studio/2017/Professional/VC/Tools/MSVC/14.16.27023/bin/Hostx64/x64/cl.exe" /I"C:\Program Files (x86)\Microsoft Visual Studio\2017\Professional\VC\Tools\MSVC\14.16.27023\include" /I"D:\workspace\openjdk-jdk11u\build\windows-x86_64-normal-server-release\images\jdk\include" /I"D:\workspace\openjdk-jdk11u\build\windows-x86_64-normal-server-release\images\jdk\include\win32" /LD test8.c

class:
	javac com/tony/J2C.java

clean:
	rm -f *.o *.so *.class

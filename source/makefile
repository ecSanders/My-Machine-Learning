##############################################################
# The main rule
##############################################################
a.out: Series.o DataFrame.o
	g++ -o a.out Series.o DataFrame.o
	tar -cf dataframe.tar *.h *.cpp makefile

##############################################################
# The individual components
##############################################################
Series.o: Series.h Series.cpp main.cpp
	g++ -c Series.cpp

DataFrame.o: DataFrame.h DataFrame.cpp main.cpp
	g++ -c DataFrame.cpp
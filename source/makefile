##############################################################
# The main rule
##############################################################
a.out: Series.h DataFrame.h DecisionTree.h main.o
	g++ -o a.out main.o

##############################################################
# The individual components
##############################################################
main.o: main.cpp Series.h DataFrame.h DecisionTree.h
	g++ -c main.cpp
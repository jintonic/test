all: shared
#mean.o: mean.cc mean.hh
#	g++ -c $<
#libmean.a: mean.o
#	ar rcs $@ $^
#static: libmean.a
#	g++ -static C++main.cc -L. -lmean -o test_static # C++main.cc must be put before -lmean
#

# implicit rule:
#mean.o: mean.hh   

libmean.so: mean.o
	g++ -shared $^ -o $@

shared: libmean.so
	$(CXX) C++main.cc -L. -lmean -o test_shared

.PHONY: all clean shared echo

clean:
	-rm -f *.o *.a *.so

echo:
	@echo $(MAKEFILE_LIST)
	@echo $(CC)

size: size.C
	g++ size.C -o size

OPCIONS = -D_GLIBCXX_DEBUG -O2 -Wall -Wextra -Werror -Wno-sign-compare -std=c++11

G++ = g++-10
#
output.exe: Cliente.o test.o
	$(G++) -o test.exe Cliente.o test.o
#
Cliente.o:
	$(G++) -c Cliente.cc
#
test.o:
	$(G++) -c test.cc
#
clean:
	rm -f *.o
	rm -f *.exe
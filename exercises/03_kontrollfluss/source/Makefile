src=$(wildcard *.cc)
targets=$(basename ${src})
all: ${targets}

%: %.cc
	clang++ --std=c++23 -stdlib=libc++ -o $@ $<
	# g++ --std=c++23 -o $@ $<
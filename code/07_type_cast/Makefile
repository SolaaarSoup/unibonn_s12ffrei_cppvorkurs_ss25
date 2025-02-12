src=$(wildcard *.cc)
targets=$(basename ${src})
all: ${targets}

%: %.cc
	g++ --std=c++23 -o $@ $<

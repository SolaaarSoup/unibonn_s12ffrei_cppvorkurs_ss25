all: html

html:
	quarto render ??_*.qmd --to html --output-dir=../public/html/exercises/

src=$(wildcard *.cc)
targets=$(basename ${src})
all: ${targets}

%: %.cc
	clang++ --std=c++23 -stdlib=libc++ -o $@ $<
	# g++ --std=c++23 -o $@ $<
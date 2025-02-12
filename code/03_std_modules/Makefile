hello23: hello23.cc std.pcm
	clang++ --std=c++23 -stdlib=libc++ -fmodule-file=std=std.pcm -o hello23 std.pcm hello23.cc

hello11: hello11.cc
	clang++ --std=c++11 -o hello11 hello11.cc

std.pcm: /usr/share/libc++/v1/std.cppm
	clang++ -std=c++23 -stdlib=libc++ --precompile -Wno-reserved-module-identifier -o std.pcm /usr/share/libc++/v1/std.cppm



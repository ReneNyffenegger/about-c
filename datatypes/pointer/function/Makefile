all: declare-assign-execute pass-to-func return

declare-assign-execute:   declare-assign-execute.o funcs.o
	gcc $^ -o $@

pass-to-func:             pass-to-func.o           funcs.o
	gcc $^ -o $@

return:                   return.o                 funcs.o
	gcc $^ -o $@

declare-assign-execute.o: declare-assign-execute.c funcs.h
	gcc -c $< -o $@

pass-to-func.o:           pass-to-func.c           funcs.h
	gcc -c $< -o $@

return.o:                 return.c                 funcs.h
	gcc -c $< -o $@

funcs.o: funcs.c funcs.h
	gcc -std=c99 -c $< -o $@

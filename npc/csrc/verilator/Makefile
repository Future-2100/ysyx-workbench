
#npc-main : monitor.c npc-main.c engine.c
npc-main : *.c *.cpp
	gcc -o $@ $^ -lreadline

run : npc-main
	./$^

clean : 
	rm npc-main

.PHONY : run



npc-main : monitor.c npc-main.c engine.c
	gcc -o $@ $^ -lreadline

run : npc-main
	./$^

clean : 
	rm npc-main

.PHONY : run


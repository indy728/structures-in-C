#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "heroes.h"

void	battle(t_hero *champion, t_hero *challenger);

int		main()
{
	t_hero	*ogre;
	t_hero	*gnome;
	t_hero	*elf;
	t_hero	*dragon;
	t_hero	*red_knight;
	t_hero	*silver_knight;
	t_hero	*p1;
	t_hero	*p2;
	int		tmp1;
	int		tmp2;
	int i = 0;

	ogre = (t_hero *)malloc(sizeof(t_hero));
	ogre->name = strdup("\x1b[32m\033[1mShrek the Ogre\x1b[0m");
	ogre->hp = 50;
	ogre->attack = 14;
	ogre->speed = 2;
	ogre->alive = 1;
	
	gnome = (t_hero *)malloc(sizeof(t_hero));
	gnome->name = strdup("\x1b[35m\033[1mJerry the Gnome\x1b[0m");
	gnome->hp = 30;
	gnome->attack = 6;
	gnome->speed = 3;
	gnome->alive = 1;
	
	elf = (t_hero *)malloc(sizeof(t_hero));
	elf->name = strdup("\x1b[36m\033[1mIlia the Elf\x1b[0m");
	elf->hp = 43;
	elf->attack = 20;
	elf->speed = 6;
	elf->alive = 1;
	
	dragon = (t_hero *)malloc(sizeof(t_hero));
	dragon->name = strdup("\x1b[41m\x1b[30m\033[1mZavyx the Dragon\x1b[0m");
	dragon->hp = 100;
	dragon->attack = 24;
	dragon->speed = 1;
	dragon->alive = 1;
	
	red_knight = (t_hero *)malloc(sizeof(t_hero));
	red_knight->name = strdup("\x1b[31m\033[1mThe Red Knight\x1b[0m");
	red_knight->hp = 60;
	red_knight->attack = 33;
	red_knight->speed = 4;
	red_knight->alive = 1;
	
	silver_knight = (t_hero *)malloc(sizeof(t_hero));
	silver_knight->name = strdup("\x1b[47m\x1b[30m\033[1mThe Silver Knight\x1b[0m");
	silver_knight->hp = 75;
	silver_knight->attack = 25;
	silver_knight->speed = 5;
	silver_knight->alive = 1;

	p1 = ogre;
	tmp1 = ogre->hp;
	p2 = gnome;
	tmp2 = gnome->hp;
	printf("Challenge %d: %s takes on reigning %s!\n", ++i, p2->name, p1->name);
	while (p1->alive && p2->alive)
	{
		printf("Health %s: %d\nHealth %s: %d\n", p1->name, p1->hp, p2->name, p2->hp);
		battle(p1, p2);
		sleep(2);;
	}
	if (p1->alive)
	{
		printf("%s has been vanquished by %s!\n", p2->name, p1->name);
		p1->hp = tmp1;
	}
	else
	{
		printf("%s has been vanquished by %s!\n", p1->name, p2->name);
		p1 = p2;
		p1->hp = tmp2;
	}
	sleep(3);
	tmp1 = p1->hp;
	p2 = elf;
	tmp2 = elf->hp;
	printf("Challenge %d: %s takes on reigning %s!\n", ++i, p2->name, p1->name);
	while (p1->alive && p2->alive)
	{
		printf("Health %s: %d\nHealth %s: %d\n", p1->name, p1->hp, p2->name, p2->hp);
		battle(p1, p2);
		sleep(2);;
	}
	if (p1->alive)
	{
		printf("%s has been vanquished by %s!\n", p2->name, p1->name);
		p1->hp = tmp1;
	}
	else
	{
		printf("%s has been vanquished by %s!\n", p1->name, p2->name);
		p1 = p2;
		p1->hp = tmp2;
	}
	sleep(3);
	tmp1 = p1->hp;
	p2 = dragon;
	tmp2 = dragon->hp;
	printf("Challenge %d: %s takes on reigning %s!\n", ++i, p2->name, p1->name);
	while (p1->alive && p2->alive)
	{
		printf("Health %s: %d\nHealth %s: %d\n", p1->name, p1->hp, p2->name, p2->hp);
		battle(p1, p2);
		sleep(2);;
	}
	if (p1->alive)
	{
		printf("%s has been vanquished by %s!\n", p2->name, p1->name);
		p1->hp = tmp1;
	}
	else
	{
		printf("%s has been vanquished by %s!\n", p1->name, p2->name);
		p1 = p2;
		p1->hp = tmp2;
	}
	sleep(3);
	tmp1 = p1->hp;
	p2 = red_knight;
	tmp2 = red_knight->hp;
	printf("Challenge %d: %s takes on reigning %s!\n", ++i, p2->name, p1->name);
	while (p1->alive && p2->alive)
	{
		printf("Health %s: %d\nHealth %s: %d\n", p1->name, p1->hp, p2->name, p2->hp);
		battle(p1, p2);
		sleep(2);;
	}
	if (p1->alive)
	{
		printf("%s has been vanquished by %s!\n", p2->name, p1->name);
		p1->hp = tmp1;
	}
	else
	{
		printf("%s has been vanquished by %s!\n", p1->name, p2->name);
		p1 = p2;
		p1->hp = tmp2;
	}
	sleep(3);
	tmp1 = p1->hp;
	p2 = silver_knight;
	tmp2 = silver_knight->hp;
	printf("Challenge %d: %s takes on reigning %s!\n", ++i, p2->name, p1->name);
	while (p1->alive && p2->alive)
	{
		printf("Health %s: %d\nHealth %s: %d\n", p1->name, p1->hp, p2->name, p2->hp);
		battle(p1, p2);
		sleep(2);;
	}
	if (p1->alive)
	{
		printf("%s has been vanquished by %s!\n", p2->name, p1->name);
		p1->hp = tmp1;
	}
	else
	{
		printf("%s has been vanquished by %s!\n", p1->name, p2->name);
		p1 = p2;
		p1->hp = tmp2;
	}
	if (!strcmp(p1->name, silver_knight->name))
		printf("\x1b[32m\033[1mSUCCESS! Proceed to 01_LINKED_LISTS!!\x1b[0m\n");
	else
		printf("\x1b[31m\033[1mFAILURE :( Please review your code and try again.\x1b[0m\n");
	return (0);
}

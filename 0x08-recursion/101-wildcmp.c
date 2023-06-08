#include "main.h"
#define ON 1
#define OFF 0
/**
  *wildcmp - function to check whether a string with wild card is similar
  *@s1: string
  *@s2: string
  *
  *Return: 0 or 1
  */
int wildcmp(char *s1, char *s2)
{
	int wild = OFF;
	int lens1, lens2;

	wild = check_wild(s2);
	if (wild == 0)
	{
		lens1 = _strlen(s1);
		lens2 = _strlen(s2);
		if (!(lens1 == lens2))
			return (0);
		return (simple_comp(s1, s2));
	}
	return (wild_comp(s1, s2));
}
/**
  *wild_comp - check whether s1 and s2 are the same
  *@s1: first string
  *@s2: second string
  *
  *Return: 0 or 1
  */
int wild_comp(char *s1, char *s2)
{
	char *temp = s2;

	if (!(*s1) && !(*s2))
		return (1);
	if (*s1 == *s2)
		return (1 && wild_comp(++s1, ++s2));
	if (*s2 == '*')
	{
		if (*(++temp) == '*')
			return (1 && wild_comp(s1, ++s2));
		else if (*(++temp) == *s1)
			return (1 && wild_comp(++s1, ++s2));
		else
			return (1 && wild_comp(++s1, s2));
	}
	return (0);
}
/**
  *check_wild - checks whether there is a wild card
  *@b: second string
  *
  *Return: 0 or 1
  */
int check_wild(char *b)
{
	if (!(*b))
		return (0);
	if (*b == '*')
		return (1);
	return (0 || check_wild(++b));
}
/**
  *simple_comp - checks whether two strings are similar
  *@a: the first string
  *@b: the second string
  *
  *Return: 0
  */
int simple_comp(char *a, char *b)
{
	if (!(*a) && !(*b))
		return (1);
	if (*a == *b)
		return (1 && simple_comp(++a, ++b));
	return (0);
}
/**
  *_strlen - checks the length of a string
  *@s: the string
  *
  *Return: 0
  */
int _strlen(char *s)
{
	if (!(*s))
		return (0);
	return (1 + _strlen(++s));
}

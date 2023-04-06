#include "main.h"
#define ON 1
#define OFF 0
/**
  *wildcmp - checks whether two strings are identical
  *@s1: one of the strings
  *@s2: the other string
  *Description: supports special character * which can replace any string
  *or empty string.
  *Return: 1 if considered identical or 0 otherwise
  */
int wildcmp(char *s1, char *s2)
{
	int wild = OFF;
	int idtcal = 1;

	idtcal = child_cmp(s1, s2, &wild, &idtcal);
	return (idtcal);
}
/**
  *child_cmp - checks whether the string is identical
  *@s1: one of the strings
  *@s2: the second string
  *@wild: checks whether wild card is active
  *@idtcal: flag that keeps track of status of the comparison.
  *Description: tests whether two strings are identical.
  *Return: 1 if considered identical or 0 otherwise.
  */
int child_cmp(char *s1, char *s2, int *wild, int *idtcal)
{
	int cmp;

	if (*s1 == '\0' || *s2 == '\0')
		;
	else if (*s1 == *s2)
	{
		*wild = OFF;
		cmp = 1;
		*idtcal = cmp && child_cmp(s1 + 1, s2 + 1, wild, idtcal);
	}
	else if (*s2 == '*')
	{
		*wild = ON;
		cmp = 1;
		*idtcal = cmp && child_cmp(s1 + 1, s2 + 1, wild, idtcal);
	}
	else if (*s1 != *s2 && *wild == ON)
	{
		cmp = 1;
		*idtcal = cmp && child_cmp(s1 + 1, s2 - 1, wild, idtcal);
	}
	else
		cmp = 0;
	return (cmp);
}

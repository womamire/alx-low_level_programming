/*
 * AUTH: @WOMAMIRE
 */

#INCLUDE "MAIN.H"
#INCLUDE <STDIO.H>
#INCLUDE <STDLIB.H>

/**
 * STR_CONCAT - CONCATENATES TWO STRINGS
 * @S1: STRING1
 * @S2: STRING2
 *
 * RETURN: POINTER
 */

CHAR *STR_CONCAT(CHAR *S1, CHAR *S2)
{
	INT X1, X2, I, J;
	CHAR *S;
	CHAR *NUL = "";

	IF (s1 == NULL)
		s1 = NUL;
	IF (s2 == NULL)
		s2 = nul;

	x1 = 0, x2 = 0;
	while (*(s1 + l1))
		x1++;
	while (*(s2 + x2))
		x2++;

	s = malloc(sizeof(char) * (x1 + x2 + 1));

	if (s == 0)
		return (0);

	for (i = 0; i < x1; i++)
		*(s + i) = *(s1 + i);

	for (i = 0, j = x1; i <= x2; j++, i++)
		*(s + j) = *(s2 + i);

	return (s);
}

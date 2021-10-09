#include "main.h"
#include "holberton.h"

/**
 *cap_string - capitalize all words of a string.
 *@a: pointer
 * Return: Always 0.
 */
char *cap_string(char *a)
{
  int x;

  for (x = 0 ; a[x] != '\0' ; x++)
    {
      if (x == 0)
	{
	  if (a[x] >= 'a' && a[x] <= 'z')
	    {
	      a[x] = a[x] - 32;
	    }
	}
      if (a[x] == ' ')
	{
	  ++x;
	  if (a[x] >= 'a' && a[x] <= 'z')
	    {
	      a[x] = a[x] - 32;
	    }
	}
      else if (a[x] == '\t')
	{
	  ++x;
	  if (a[x] >= 'a' && a[x] <= 'z')
	    {
	      a[x] = a[x] - 32;
	    }
	}
      else if (a[x] == '\n')
	{
	  ++x;
	  if (a[x] >= 'a' && a[x] <= 'z')
	    {
	      a[x] = a[x] - 32;
	    }
	}
      if (a[x] == ',')
	{
	  ++x;
	  if (a[x] >= 'a' && a[x] <= 'z')
	    {
	      a[x] = a[x] - 32;
	    }
	}
      if (a[x] == ';')
	{
	  ++x;
	  if (a[x] >= 'a' && a[x] <= 'z')
	    {
	      a[x] = a[x] - 32;
	    }
	}
      if (a[x] == '.')
	{
	  ++x;
	  if (a[x] >= 'a' && a[x] <= 'z')
	    {
	      a[x] = a[x] - 32;
	    }
	}
      if (a[x] == '!')
	{
	  ++x;
	  if (a[x] >= 'a' && a[x] <= 'z')
	    {
	      a[x] = a[x] - 32;
	    }
	}
      if (a[x] == '?')
	{
	  ++x;
	  if (a[x] >= 'a' && a[x] <= 'z')
	    {
	      a[x] = a[x] - 32;
	    }
	}
      if (a[x] == '\"')
	{
	  ++x;
	  if (a[x] >= 'a' && a[x] <= 'z')
	    {
	      a[x] = a[x] - 32;
	    }
	}
	if (a[x] == '(')
	  {
	    ++x;
	    if (a[x] >= 'a' && a[x] <= 'z')
	      {
		a[x] = a[x] - 32;
	      }
	  }
	  if (a[x] == ')')
	    {
	      ++x;
	      if (a[x] >= 'a' && a[x] <= 'z')
		{
		  a[x] = a[x] - 32;
		}
	    }
	    if (a[x] == '{')
	      {
		++x;
		if (a[x] >= 'a' && a[x] <= 'z')
		  {
		    a[x] = a[x] - 32;
		  }
	      }
	      if (a[x] == '}')
		{
		  ++x;
		  if (a[x] >= 'a' && a[x] <= 'z')
		    {
		      a[x] = a[x] - 32;
		    }
		}
		}
	      return (a);
	      }


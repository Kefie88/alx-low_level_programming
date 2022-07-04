#include "dog.h"
/**
 * init_dog - initialize a dog structure
 * @d: a dog structure
 * @name: name of dog
 * @age: age of dog
 * @owner: the owner of the dog
 * Return: nothing (void)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != '\0')
	{
		(*d). name = name;
		(*d). age = age;
		(*d). owner = owner;
	}
}

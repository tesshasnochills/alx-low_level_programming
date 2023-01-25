#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @x: pointer to a string
 * Return: lenth of the string
 */
int _strlen(char *x)
{
	int i;
	int len;

	len = 0;
	for (i = 0; *(x + i) != '\0'; i++)
		len++;
	return (len);
}

/**
 * _strcpy - copies a string prointed to by src
 *
 * @src: string
 * @dest: buffer
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);
	*(dest + i) = '\0';

	return (dest);
}


/**
* new_dog - creates a new dog
* @name:name of the dog, string
* @age: age of the dog, float
* @owner: owner of the dog, string
*
* Return: dot_t *, new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL || name == NULL || owner == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (dog->name == NULL)
		free(dog);

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
	}
	dog->name = _strcpy(dog->name, name);
	dog->owner = _strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);

}

#ifndef DOG_H
#define DOG_H

/**
 * struct dog - describes a dog
 * @name: Name of the dog, string
 * @age: Age of the dog, float
 * @owner: Owener of the dog, string
 */
typedef struct dog
{
		char *name;
		float age;
		char *owner;
		
} dog_t;

void print_dog(struct dog *d);

#endif /* DOG_H */

#ifndef main_h
#define main_h
/**
 * struct dog - structure for dog variables
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
void int_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

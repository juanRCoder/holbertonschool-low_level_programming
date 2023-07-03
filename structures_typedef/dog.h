#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Estructura de un perro.
 *
 * @name: Puntero al nombre del perro.
 * @age: Edad del perro.
 * @owner: Puntero al nombre del dueño.
 *
 * Description: Esta estructura representa un perro con su nombre,
 * edad y el nombre del dueño.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif

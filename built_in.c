#include "shell.h"

/**
 * env_cmd - Prints all the environmental variables in the current shell.
 * @line: A string representing the input from the user.
 */
void env_cmd(__attribute__((unused))char *line)
{
	int i;
	int j;

	for (i = 0; environ[i] != NULL; i++)
	{
		for (j = 0; environ[i][j] != '\0'; j++)
			write(STDOUT_FILENO, &environ[i][j], 1);
		write(STDOUT_FILENO, "\n", 1);
	}
}

/**
 * exit_cmd - Exits the shell. After freeing allocated resources.
 * @input: A string representing the input from the user.
 */
void exit_cmd(char *input)
{
	free(input);
	/*print_str("\n", 1);*/
	exit(0);
}

/**
 * check_built_ins - Finds the right function needed for execution.
 * @str: The name of the function that is needed.
 * Return: Upon sucess a pointer to a void function. Otherwise NULL.
 */
void (*check_built_ins(char *str))(char *str)
{
	int i;

	builtin_t buildin[] = {
		{"exit", exit_cmd},
		{"env", env_cmd},
		{NULL, NULL}
	};

	for (i = 0; buildin[i].built != NULL; i++)
	{
		if (_strcmp(str, buildin[i].built) == 0)
		{
			return (buildin[i].f);
		}
	}
	return (NULL);
}

/**
 * builtin - Checks for builtin functions.
 * @command: An array of all the arguments passed to the shell.
 * @input: A string representing the input from the user.
 * Return: If function is found 0. Otherwise -1.
 */
int builtin(char **command, char *input)
{
	void (*build)(char *);

	build = check_built_ins(command[0]);
	if (build == NULL)
		return (-1);
	if (_strcmp("exit", command[0]) == 0)
		_free2(command);
	build(input);
	return (0);
}

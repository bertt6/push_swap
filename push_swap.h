#ifndef PUSH_SWAP
# define PUSH_SWAP

# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_data {
    int *stack_a;
    int *stack_b;
    int stacka_len;
    int stackb_len;
    char **splited;
}                   t_data;

void    sa(t_data *data);
void    sb(t_data *data);
void    ss(t_data *data);
void    ra(t_data *data);
void    rb(t_data *data);
void    rr(t_data *data);
void    rra(t_data *data);

int	    ftcount(char const *s, char c);
char    **ft_split(char const *s, char c);

void argcontrol(t_data *data, char **av);
int     issspace(char *av);
int     witchspace(char *av);


#endif
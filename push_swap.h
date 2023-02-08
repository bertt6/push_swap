#ifndef PUSH_SWAP
# define PUSH_SWAP

# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_data
{
	int				content;
	int				flag;
	struct s_data	*next;
}	t_data;

void 	rotate(t_data **rot);
void    ra(t_data **a_rot);
void 	rb(t_data **b_rot);
void    rr(t_data **a_rot, t_data **b_rot);

void    swap(t_data **data);
void    sa(t_data **a_swap);
void    sb(t_data **b_swap);
void    ss(t_data **a_swap, t_data **b_swap);

void    push(t_data **src, t_data **dst);
void 	pa(t_data **b_push, t_data **a_push);
void    pb(t_data **a_push, t_data **b_push);
void    pp(t_data **a_push, t_data **b_push);

void    rev_rot(t_data **stack);
void 	rra(t_data **stack);
void 	rrb(t_data **stack);
void 	rrr(t_data **a_list, t_data **b_list);

int 	find_max(t_data **a_list);
int 	find_min(t_data **a_list);

void	put_error(char *str);

void	check_argum(t_data **stack);

int	    ftcount(char const *s, char c);
char    **ft_split(char const *s, char c);

char	*ft_strchr(const char *s, int c);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_strdup(const char *s1);
int		ft_atoi(const char *str);
int		ft_isdigit(int c);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_lstadd_front(t_data **lst, t_data *new);
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *s);
t_data	*ft_lstnew(int content);
int		ft_lstsize(t_data *lst);
char	*ft_strjoin(char const *s1, char const *s2);
t_data	*ft_lstlast(t_data *lst);
void	ft_lstadd_back(t_data **lst, t_data *new);
char	*ft_substr(const char *s, unsigned int start, size_t len);


#endif
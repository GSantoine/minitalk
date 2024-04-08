/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agras <agras@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 19:09:34 by agras             #+#    #+#             */
/*   Updated: 2022/01/29 15:28:51 by agras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "../../includes/libft.h"

# include <unistd.h>
# include <stdlib.h>

# define BUFFER_SIZE 1000000
// gnl return line with \n
# define GNL_WRETURN 0
// gnl return line without \n
# define GNL_NORETURN 1

char		*ft_strjoin_m(char *s1, char *s2);
char		*ft_strndup(char *str, int n);
char		*get_next_line(int fd, int mod);

#endif
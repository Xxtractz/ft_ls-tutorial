/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaloyi <mbaloyi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 17:31:42 by mbaloyi           #+#    #+#             */
/*   Updated: 2019/07/15 17:31:42 by mbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_ls.h"

int main(){
    DIR *mydir;
    struct dirent *files;
    // struct stat mystat;
    
    mydir = opendir(".");
    while ((files = readdir(mydir)) != NULL)
    {
        ft_putstr(files->d_name);
        ft_putchar('\n');
    }
    closedir(mydir);
    return 0;
}
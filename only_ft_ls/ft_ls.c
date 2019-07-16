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

    /*
    Data Type: DIR
    The DIR data type represents a directory stream.

    You shouldn’t ever allocate objects of the struct dirent 
    or DIR data types, since the directory access functions 
    do that for you. Instead, you refer to these objects 
    using the pointers returned by the following functions.
    */
    DIR *mydir;

    /*
    On Linux, the dirent structure is defined as follows:
    struct dirent {
    ino_t          d_ino;       // inode number
    off_t          d_off;       // offset to the next dirent
    unsigned short d_reclen;    // length of this record 
    unsigned char  d_type;      // type of file; not supported
                                   by all file system types 
    char           d_name[256]; //filename 
    };
     */
    struct dirent *files;
    
    // struct stat mystat;
    
    /*
    The opendir() function opens a directory stream corresponding to the
       directory name, and returns a pointer to the directory stream.  The
       stream is positioned at the first entry in the directory.

        DIR *opendir(const char *name);
    */
    mydir = opendir(".");


    /* 
    The readdir() function returns a pointer to a dirent 
    structure representing the next directory entry in the 
    directory stream pointed to by dirp. It returns NULL on 
    reaching the end of the directory stream or if an error occurred.
    
    BASICALLY CHECKS THE FILES THAT ARE IN THE CURRENT DIRECTORY

    struct dirent *readdir(DIR *dirp);
    */ 
    while ((files = readdir(mydir)) != NULL)
    {
        ft_putstr(files->d_name);
        ft_putchar('\n');
    }
    closedir(mydir);
    return 0;
}
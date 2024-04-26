/**
 * @file utils.h
 * @author Shao-Ting Chiu (r07945001@ntu.edu.tw)
 * @brief General Utilities for C language
 * @version 0.1
 * @date 2021-03-08
 *
 * @copyright Copyright (c) 2021
 *
 */
#ifndef UTILS_H
# define UTILS_H

# include "structures/linked_list/linked_list_with_node.h"
# include "structures/node.h"
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

/**
 * @brief Argmax function with intergers
 *
 * @param a
 * @param b
 * @return int 0 when a is larger than b. Otherwise, 0.
 */
int	argmax(int a, int b);

#endif
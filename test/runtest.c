/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   runtest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 00:45:31 by hsoysal           #+#    #+#             */
/*   Updated: 2024/04/26 19:08:30 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "acutest.h"
#include "structures/linked_list/test_linked_list.h"
#include "test_utils.h"
#include <stdio.h>

// Run TESTs
TEST_LIST = {
	//
	{"Utility", test_utils}, //
	{"Linked List", test_linked_list},
	{NULL, NULL} //
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   runtest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 00:45:31 by hsoysal           #+#    #+#             */
/*   Updated: 2024/04/26 19:49:16 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "acutest.h"
#include "structures/linked_list/test_linked_list_with_content.h"
#include "structures/linked_list/test_linked_list_with_node.h"
#include "test_utils.h"
#include <stdio.h>

// Run TESTs
TEST_LIST = {
	//
	{"Utility", test_utils}, //
	{"Linked List with node", test_linked_list_with_node},
	{"Linked List with content", test_linked_list_with_content},
	{NULL, NULL} //
};

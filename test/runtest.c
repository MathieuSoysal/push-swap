/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   runtest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoysal <hsoysal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 00:45:31 by hsoysal           #+#    #+#             */
/*   Updated: 2024/05/11 01:04:30 by hsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "acutest.h"
#include "structures/circle_linked_list/test_circle_linked_list.h"
#include "structures/circle_linked_list/test_circle_linked_list_essentials.h"
#include "structures/circle_linked_list/test_circle_linked_list_head.h"
#include "structures/circle_linked_list/test_circle_linked_list_tail.h"
#include "structures/double_linked_list/test_double_linked_list_essentials.h"
#include "structures/double_linked_list/test_double_linked_list_head.h"
#include "structures/double_linked_list/test_double_linked_list_tail.h"
#include "structures/push_swap_stack/test_push_swap_stack_swaps.h"
#include "structures/push_swap_stack/test_push_swap_stack_pushs.h"
#include "structures/push_swap_stack/test_push_swap_stack_rotates.h"
#include "structures/push_swap_stack/test_push_swap_stack_essentials.h"
#include "utils/push_swap_sorter/test_push_swap_sorter.h"
#include "test_utils.h"
#include <stdio.h>

// Run TESTs
TEST_LIST = {
	//
	{"Utility", test_utils}, //
	{"Push Swap Sorter", test_push_swap_sorter},
	{"Double Linked List Essentials", test_double_linked_list_essentials},
	{"Double Linked List Head", test_double_linked_list_head},
	{"Double Linked List Tail", test_double_linked_list_tail},
	{"Circle Linked List Essentials", test_circle_linked_list_essentials},
	{"Circle Linked List Head", test_circle_linked_list_head},
	{"Circle Linked List Tail", test_circle_linked_list_tail},
	{"Circle Linked List Rotation", test_circle_linked_list},
	{"Push Swap Stack Swaps", test_push_swap_stack_swaps},
	{"Push Swap Stack Pushs", test_push_swap_stack_pushs},
	{"Push Swap Stack Rotates", test_push_swap_stack_rotates},
	{"Push Swap Stack Essentials", test_push_swap_stack_essentials},
	{NULL, NULL} //
};

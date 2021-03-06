// SPDX-License-Identifier: GPL-2.0
/******************************************************************************
 *
 *   Copyright (C) 2011  Intel Corporation. All rights reserved.
 *
 *   This program is free software;  you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; version 2 of the License.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY;  without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See
 *   the GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program;  if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 *
 *****************************************************************************/

#include <linux/module.h>

static unsigned int metal_level = 666;

module_param(metal_level, uint, 0644);

int init_module(void)
{
	pr_info("Heavy metal praseodymium loaded!\n");
	return 0;
}

void cleanup_module(void)
{
	pr_info("Huh what? Why?!?\n");
}

MODULE_LICENSE("GPL");

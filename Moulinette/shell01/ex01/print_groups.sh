# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    print_groups.sh                                    :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sabdelha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/11 16:26:56 by sabdelha          #+#    #+#              #
#    Updated: 2024/08/12 11:07:06 by sabdelha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
id -Gn $FT_USER | tr ' ' ',' | tr -d '\n'

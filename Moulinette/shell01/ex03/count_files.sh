# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    count_files.sh                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sabdelha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/11 18:34:25 by sabdelha          #+#    #+#              #
#    Updated: 2024/08/12 19:56:51 by sabdelha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
find . | wc -l | tr -d ' '

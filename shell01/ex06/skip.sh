# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    skip.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msoares <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/21 23:22:56 by msoares           #+#    #+#              #
#    Updated: 2019/11/21 23:26:30 by msoares          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
ls -l | awk '{if(NR % 2)print}'


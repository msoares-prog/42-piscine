# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    print_groups.sh                                    :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msoares <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/21 19:31:23 by msoares           #+#    #+#              #
#    Updated: 2019/11/21 21:21:15 by msoares          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
groups $FT_USER | sed 's/ /,/g' | tr -d '\n'


# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    count_files.sh                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msoares <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/21 20:02:20 by msoares           #+#    #+#              #
#    Updated: 2019/11/24 22:51:17 by msoares          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
find . -type f -o -type d | wc -l | bc


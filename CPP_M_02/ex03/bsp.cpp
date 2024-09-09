/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 13:20:53 by aghounam          #+#    #+#             */
/*   Updated: 2024/09/08 13:21:55 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float getarea(Point const a, Point const b, Point const c)
{
    return (a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()) \
            + b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()) \
            + c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat())) / 2;
}

bool bsp(Point const a, Point const b, Point const c, Point const p)
{
    //TODO: barycentric coordinates
    
    float Totalarea = getarea(a, b, c);
    float area1 = getarea(p, b, c);
    float area2 = getarea(a, p, c);
    float area3 = getarea(a, b, p);


    if ((Totalarea == area1 + area2 + area3) && (area1 > 0 && area2 > 0 && area3 > 0))
        return true;
    return false;
}
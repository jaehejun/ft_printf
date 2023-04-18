/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 20:32:50 by jaehejun          #+#    #+#             */
/*   Updated: 2023/04/18 20:37:02 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

double average(int num, ...) {
    va_list arguments;
    double sum = 0;
    int i;

    // initialize arguments to store all values after num
    va_start(arguments, num);

    // iterate through all values and add them to sum
    for (i = 0; i < num; i++) {
        sum += va_arg(arguments, double);
    }

    // clean up arguments
    va_end(arguments);

    // return the average of all values
    return sum / num;
}

int main() {
    double avg1 = average(3, 2.0, 4.0, 6.0);
    double avg2 = average(5, 1.0, 2.0, 3.0, 4.0, 5.0);

    printf("Average of 2.0, 4.0, and 6.0 is: %f\n", avg1);
    printf("Average of 1.0, 2.0, 3.0, 4.0, and 5.0 is: %f\n", avg2);

    char name[] = "Alice";
    int age = 30;

    printf("My name is %s and I am %d years old.\n", name, age);
    printf("The first letter of my name is %c.\n", name[0]);

    return 0;
}

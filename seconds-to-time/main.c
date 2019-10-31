//
//  main.c
//  seconds-to-time
//
//  Created by Vlad Borozna on 31/10/2019.
//  Copyright © 2019 Vladyslav Borozna. All rights reserved.
//

#include <stdio.h>

void split_time(long int tot_sec, int *h, int *m, int *s);

int main() {
    int h, m, s;
    long tot_sec = 5712;
    
    split_time(tot_sec, &h, &m, &s);
    printf("The time is: %dh %dm %ds\n", h, m, s);
}

void split_time(long int tot_sec, int *h, int *m, int *s) {
    
    float tempo;
    tempo = tot_sec / 3600;//transform in hours
    *h = tempo;
    *m = (tot_sec % 3600) / 60;//transform in minutes
    *s = (tot_sec % 3600) % 60;//transform in seconds
}



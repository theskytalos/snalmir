#ifndef __NPC_H__
#define __NPC_H__

#define MAX_NPCGENER 8192
#define NPCG_EMPTY 0
#define NPCG_CHARGED 1

#include "base-def.h"

extern struct npcgener_st gener_list[MAX_NPCGENERATOR];
extern struct mob_st baby_list[MAX_MOB_BABY];

void load_npcs();
void read_npc_generator();
void load_npc(const char*, int);
void load_mob_baby();

#endif

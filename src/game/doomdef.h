//
// Copyright(C) 1993-1996 Id Software, Inc.
// Copyright(C) 2005-2014 Simon Howard
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// DESCRIPTION:
//  Internally used data structures for virtually everything,
//   lots of other stuff.
//

#ifndef __DOOMDEF__
#define __DOOMDEF__

#include <stdio.h>
#include <string.h>

#include "doomtype.h"
#include "i_timer.h"
#include "d_mode.h"

//
// Global parameters/defines.
//
// DOOM version
#define DOOM_VERSION 109

// Version code for cph's longtics hack ("v1.91")
#define DOOM_191_VERSION 111


// If rangecheck is undefined,
// most parameter validation debugging code will not be compiled
#define RANGECHECK

// The maximum number of players, multiplayer/networking.
#define MAXPLAYERS 4

// The current state of the game: whether we are
// playing, gazing at the intermission screen,
// the game final animation, or a demo.
typedef enum
{
    GS_LEVEL,
    GS_INTERMISSION,
    GS_FINALE,
    GS_DEMOSCREEN,
} gamestate_t;

typedef enum
{
    ga_nothing,
    ga_loadlevel,
    ga_newgame,
    ga_loadgame,
    ga_savegame,
    ga_playdemo,
    ga_completed,
    ga_victory,
    ga_worlddone,
    ga_screenshot
} gameaction_t;

//
// Difficulty/skill settings/filters.
//

// Skill flags.
#define	MTF_EASY		1
#define	MTF_NORMAL		2
#define	MTF_HARD		4

// Deaf monsters/do not react to sound.
#define	MTF_AMBUSH		8


//
// Key cards.
//
typedef enum
{
    it_bluecard,
    it_yellowcard,
    it_redcard,
    it_blueskull,
    it_yellowskull,
    it_redskull,

    NUMCARDS

} card_t;



// The defined weapons,
//  including a marker indicating
//  user has not changed weapon.
typedef enum
{
    wp_fist,
    wp_pistol,
    wp_shotgun,
    wp_chaingun,
    wp_missile,
    wp_plasma,
    wp_bfg,
    wp_chainsaw,
    wp_supershotgun,

    NUMWEAPONS,

    // No pending weapon change.
    wp_nochange

} weapontype_t;


// Ammunition types defined.
typedef enum
{
    am_clip,	// Pistol / chaingun ammo.
    am_shell,	// Shotgun / double barreled shotgun.
    am_cell,	// Plasma rifle, BFG.
    am_misl,	// Missile launcher.
    NUMAMMO,
    am_noammo	// Unlimited for chainsaw / fist.

} ammotype_t;


// Power up artifacts.
typedef enum
{
    pw_invulnerability,
    pw_strength,
    pw_invisibility,
    pw_ironfeet,
    pw_allmap,
    pw_infrared,
    NUMPOWERS,
    // [crispy] showfps and mapcoords are now "powers"
    pw_showfps,
    pw_mapcoords

} powertype_t;



//
// Power up durations,
//  how many seconds till expiration,
//  assuming TICRATE is 35 ticks/second.
//
typedef enum
{
    INVULNTICS	= (30*TICRATE),
    INVISTICS	= (60*TICRATE),
    INFRATICS	= (120*TICRATE),
    IRONTICS	= (60*TICRATE)

} powerduration_t;

extern const int DEFAULT_MAX_HEALTH;
extern const int DEFAULT_MAX_ARMOR;
extern const int DEFAULT_GOD_MODE_HEALTH;

extern const int DEFAULT_DEFAULT_GREEN_ARMOR_CLASS;
extern const int DEFAULT_DEFAULT_BLUE_ARMOR_CLASS;
extern const int DEFAULT_MAX_SOULSPHERE_HEALTH;
extern const int DEFAULT_SOULSPHERE_HEALTH;
extern const int MEGASPHERE_HEALTH;

extern const int DEFAULT_IDFA_ARMOR;
extern const int DEFAULT_IDFA_ARMOR_CLASS;

extern const int DEFAULT_IDKFA_ARMOR;
extern const int DEFAULT_IDKFA_ARMOR_CLASS;

extern const int DEFAULT_BFG_CELLS_PER_SHOT;
extern const int DEFAULT_SPECIES_INFIGHTING;

extern const int DEFAULT_INITIAL_HEALTH;
extern const int DEFAULT_INITIAL_BULLETS;

#endif          // __DOOMDEF__

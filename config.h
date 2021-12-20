/* See LICENSE file for copyright and license details. */

static int topbar = 1;       /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;     /* -c option; centers dmenu on screen */
static int min_width = 400;  /* minimum width when centered */
static int fuzzy = 1;        /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
            "Hack Nerd Font:size=14:antialias=true:autohint=true",
            "JoyPixels:size=10:antialias=true:autohint=true"
};

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

// theme
#include "themes/nord.h"

static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm]    =	 { blue,  gray2 },   // Normal
	[SchemeSel]     =	 { red,   gray2  },   // Selected
	[SchemeSelHighlight] = { yellow , gray2 },
	[SchemeNormHighlight] = { pink, gray2 },
	[SchemeOut] = { blue,  gray2 },
	[SchemeMid] = { blue, gray2 },
};

/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 0;
static unsigned int lineheight = 22;  /* -h option; minimum height of a menu line */
static unsigned int columns    = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 2;  /* -bw option; to add border width */

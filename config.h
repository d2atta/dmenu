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
// #include "themes/nord.h"

static char color1[] = "#366C93";
static char color2[] = "#1B9AAD";
static char color3[] = "#7898B2";
static char color4[] = "#8C9AB4";
static char color5[] = "#A6A1B1";
static char color6[] = "#DFB1B5";
static char color7[] = "#f5dccf"; // forground
static char color8[] = "#ab9a90";
static char gray[]  = "#3B4252";
static char background[] = "#10111d";

static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm]    =	 { gray,  background },   // Normal
	[SchemeSel]     =	 { color7,   background  },   // Selected
	[SchemeSelHighlight] = { color2 , background },
	[SchemeNormHighlight] = { color3, background },
	[SchemeOut] = { gray,  background },
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


/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	{ "color1", STRING, &color1 },
	{ "color2", STRING, &color2 },
	{ "color3",  STRING, &color3 },
	{ "color4",  STRING, &color4 },
	{ "color5",  STRING, &color5 },
	{ "color6",  STRING, &color6 },
	{ "color7",  STRING, &color7 },
	{ "color8",  STRING, &color8 },
	{ "background",  STRING, &background },
};
/* Size of the window border */
static unsigned int border_width = 2;  /* -bw option; to add border width */

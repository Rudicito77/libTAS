/*
    Copyright 2015-2020 Clément Gallet <clement.gallet@ens-lyon.org>

    This file is part of libTAS.

    libTAS is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    libTAS is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with libTAS.  If not, see <http://www.gnu.org/licenses/>.
 */

#define KEYSYM_TO_DESC_LATIN(ks)\
    (keysym_offsets_latin[ks&0xff] == -1)?nullptr:&keysym_desc_latin[keysym_offsets_latin[ks&0xff]] \

#define KEYSYM_TO_DESC_MISC(ks)\
    (keysym_offsets_misc[ks&0xff] == -1)?nullptr:&keysym_desc_misc[keysym_offsets_misc[ks&0xff]] \

#define KEYSYM_TO_DESC(ks)\
    ((ks & 0xff00)==0)?(KEYSYM_TO_DESC_LATIN(ks)):(KEYSYM_TO_DESC_MISC(ks))


static const char *keysym_desc_latin =
	"space\0"
	"exclam\0"
	"quotedbl\0"
	"numbersign\0"
	"dollar\0"
	"percent\0"
	"ampersand\0"
	"apostrophe\0"
	"parenleft\0"
	"parenright\0"
	"asterisk\0"
	"plus\0"
	"comma\0"
	"minus\0"
	"period\0"
	"slash\0"
	"0\0"
	"1\0"
	"2\0"
	"3\0"
	"4\0"
	"5\0"
	"6\0"
	"7\0"
	"8\0"
	"9\0"
	"colon\0"
	"semicolon\0"
	"less\0"
	"equal\0"
	"greater\0"
	"question\0"
	"at\0"
	"A\0"
	"B\0"
	"C\0"
	"D\0"
	"E\0"
	"F\0"
	"G\0"
	"H\0"
	"I\0"
	"J\0"
	"K\0"
	"L\0"
	"M\0"
	"N\0"
	"O\0"
	"P\0"
	"Q\0"
	"R\0"
	"S\0"
	"T\0"
	"U\0"
	"V\0"
	"W\0"
	"X\0"
	"Y\0"
	"Z\0"
	"bracketleft\0"
	"backslash\0"
	"bracketright\0"
	"asciicircum\0"
	"underscore\0"
	"grave\0"
	"a\0"
	"b\0"
	"c\0"
	"d\0"
	"e\0"
	"f\0"
	"g\0"
	"h\0"
	"i\0"
	"j\0"
	"k\0"
	"l\0"
	"m\0"
	"n\0"
	"o\0"
	"p\0"
	"q\0"
	"r\0"
	"s\0"
	"t\0"
	"u\0"
	"v\0"
	"w\0"
	"x\0"
	"y\0"
	"z\0"
	"braceleft\0"
	"bar\0"
	"braceright\0"
	"asciitilde\0"
	"nobreakspace\0"
	"exclamdown\0"
	"cent\0"
	"sterling\0"
	"currency\0"
	"yen\0"
	"brokenbar\0"
	"section\0"
	"diaeresis\0"
	"copyright\0"
	"ordfeminine\0"
	"guillemotleft\0"
	"notsign\0"
	"hyphen\0"
	"registered\0"
	"macron\0"
	"degree\0"
	"plusminus\0"
	"twosuperior\0"
	"threesuperior\0"
	"acute\0"
	"mu\0"
	"paragraph\0"
	"periodcentered\0"
	"cedilla\0"
	"onesuperior\0"
	"masculine\0"
	"guillemotright\0"
	"onequarter\0"
	"onehalf\0"
	"threequarters\0"
	"questiondown\0"
	"Agrave\0"
	"Aacute\0"
	"Acircumflex\0"
	"Atilde\0"
	"Adiaeresis\0"
	"Aring\0"
	"AE\0"
	"Ccedilla\0"
	"Egrave\0"
	"Eacute\0"
	"Ecircumflex\0"
	"Ediaeresis\0"
	"Igrave\0"
	"Iacute\0"
	"Icircumflex\0"
	"Idiaeresis\0"
	"ETH\0"
	"Ntilde\0"
	"Ograve\0"
	"Oacute\0"
	"Ocircumflex\0"
	"Otilde\0"
	"Odiaeresis\0"
	"multiply\0"
	"Oslash\0"
	"Ugrave\0"
	"Uacute\0"
	"Ucircumflex\0"
	"Udiaeresis\0"
	"Yacute\0"
	"THORN\0"
	"ssharp\0"
	"agrave\0"
	"aacute\0"
	"acircumflex\0"
	"atilde\0"
	"adiaeresis\0"
	"aring\0"
	"ae\0"
	"ccedilla\0"
	"egrave\0"
	"eacute\0"
	"ecircumflex\0"
	"ediaeresis\0"
	"igrave\0"
	"iacute\0"
	"icircumflex\0"
	"idiaeresis\0"
	"eth\0"
	"ntilde\0"
	"ograve\0"
	"oacute\0"
	"ocircumflex\0"
	"otilde\0"
	"odiaeresis\0"
	"division\0"
	"oslash\0"
	"ugrave\0"
	"uacute\0"
	"ucircumflex\0"
	"udiaeresis\0"
	"yacute\0"
	"thorn\0"
	"ydiaeresis\0";

static const char *keysym_desc_misc =
	"BackSpace\0"
	"Tab\0"
	"Linefeed\0"
	"Clear\0"
	"Return\0"
	"Pause\0"
	"Scroll_Lock\0"
	"Sys_Req\0"
	"Escape\0"
	"Multi_key\0"
	"Kanji\0"
	"Muhenkan\0"
	"Henkan_Mode\0"
	"Romaji\0"
	"Hiragana\0"
	"Katakana\0"
	"Hiragana_Katakana\0"
	"Zenkaku\0"
	"Hankaku\0"
	"Zenkaku_Hankaku\0"
	"Touroku\0"
	"Massyo\0"
	"Kana_Lock\0"
	"Kana_Shift\0"
	"Eisu_Shift\0"
	"Eisu_toggle\0"
	"Hangul\0"
	"Hangul_Start\0"
	"Hangul_End\0"
	"Hangul_Hanja\0"
	"Hangul_Jamo\0"
	"Hangul_Romaja\0"
	"Codeinput\0"
	"Hangul_Jeonja\0"
	"Hangul_Banja\0"
	"Hangul_PreHanja\0"
	"Hangul_PostHanja\0"
	"SingleCandidate\0"
	"MultipleCandidate\0"
	"PreviousCandidate\0"
	"Hangul_Special\0"
	"Home\0"
	"Left\0"
	"Up\0"
	"Right\0"
	"Down\0"
	"Prior\0"
	"Next\0"
	"End\0"
	"Begin\0"
	"Select\0"
	"Print\0"
	"Execute\0"
	"Insert\0"
	"Undo\0"
	"Redo\0"
	"Menu\0"
	"Find\0"
	"Cancel\0"
	"Help\0"
	"Break\0"
	"Mode_switch\0"
	"Num_Lock\0"
	"KP_Space\0"
	"KP_Tab\0"
	"KP_Enter\0"
	"KP_F1\0"
	"KP_F2\0"
	"KP_F3\0"
	"KP_F4\0"
	"KP_Home\0"
	"KP_Left\0"
	"KP_Up\0"
	"KP_Right\0"
	"KP_Down\0"
	"KP_Prior\0"
	"KP_Next\0"
	"KP_End\0"
	"KP_Begin\0"
	"KP_Insert\0"
	"KP_Delete\0"
	"KP_Multiply\0"
	"KP_Add\0"
	"KP_Separator\0"
	"KP_Subtract\0"
	"KP_Decimal\0"
	"KP_Divide\0"
	"KP_0\0"
	"KP_1\0"
	"KP_2\0"
	"KP_3\0"
	"KP_4\0"
	"KP_5\0"
	"KP_6\0"
	"KP_7\0"
	"KP_8\0"
	"KP_9\0"
	"KP_Equal\0"
	"F1\0"
	"F2\0"
	"F3\0"
	"F4\0"
	"F5\0"
	"F6\0"
	"F7\0"
	"F8\0"
	"F9\0"
	"F10\0"
	"F11\0"
	"F12\0"
	"F13\0"
	"F14\0"
	"F15\0"
	"F16\0"
	"F17\0"
	"F18\0"
	"F19\0"
	"F20\0"
	"F21\0"
	"F22\0"
	"F23\0"
	"F24\0"
	"F25\0"
	"F26\0"
	"F27\0"
	"F28\0"
	"F29\0"
	"F30\0"
	"F31\0"
	"F32\0"
	"F33\0"
	"F34\0"
	"F35\0"
	"Shift_L\0"
	"Shift_R\0"
	"Control_L\0"
	"Control_R\0"
	"Caps_Lock\0"
	"Shift_Lock\0"
	"Meta_L\0"
	"Meta_R\0"
	"Alt_L\0"
	"Alt_R\0"
	"Super_L\0"
	"Super_R\0"
	"Hyper_L\0"
	"Hyper_R\0"
	"braille_dot_1\0"
	"braille_dot_2\0"
	"braille_dot_3\0"
	"braille_dot_4\0"
	"braille_dot_5\0"
	"braille_dot_6\0"
	"braille_dot_7\0"
	"braille_dot_8\0"
	"braille_dot_9\0"
	"braille_dot_10\0"
	"Delete\0";

static const int keysym_offsets_latin[] = {
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	0,
	6,
	13,
	22,
	33,
	40,
	48,
	58,
	69,
	79,
	90,
	99,
	104,
	110,
	116,
	123,
	129,
	131,
	133,
	135,
	137,
	139,
	141,
	143,
	145,
	147,
	149,
	155,
	165,
	170,
	176,
	184,
	193,
	196,
	198,
	200,
	202,
	204,
	206,
	208,
	210,
	212,
	214,
	216,
	218,
	220,
	222,
	224,
	226,
	228,
	230,
	232,
	234,
	236,
	238,
	240,
	242,
	244,
	246,
	248,
	260,
	270,
	283,
	295,
	306,
	312,
	314,
	316,
	318,
	320,
	322,
	324,
	326,
	328,
	330,
	332,
	334,
	336,
	338,
	340,
	342,
	344,
	346,
	348,
	350,
	352,
	354,
	356,
	358,
	360,
	362,
	364,
	374,
	378,
	389,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	400,
	413,
	424,
	429,
	438,
	447,
	451,
	461,
	469,
	479,
	489,
	501,
	515,
	523,
	530,
	541,
	548,
	555,
	565,
	577,
	591,
	597,
	600,
	610,
	625,
	633,
	645,
	655,
	670,
	681,
	689,
	703,
	716,
	723,
	730,
	742,
	749,
	760,
	766,
	769,
	778,
	785,
	792,
	804,
	815,
	822,
	829,
	841,
	852,
	856,
	863,
	870,
	877,
	889,
	896,
	907,
	916,
	923,
	930,
	937,
	949,
	960,
	967,
	973,
	980,
	987,
	994,
	1006,
	1013,
	1024,
	1030,
	1033,
	1042,
	1049,
	1056,
	1068,
	1079,
	1086,
	1093,
	1105,
	1116,
	1120,
	1127,
	1134,
	1141,
	1153,
	1160,
	1171,
	1180,
	1187,
	1194,
	1201,
	1213,
	1224,
	1231,
	1237};

static const int keysym_offsets_misc[] = {
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	0,
	10,
	14,
	23,
	-1,
	29,
	-1,
	-1,
	-1,
	-1,
	-1,
	36,
	42,
	54,
	-1,
	-1,
	-1,
	-1,
	-1,
	62,
	-1,
	-1,
	-1,
	-1,
	69,
	79,
	85,
	94,
	106,
	113,
	122,
	131,
	149,
	157,
	165,
	181,
	189,
	196,
	206,
	217,
	228,
	240,
	247,
	260,
	271,
	284,
	296,
	310,
	320,
	334,
	347,
	363,
	380,
	396,
	414,
	432,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	447,
	452,
	457,
	460,
	466,
	471,
	477,
	482,
	486,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	492,
	499,
	505,
	513,
	-1,
	520,
	525,
	530,
	535,
	540,
	547,
	552,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	558,
	570,
	579,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	588,
	-1,
	-1,
	-1,
	595,
	-1,
	-1,
	-1,
	604,
	610,
	616,
	622,
	628,
	636,
	644,
	650,
	659,
	667,
	676,
	684,
	691,
	700,
	710,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	720,
	732,
	739,
	752,
	764,
	775,
	785,
	790,
	795,
	800,
	805,
	810,
	815,
	820,
	825,
	830,
	-1,
	-1,
	-1,
	835,
	844,
	847,
	850,
	853,
	856,
	859,
	862,
	865,
	868,
	871,
	875,
	879,
	883,
	887,
	891,
	895,
	899,
	903,
	907,
	911,
	915,
	919,
	923,
	927,
	931,
	935,
	939,
	943,
	947,
	951,
	955,
	959,
	963,
	967,
	971,
	975,
	983,
	991,
	1001,
	1011,
	1021,
	1032,
	1039,
	1046,
	1052,
	1058,
	1066,
	1074,
	1082,
	-1,
	-1,
	1090,
	1104,
	1118,
	1132,
	1146,
	1160,
	1174,
	1188,
	1202,
	1216,
	-1,
	-1,
	-1,
	-1,
	1231};

    

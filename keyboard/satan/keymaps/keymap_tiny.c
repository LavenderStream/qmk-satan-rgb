/*
 * This is the canonical layout file for the Quantum project. If you want to add
 * another keyboard,
 * this is the style you want to emulate.
 */

#include "satan.h"


/*
 * Each layer gets a name for readability, which is then used in the keymap
 * matrix below.
 * The underscores don't mean anything - you can have a layer called STUFF or
 * any other name.
 * Layer names don't all need to be of the same length, obviously, and you can
 * also skip them
 * entirely and just use numbers.
 */
#define _BW	0
#define _BM	1
#define _FL	2
#define _MV	3


/*
 * MACRO
 */
#define _EMAIL		0

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	/* Keymap _BW: (Base Windows) Windows Default Layer
	 * ,-----------------------------------------------------------.
	 * |Esc~| 1| 2| 3| 4| 5| 6| 7| 8| 9| 0| -| =|Backsp |
	 * |-----------------------------------------------------------|
	 * |Tab | Q| W| E| R| T| Y| U| I| O| P| [| ]| \|
	 * |-----------------------------------------------------------|
	 * |CAPS| A| S| D| F| G| H| J| K| L| ;| '|Return |
	 * |-----------------------------------------------------------|
	 * |Shift | Z| X| C| V| B| N| M| ,| .| /|Shift |
	 * |-----------------------------------------------------------|
	 * |Ctrl|Gui |Alt | Space |Fl |Gui |CTRL| _MV |
	 * `-----------------------------------------------------------'
	 */
	[_BW] = KEYMAP(
		F( 0 ),										 KC_1,	 KC_2, KC_3, KC_4, KC_5, KC_6,	KC_7,	 KC_8,	 KC_9,	 KC_0, KC_MINS, KC_EQL, KC_BSPC,
		KC_TAB,										 KC_Q,	 KC_W, KC_E, KC_R, KC_T, KC_Y,	KC_U,	 KC_I,	 KC_O,	 KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
		KC_CAPS,									 KC_A,	 KC_S, KC_D, KC_F, KC_G, KC_H,	KC_J,	 KC_K,	 KC_L,	 KC_SCLN, KC_QUOT, KC_ENT,
		KC_LSFT,									 KC_Z,	 KC_X, KC_C, KC_V, KC_B, KC_N,	KC_M,	 KC_COMM, KC_DOT, KC_SLSH, KC_LSFT,
		KC_LCTL,									 KC_LGUI, KC_LALT, KC_SPC, F( 10 ), KC_LEFT, F( 11 ), KC_RGHT ),


	/* Keymap _BM: (Base Mac) Mac Default Layer
	 * ,-----------------------------------------------------------.
	 * |Esc~| 1| 2| 3| 4| 5| 6| 7| 8| 9| 0| -| =|Backsp |
	 * |-----------------------------------------------------------|
	 * |Tab | Q| W| E| R| T| Y| U| I| O| P| [| ]| \|
	 * |-----------------------------------------------------------|
	 * |CAPS/FL| A| S| D| F| G| H| J| K| L| ;| '|Return |
	 * |-----------------------------------------------------------|
	 * |Shift | Z| X| C| V| B| N| M| ,| .| /|Shift |
	 * |-----------------------------------------------------------|
	 * |Ctrl|Alt |Gui | Space |Gui |Alt |CTRL |_FL |
	 * `-----------------------------------------------------------'
	 */
	[_BM] = KEYMAP(
		F( 0 ),										 KC_1,	 KC_2, KC_3, KC_4, KC_5, KC_6,	KC_7,	 KC_8,
		KC_9,										 KC_0,	 KC_MINS, KC_EQL, KC_BSPC, KC_TAB, KC_Q,	KC_W,
		KC_E,										 KC_R,	 KC_T, KC_Y, KC_U, KC_I, KC_O,	KC_P,	 KC_LBRC,
		KC_RBRC,									 KC_BSLS, F( 11 ), KC_A, KC_S, KC_D, KC_F,	KC_G,
		KC_H,										 KC_J,	 KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
		KC_LSFT,									 KC_Z,	 KC_X, KC_C, KC_V, KC_B, KC_N,	KC_M,
		KC_COMM,									 KC_DOT, KC_SLSH, KC_RSFT, KC_LCTL, KC_LALT,
		KC_LGUI,									 KC_SPC, KC_RGUI, KC_RALT, KC_RCTL, F( 9 ) ),


	/* Keymap _FL: Function Layer
	 * ,-----------------------------------------------------------.
	 * | `| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Delete |
	 * |-----------------------------------------------------------|
	 * | | |Up | |Cal|Ins| |PgUp| | |Psc|Slk|Pau| |
	 * |-----------------------------------------------------------|
	 * | |Lef|Dow|Rig| |Hom|Lef|Dow|Up |Rig|End| | |
	 * |-----------------------------------------------------------|
	 * | |BL-|BL |BL+|F1 | |PgDn| |VoD|Mut|VoU| PgUp |
	 * |-----------------------------------------------------------|
	 * | | | | |App |Home|PgDn| |
	 * `-----------------------------------------------------------'
	 */
	[_FL] =
		KEYMAP(
			KC_GRV,									 KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,	KC_F7,	 KC_F8,	 KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL,
			KC_TRNS,								 F( 12 ), KC_UP, F( 13 ), KC_TRNS, KC_INS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
			KC_TRNS,								 KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_HOME, KC_LEFT, KC_DOWN, KC_UP,	 KC_RGHT, KC_HOME, KC_TRNS, KC_TRNS,
			KC_TRNS,								 KC_VOLD, KC_VOLU, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_END, KC_UP,
			KC_MPRV,								 KC_MPLY, KC_MNXT, KC_TRNS, KC_DOWN, KC_LEFT, KC_TRNS, KC_RGHT ),


	/* Keymap 3: Fn1 Layer
	 * ,-----------------------------------------------------------.
	 * | | | | | | | | | | | | | | |
	 * |-----------------------------------------------------------|
	 * | | |Up | | | | | | | | |BL-|BL+|BL |
	 * |-----------------------------------------------------------|
	 * | |Lef|Dow|Rig| |Hom|Lef|Dow|Up |Rig|End| | |
	 * |-----------------------------------------------------------|
	 * | | F1|F2 | F3|F4 | F5| F6| F7| F8| | |Up |
	 * |-----------------------------------------------------------|
	 * | | | | FN9 | |Left|Down|Rig |
	 * `-----------------------------------------------------------'
	 */
	[_MV] = KEYMAP(
		KC_NO,										 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,	KC_NO,	 KC_NO,	 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO,										 KC_NO, KC_UP, KC_NO, KC_NO, KC_NO, KC_NO,	KC_NO,	 KC_NO,	 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO,										 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,	KC_NO,	 KC_NO,	 KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO,										 F( 1 ), F( 2 ), F( 3 ), F( 4 ), F( 5 ), F( 6 ),	F( 7 ),	 F( 8 ), F( 9 ), KC_NO, KC_NO,
		KC_NO,										 KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO,	KC_NO ),
};

enum function_id {
	SHIFT_ESC,
	RGBLED_TOGGLE,
	RGBLED_STEP_MODE,
	RGBLED_PRE_MODE,
	RGBLED_INCREASE_HUE,
	RGBLED_DECREASE_HUE,
	RGBLED_INCREASE_SAT,
	RGBLED_DECREASE_SAT,
	RGBLED_INCREASE_VAL,
	RGBLED_DECREASE_VAL,
};

const uint16_t PROGMEM fn_actions[] = {
	[0] = ACTION_FUNCTION( SHIFT_ESC ),
	/* rgb */
	[1]	= ACTION_FUNCTION( RGBLED_TOGGLE ),
	[2]	= ACTION_FUNCTION( RGBLED_STEP_MODE ),
	[3]	= ACTION_FUNCTION( RGBLED_PRE_MODE ),
	[4]	= ACTION_FUNCTION( RGBLED_INCREASE_HUE ),
	[5]	= ACTION_FUNCTION( RGBLED_DECREASE_HUE ),
	[6]	= ACTION_FUNCTION( RGBLED_INCREASE_SAT ),
	[7]	= ACTION_FUNCTION( RGBLED_DECREASE_SAT ),
	/* backlight */
	[8] = ACTION_BACKLIGHT_DECREASE(),
	[9] = ACTION_BACKLIGHT_INCREASE(),
	/* layout */
	[10]	= ACTION_LAYER_MOMENTARY( _MV ),
	[11] = ACTION_LAYER_MOMENTARY( _FL ),
	[12]	= ACTION_MACRO( _EMAIL ),
};

#define MODS_CTRL_MASK (MOD_BIT( KC_LSHIFT ) | MOD_BIT( KC_RSHIFT ) )

void action_function( keyrecord_t *record, uint8_t id, uint8_t opt )
{
	static uint8_t shift_esc_shift_mask;
	switch ( id )
	{
	case SHIFT_ESC:
		shift_esc_shift_mask = get_mods() & MODS_CTRL_MASK;
		if ( record->event.pressed)
		{
			if ( shift_esc_shift_mask )
			{
				add_key( KC_GRV );
				send_keyboard_report();
			} else {
				add_key( KC_ESC );
				send_keyboard_report();
			}
		} else {
			if ( shift_esc_shift_mask )
			{
				del_key( KC_GRV );
				send_keyboard_report();
			} else {
				del_key( KC_ESC );
				send_keyboard_report();
			}
		}
		break;
	case RGBLED_TOGGLE:
		/* led operations */
		if ( record->event.pressed )
		{
			rgblight_toggle();
		}

		break;
	case RGBLED_INCREASE_HUE:
		if ( record->event.pressed )
		{
			rgblight_increase_hue();
		}
		break;
	case RGBLED_DECREASE_HUE:
		if ( record->event.pressed )
		{
			rgblight_decrease_hue();
		}
		break;
	case RGBLED_INCREASE_SAT:
		if ( record->event.pressed )
		{
			rgblight_increase_sat();
		}
		break;
	case RGBLED_DECREASE_SAT:
		if ( record->event.pressed )
		{
			rgblight_decrease_sat();
		}
		break;
	case RGBLED_INCREASE_VAL:
		if ( record->event.pressed )
		{
			rgblight_increase_val();
		}
		break;
	case RGBLED_DECREASE_VAL:
		if ( record->event.pressed )
		{
			rgblight_decrease_val();
		}
		break;
	case RGBLED_STEP_MODE:
		if ( record->event.pressed )
		{
			rgblight_step();
		}
		break;
	case RGBLED_PRE_MODE:
	if ( record->event.pressed ){
		rgblight_pre();
	}
		break;
	}
}


const macro_t *action_get_macro( keyrecord_t *record, uint8_t id, uint8_t opt )
{
	switch ( id )
	{
	case _EMAIL:
		/*
		 * return(record->event.pressed ? MACRO( D( LSFT ), T( 1 )T, U( LSFT ), T(
		 * 3 ), T( 6 ), T( 6 ), T( O ), END ) : MACRO( END ) );
		 */
		return(record->event.pressed
		 ? MACRO( T( 1 ), T( 3 ), T( 6 ), T( 6 ), T( 2 ), T( 5 ), T( 2 ), T( 1 ), T( 4 ),
				D( LSFT ), T( 2 ), U( LSFT ), T( Q ), T( Q ), T( DOT ), T( C ),
				T( O ), T( M ), END )
		 : MACRO( END ) );
		break;
	}

	return(MACRO_NONE);
};

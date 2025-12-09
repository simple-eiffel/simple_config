/*
 * Code for class JSON_TOKENS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F35_702(EIF_REFERENCE);
extern EIF_TYPED_VALUE F35_703(EIF_REFERENCE);
extern EIF_TYPED_VALUE F35_704(EIF_REFERENCE);
extern EIF_TYPED_VALUE F35_705(EIF_REFERENCE);
extern EIF_TYPED_VALUE F35_706(EIF_REFERENCE);
extern EIF_TYPED_VALUE F35_707(EIF_REFERENCE);
extern EIF_TYPED_VALUE F35_708(EIF_REFERENCE);
extern EIF_TYPED_VALUE F35_709(EIF_REFERENCE);
extern EIF_TYPED_VALUE F35_710(EIF_REFERENCE);
extern EIF_TYPED_VALUE F35_711(EIF_REFERENCE);
extern EIF_TYPED_VALUE F35_712(EIF_REFERENCE);
extern EIF_TYPED_VALUE F35_713(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F35_714(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F35_715(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F35_716(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F35_717(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit35(void);

#ifdef __cplusplus
}
#endif

#include "eif_built_in.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {JSON_TOKENS}.token_object_open */
EIF_TYPED_VALUE F35_702 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '{';
	return r;
}

/* {JSON_TOKENS}.token_object_close */
EIF_TYPED_VALUE F35_703 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '}';
	return r;
}

/* {JSON_TOKENS}.token_array_open */
EIF_TYPED_VALUE F35_704 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '[';
	return r;
}

/* {JSON_TOKENS}.token_array_close */
EIF_TYPED_VALUE F35_705 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ']';
	return r;
}

/* {JSON_TOKENS}.token_double_quote */
EIF_TYPED_VALUE F35_706 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\"';
	return r;
}

/* {JSON_TOKENS}.token_plus */
EIF_TYPED_VALUE F35_707 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '+';
	return r;
}

/* {JSON_TOKENS}.token_minus */
EIF_TYPED_VALUE F35_708 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '-';
	return r;
}

/* {JSON_TOKENS}.token_dot */
EIF_TYPED_VALUE F35_709 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '.';
	return r;
}

/* {JSON_TOKENS}.token_exp */
EIF_TYPED_VALUE F35_710 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) 'e';
	return r;
}

/* {JSON_TOKENS}.token_comma */
EIF_TYPED_VALUE F35_711 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ',';
	return r;
}

/* {JSON_TOKENS}.token_colon */
EIF_TYPED_VALUE F35_712 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ':';
	return r;
}

/* {JSON_TOKENS}.is_open_token */
EIF_TYPED_VALUE F35_713 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_open_token";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 34, Current, 0, 1, 774);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(34, Current, 774);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case (EIF_CHARACTER_8) '\"':
		case (EIF_CHARACTER_8) '+':
		case (EIF_CHARACTER_8) '-':
		case (EIF_CHARACTER_8) '.':
		case (EIF_CHARACTER_8) '[':
		case (EIF_CHARACTER_8) '{':
			RTHOOK(2);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {JSON_TOKENS}.is_close_token */
EIF_TYPED_VALUE F35_714 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_close_token";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 34, Current, 0, 1, 775);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(34, Current, 775);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case (EIF_CHARACTER_8) '\"':
		case (EIF_CHARACTER_8) ']':
		case (EIF_CHARACTER_8) '}':
			RTHOOK(2);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {JSON_TOKENS}.is_special_character */
EIF_TYPED_VALUE F35_715 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_special_character";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 34, Current, 0, 1, 776);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(34, Current, 776);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case (EIF_CHARACTER_8) '\010':
		case (EIF_CHARACTER_8) '\011':
		case (EIF_CHARACTER_8) '\012':
		case (EIF_CHARACTER_8) '\014':
		case (EIF_CHARACTER_8) '\015':
		case (EIF_CHARACTER_8) '\"':
		case (EIF_CHARACTER_8) '/':
		case (EIF_CHARACTER_8) '\\':
			RTHOOK(2);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {JSON_TOKENS}.is_special_control */
EIF_TYPED_VALUE F35_716 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_special_control";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 34, Current, 0, 1, 777);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(34, Current, 777);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case (EIF_CHARACTER_8) 'b':
		case (EIF_CHARACTER_8) 'f':
		case (EIF_CHARACTER_8) 'n':
		case (EIF_CHARACTER_8) 'r':
		case (EIF_CHARACTER_8) 't':
			RTHOOK(2);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {JSON_TOKENS}.is_exp_token */
EIF_TYPED_VALUE F35_717 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_exp_token";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 34, Current, 0, 1, 778);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(34, Current, 778);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(700, dtype))(Current)).it_c1);
	if (!(EIF_BOOLEAN)(arg1 == tc1)) {
		tc1 = eif_builtin_CHARACTER_8_as_lower__c1_c1(arg1);
		tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(700, dtype))(Current)).it_c1);
		tb1 = (EIF_BOOLEAN)(tc1 == tc2);
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

void EIF_Minit35 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

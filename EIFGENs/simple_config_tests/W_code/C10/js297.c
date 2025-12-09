/*
 * Code for class JSON_PARSER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F297_6973(EIF_REFERENCE);
extern void F297_6974(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F297_6975(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F297_6976(EIF_REFERENCE);
extern EIF_TYPED_VALUE F297_6977(EIF_REFERENCE);
extern EIF_TYPED_VALUE F297_6978(EIF_REFERENCE);
extern EIF_TYPED_VALUE F297_6979(EIF_REFERENCE);
extern EIF_TYPED_VALUE F297_6980(EIF_REFERENCE);
extern EIF_TYPED_VALUE F297_6981(EIF_REFERENCE);
extern EIF_TYPED_VALUE F297_6982(EIF_REFERENCE);
extern EIF_TYPED_VALUE F297_6983(EIF_REFERENCE);
extern EIF_TYPED_VALUE F297_6984(EIF_REFERENCE);
extern void F297_6985(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F297_6986(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F297_6987(EIF_REFERENCE);
extern EIF_TYPED_VALUE F297_6988(EIF_REFERENCE);
static EIF_TYPED_VALUE F297_6989_body(EIF_REFERENCE);
extern EIF_TYPED_VALUE F297_6989(EIF_REFERENCE);
extern EIF_TYPED_VALUE F297_6990(EIF_REFERENCE);
extern EIF_TYPED_VALUE F297_6991(EIF_REFERENCE);
extern void F297_6992(EIF_REFERENCE);
extern void F297_6993(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F297_6994(EIF_REFERENCE);
extern void F297_6995(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F297_6996(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F297_6997(EIF_REFERENCE);
extern EIF_TYPED_VALUE F297_6998(EIF_REFERENCE);
extern EIF_TYPED_VALUE F297_6999(EIF_REFERENCE);
extern EIF_TYPED_VALUE F297_7000(EIF_REFERENCE);
extern EIF_TYPED_VALUE F297_7001(EIF_REFERENCE);
extern EIF_TYPED_VALUE F297_7002(EIF_REFERENCE);
extern EIF_TYPED_VALUE F297_7003(EIF_REFERENCE);
extern EIF_TYPED_VALUE F297_7004(EIF_REFERENCE);
extern EIF_TYPED_VALUE F297_7005(EIF_REFERENCE);
extern EIF_TYPED_VALUE F297_7006(EIF_REFERENCE);
extern EIF_TYPED_VALUE F297_7007(EIF_REFERENCE);
extern EIF_TYPED_VALUE F297_7008(EIF_REFERENCE);
extern void F297_7009(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F297_7010(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F297_7011(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F297_7012(EIF_REFERENCE);
extern EIF_TYPED_VALUE F297_7013(EIF_REFERENCE);
extern EIF_TYPED_VALUE F297_7014(EIF_REFERENCE);
extern EIF_TYPED_VALUE F297_7015(EIF_REFERENCE);
extern EIF_TYPED_VALUE F297_7016(EIF_REFERENCE);
extern EIF_TYPED_VALUE F297_7017(EIF_REFERENCE);
extern EIF_TYPED_VALUE F297_7018(EIF_REFERENCE);
extern EIF_TYPED_VALUE F297_7019(EIF_REFERENCE);
extern void F297_7020(EIF_REFERENCE);
extern void F297_7021(EIF_REFERENCE);
extern EIF_TYPED_VALUE F297_7022(EIF_REFERENCE);
extern EIF_TYPED_VALUE F297_7023(EIF_REFERENCE);
extern EIF_TYPED_VALUE F297_7024(EIF_REFERENCE);
extern void EIF_Minit297(void);

#ifdef __cplusplus
}
#endif

#include "eif_built_in.h"
#include <ctype.h>
#include "eif_helpers.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {JSON_PARSER}.make */
void F297_6973 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 296, Current, 0, 0, 13858);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(296, Current, 13858);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5277, dtype))(Current);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 719, 0xF8000115, 0); /* representation */
	tr1 = RTMS_EX_H("",0,0);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(719, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 721, 0x10000000, 1); /* index */
	*(EIF_INTEGER_32 *)(Current + RTWA(721, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {JSON_PARSER}.make_with_string */
void F297_6974 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_with_string";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 296, Current, 0, 1, 13859);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(296, Current, 13859);
	RTCC(arg1, 296, l_feature_name, 1, eif_new_type(275, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_content_not_empty", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4765, "is_empty", arg1))(arg1)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5277, dtype))(Current);
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(708, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef arg1
}

/* {JSON_PARSER}.make_parser */
void F297_6975 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_parser";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 296, Current, 0, 1, 13860);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(296, Current, 13860);
	RTCC(arg1, 296, l_feature_name, 1, eif_new_type(275, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5275, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef arg1
}

/* {JSON_PARSER}.initialize */
void F297_6976 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "initialize";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 296, Current, 1, 0, 13861);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(296, Current, 13861);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000115, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(277, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4749, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5322, 0xF8000115, 0); /* buffer_json_string */
	tr1 = RTCCL(loc1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5322, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 5323, 0xF8000115, 0); /* buffer_json_number */
	tr1 = RTCCL(loc1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5323, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 5324, 0xF8000115, 0); /* buffer_is_number */
	tr1 = RTCCL(loc1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5324, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 5317, 0xF800011E, 0); /* false_value */
	tr1 = RTLNSMART(RTWCT(5317, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5111, Dtype(tr1)))(tr1);
	RTNHOOK(5,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5317, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 5318, 0xF800011E, 0); /* true_value */
	tr1 = RTLNSMART(RTWCT(5318, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5110, Dtype(tr1)))(tr1);
	RTNHOOK(6,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5318, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 5319, 0xF800011D, 0); /* null_value */
	tr1 = RTLNSMART(RTWCT(5319, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(7,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5319, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	RTDBGAA(Current, dtype, 5281, 0xF8000288, 0); /* errors */
	tr1 = RTLNSMART(RTWCT(5281, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(3498, Dtype(tr1)))(tr1);
	RTNHOOK(8,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5281, dtype)) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
}

/* {JSON_PARSER}.is_parsed */
EIF_TYPED_VALUE F297_6977 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5278,Dtype(Current)));
	return r;
}


/* {JSON_PARSER}.is_valid */
EIF_TYPED_VALUE F297_6978 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_valid";
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 296, Current, 0, 0, 13863);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(296, Current, 13863);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(5280, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {JSON_PARSER}.has_error */
EIF_TYPED_VALUE F297_6979 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5280,Dtype(Current)));
	return r;
}


/* {JSON_PARSER}.errors */
EIF_TYPED_VALUE F297_6980 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5281,Dtype(Current)));
	return r;
}


/* {JSON_PARSER}.errors_as_string */
EIF_TYPED_VALUE F297_6981 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "errors_as_string";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 296, Current, 1, 0, 13866);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(296, Current, 13866);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000115, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(277, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4749, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5281, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3036, "new_cursor", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr2);
	for (;;) {
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3022, "after", loc1))(loc1)).it_b);
		if (tb1) break;
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3021, "item", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4936, "append_string", Result))(Result, ur1x);
		RTHOOK(4);
		uc1 = (EIF_CHARACTER_8) '\012';
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4938, "append_character", Result))(Result, uc1x);
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3023, "forth", loc1))(loc1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef uc1
}

/* {JSON_PARSER}.current_errors */
EIF_TYPED_VALUE F297_6982 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "current_errors";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 296, Current, 0, 0, 13867);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(296, Current, 13867);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000115, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5282, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {JSON_PARSER}.default_array_size */
EIF_TYPED_VALUE F297_6983 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5284,Dtype(Current)));
	return r;
}


/* {JSON_PARSER}.default_object_size */
EIF_TYPED_VALUE F297_6984 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5285,Dtype(Current)));
	return r;
}


/* {JSON_PARSER}.set_default_array_size */
void F297_6985 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_default_array_size";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 296, Current, 0, 1, 13870);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(296, Current, 13870);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_not_yet_parsed", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(5278, dtype));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5284, 0x10000000, 1); /* default_array_size */
	*(EIF_INTEGER_32 *)(Current + RTWA(5284, dtype)) = (EIF_INTEGER_32) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {JSON_PARSER}.set_default_object_size */
void F297_6986 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_default_object_size";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 296, Current, 0, 1, 13871);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(296, Current, 13871);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_not_yet_parsed", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(5278, dtype));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5285, 0x10000000, 1); /* default_object_size */
	*(EIF_INTEGER_32 *)(Current + RTWA(5285, dtype)) = (EIF_INTEGER_32) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {JSON_PARSER}.json_string_buffer_size */
EIF_TYPED_VALUE F297_6987 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "json_string_buffer_size";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 296, Current, 0, 0, 13872);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(296, Current, 13872);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 512L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {JSON_PARSER}.json_number_buffer_size */
EIF_TYPED_VALUE F297_6988 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "json_number_buffer_size";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 296, Current, 0, 0, 13873);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(296, Current, 13873);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {JSON_PARSER}.parsed_json_value */
static EIF_TYPED_VALUE F297_6989_body (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parsed_json_value";
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 296, Current, 0, 0, 13874);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(296, Current, 13874);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_parsed", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(5278, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("attached_result_if_valid", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5279, dtype))(Current)).it_b);
		if (tb2) {
			tb1 = (EIF_BOOLEAN)((EIF_REFERENCE) 0 != NULL);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
}

EIF_TYPED_VALUE F297_6989 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5290,Dtype(Current)));
	if (!r.it_r) {
		if (RTAT(RTWCT(5290, Dtype(Current), Dftype(Current)))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			RTLIU(1);
			r.it_r = (F297_6989_body (Current)).it_r;
			*(EIF_REFERENCE *)(Current + RTWA(5290,Dtype(Current))) = r.it_r;
			RTAR(Current, r.it_r);
			RTLE;
		}
	}
	return r;
}


/* {JSON_PARSER}.parsed_json_object */
EIF_TYPED_VALUE F297_6990 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parsed_json_object";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 296, Current, 1, 0, 13875);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(296, Current, 13875);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_parsed", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(5278, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5290, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	loc1 = RTRV(eif_new_type(282, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		RTDBGAL(0, 0xF800011A, 0,0); /* Result */
		Result = (EIF_REFERENCE) RTCCL(loc1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {JSON_PARSER}.parsed_json_array */
EIF_TYPED_VALUE F297_6991 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parsed_json_array";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 296, Current, 1, 0, 13876);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(296, Current, 13876);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_parsed", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(5278, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5290, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	loc1 = RTRV(eif_new_type(284, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		RTDBGAL(0, 0xF800011C, 0,0); /* Result */
		Result = (EIF_REFERENCE) RTCCL(loc1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {JSON_PARSER}.reset */
void F297_6992 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "reset";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 296, Current, 0, 0, 13877);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(296, Current, 13877);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(709, 35))(Current);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5290, 0xF8000119, 0); /* parsed_json_value */
	*(EIF_REFERENCE *)(Current + RTWA(5290, dtype)) = (EIF_REFERENCE) NULL;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5281, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3166, "wipe_out", tr1))(tr1);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 5280, 0x04000000, 1); /* has_error */
	*(EIF_BOOLEAN *)(Current + RTWA(5280, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 5278, 0x04000000, 1); /* is_parsed */
	*(EIF_BOOLEAN *)(Current + RTWA(5278, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5321, dtype))(Current);
	RTHOOK(7);
	RTDBGAA(Current, dtype, 5319, 0xF800011D, 0); /* null_value */
	tr1 = RTLNSMART(RTWCT(5319, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(7,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5319, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	RTDBGAA(Current, dtype, 5317, 0xF800011E, 0); /* false_value */
	tr1 = RTLNSMART(RTWCT(5317, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5111, Dtype(tr1)))(tr1);
	RTNHOOK(8,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5317, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(9);
	RTDBGAA(Current, dtype, 5318, 0xF800011E, 0); /* true_value */
	tr1 = RTLNSMART(RTWCT(5318, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5110, Dtype(tr1)))(tr1);
	RTNHOOK(9,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5318, dtype)) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
}

/* {JSON_PARSER}.parse_string */
void F297_6993 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "parse_string";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 296, Current, 0, 1, 13878);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(296, Current, 13878);
	RTCC(arg1, 296, l_feature_name, 1, eif_new_type(275, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(710, dtype))(Current, ur1x);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5294, dtype))(Current);
	if (RTAL & CK_CHECK) {
		RTHOOK(3);
		RTCT("input_cleared", EX_CHECK);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(719, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4765, "is_empty", tr1))(tr1)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {JSON_PARSER}.parse_content */
void F297_6994 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parse_content";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 296, Current, 0, 0, 13879);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(296, Current, 13879);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(5278, dtype));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5320, dtype))(Current);
		RTHOOK(3);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5313, dtype))(Current)).it_b);
		if (tb1) {
			RTHOOK(4);
			RTDBGAA(Current, dtype, 5290, 0xF8000119, 0); /* parsed_json_value */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5301, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = RTCCL(tr1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(5290, dtype)) = (EIF_REFERENCE) tr1;
			RTHOOK(5);
			tb1 = '\0';
			tb2 = *(EIF_BOOLEAN *)(Current + RTWA(5280, dtype));
			if ((EIF_BOOLEAN) !tb2) {
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5312, dtype))(Current)).it_b);
				tb1 = tb2;
			}
			if (tb1) {
				RTHOOK(6);
				tr1 = RTMS_EX_H("Remaining element outside the main json value",45,341899109);
				ur1 = tr1;
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(721, dtype));
				ui4_1 = ti4_1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5296, dtype))(Current, ur1x, ui4_1x);
			}
		} else {
			RTHOOK(7);
			tr1 = RTMS_EX_H("Syntax error unexpected token, expecting \'{\' or \'[\'",51,1020017191);
			ur1 = tr1;
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(721, dtype));
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5296, dtype))(Current, ur1x, ui4_1x);
		}
		RTHOOK(8);
		RTDBGAA(Current, dtype, 5278, 0x04000000, 1); /* is_parsed */
		*(EIF_BOOLEAN *)(Current + RTWA(5278, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(9);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5321, dtype))(Current);
		RTHOOK(10);
		RTDBGAA(Current, dtype, 719, 0xF8000115, 0); /* representation */
		tr1 = RTMS_EX_H("",0,0);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(719, dtype)) = (EIF_REFERENCE) tr1;
		if (RTAL & CK_CHECK) {
			RTHOOK(11);
			RTCT("input_cleared", EX_CHECK);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(719, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(11,1);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4765, "is_empty", tr1))(tr1)).it_b);
			if (tb1) {
				RTCK;
			} else {
				RTCF;
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("is_parsed", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(5278, dtype));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
}

/* {JSON_PARSER}.report_error */
void F297_6995 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "report_error";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 296, Current, 0, 1, 13880);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(296, Current, 13880);
	RTCC(arg1, 296, l_feature_name, 1, eif_new_type(277, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("e_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5280, 0x04000000, 1); /* has_error */
	*(EIF_BOOLEAN *)(Current + RTWA(5280, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5281, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3207, "force", tr1))(tr1, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("has_error", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(5280, dtype));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("is_not_valid", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5279, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {JSON_PARSER}.report_error_at */
void F297_6996 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "report_error_at";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 296, Current, 0, 2, 13881);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(296, Current, 13881);
	RTCC(arg1, 296, l_feature_name, 1, eif_new_type(277, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("e_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("pos_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if ((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		tr1 = RTMS_EX_H(" (position: ",12,1385097760);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4900, "plus", arg1))(arg1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(721, dtype));
		tr2 = eif_out__i4_s1(ti4_1);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4900, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H(")",1,41);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4900, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5295, dtype))(Current, ur1x);
	} else {
		RTHOOK(5);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5295, dtype))(Current, ur1x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("has_error", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(5280, dtype));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("is_not_valid", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5279, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef arg2
#undef arg1
}

/* {JSON_PARSER}.parse_json */
EIF_TYPED_VALUE F297_6997 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parse_json";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 296, Current, 0, 0, 13882);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(296, Current, 13882);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5294, dtype))(Current);
	RTHOOK(2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5279, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(3);
		RTDBGAL(0, 0xF8000119, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5290, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {JSON_PARSER}.parse_object */
EIF_TYPED_VALUE F297_6998 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parse_object";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 296, Current, 1, 0, 13883);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(296, Current, 13883);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5294, dtype))(Current);
	RTHOOK(2);
	tb1 = '\0';
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5279, dtype))(Current)).it_b);
	if (tb2) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5290, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = RTCCL(tr1);
		loc1 = RTRV(eif_new_type(282, 0x01),loc1);
		tb1 = EIF_TEST(loc1);
	}
	if (tb1) {
		RTHOOK(3);
		RTDBGAL(0, 0xF800011A, 0,0); /* Result */
		Result = (EIF_REFERENCE) RTCCL(loc1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {JSON_PARSER}.parse */
EIF_TYPED_VALUE F297_6999 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parse";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 296, Current, 0, 0, 13884);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(296, Current, 13884);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000119, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5300, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5278, 0x04000000, 1); /* is_parsed */
	*(EIF_BOOLEAN *)(Current + RTWA(5278, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {JSON_PARSER}.next_parsed_json_value */
EIF_TYPED_VALUE F297_7000 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "next_parsed_json_value";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 296, Current, 1, 0, 13885);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(296, Current, 13885);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(721, dtype));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(709, dtype))(Current);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 721, 0x10000000, 1); /* index */
	*(EIF_INTEGER_32 *)(Current + RTWA(721, dtype)) = (EIF_INTEGER_32) loc1;
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5320, dtype))(Current);
	RTHOOK(5);
	RTDBGAL(0, 0xF8000119, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5301, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5321, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {JSON_PARSER}.next_json_value */
EIF_TYPED_VALUE F297_7001 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "next_json_value";
	RTEX;
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_CHAR8, &loc1);
	
	RTEAA(l_feature_name, 296, Current, 1, 0, 13886);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(296, Current, 13886);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(5280, dtype));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(714, dtype))(Current);
		RTHOOK(3);
		RTDBGAL(1, 0x08000000, 1, 0); /* loc1 */
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(720, dtype))(Current)).it_c1);
		loc1 = (EIF_CHARACTER_8) tc1;
		RTHOOK(4);
		switch (loc1) {
			case (EIF_CHARACTER_8) '{':
				RTHOOK(5);
				RTDBGAL(0, 0xF8000119, 0,0); /* Result */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5302, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				Result = (EIF_REFERENCE) RTCCL(tr1);
				break;
			case (EIF_CHARACTER_8) '\"':
				RTHOOK(6);
				RTDBGAL(0, 0xF8000119, 0,0); /* Result */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5303, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				Result = (EIF_REFERENCE) RTCCL(tr1);
				break;
			case (EIF_CHARACTER_8) '[':
				RTHOOK(7);
				RTDBGAL(0, 0xF8000119, 0,0); /* Result */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5304, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				Result = (EIF_REFERENCE) RTCCL(tr1);
				break;
			default:
				RTHOOK(8);
				tb1 = '\01';
				tb2 = EIF_TEST(isdigit(loc1));
				if (!tb2) {
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(698, dtype))(Current)).it_c1);
					tb1 = (EIF_BOOLEAN)(loc1 == tc1);
				}
				if (tb1) {
					RTHOOK(9);
					RTDBGAL(0, 0xF8000119, 0,0); /* Result */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5305, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					Result = (EIF_REFERENCE) RTCCL(tr1);
				} else {
					RTHOOK(10);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5306, dtype))(Current)).it_b);
					if (tb1) {
						RTHOOK(11);
						RTDBGAL(0, 0xF8000119, 0,0); /* Result */
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5319, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						Result = (EIF_REFERENCE) RTCCL(tr1);
						RTHOOK(12);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(712, dtype))(Current);
						RTHOOK(13);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(712, dtype))(Current);
						RTHOOK(14);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(712, dtype))(Current);
					} else {
						RTHOOK(15);
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5308, dtype))(Current)).it_b);
						if (tb1) {
							RTHOOK(16);
							RTDBGAL(0, 0xF8000119, 0,0); /* Result */
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5318, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							Result = (EIF_REFERENCE) RTCCL(tr1);
							RTHOOK(17);
							(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(712, dtype))(Current);
							RTHOOK(18);
							(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(712, dtype))(Current);
							RTHOOK(19);
							(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(712, dtype))(Current);
						} else {
							RTHOOK(20);
							tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5307, dtype))(Current)).it_b);
							if (tb1) {
								RTHOOK(21);
								RTDBGAL(0, 0xF8000119, 0,0); /* Result */
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5317, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								Result = (EIF_REFERENCE) RTCCL(tr1);
								RTHOOK(22);
								(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(712, dtype))(Current);
								RTHOOK(23);
								(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(712, dtype))(Current);
								RTHOOK(24);
								(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(712, dtype))(Current);
								RTHOOK(25);
								(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(712, dtype))(Current);
							} else {
								RTHOOK(26);
								tr1 = RTMS_EX_H("JSON value is not well formed",29,1143638628);
								ur1 = tr1;
								ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(721, dtype));
								ui4_1 = ti4_1;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5296, dtype))(Current, ur1x, ui4_1x);
								RTHOOK(27);
								RTDBGAL(0, 0xF8000119, 0,0); /* Result */
								Result = (EIF_REFERENCE) NULL;
							}
						}
					}
				}
				break;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(28);
		RTCT("is_parsed_implies_result_not_void", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(5280, dtype));
		if ((!((EIF_BOOLEAN) !tb1) || ((EIF_BOOLEAN)(Result != NULL)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(29);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
}

/* {JSON_PARSER}.next_json_object */
EIF_TYPED_VALUE F297_7002 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "next_json_object";
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc2);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLR(6,loc3);
	RTLR(7,ur2);
	RTLIU(8);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 296, Current, 3, 0, 13887);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(296, Current, 13887);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(712, dtype))(Current);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(714, dtype))(Current);
	RTHOOK(3);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(720, dtype))(Current)).it_c1);
	tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(693, dtype))(Current)).it_c1);
	if ((EIF_BOOLEAN)(tc1 == tc2)) {
		RTHOOK(4);
		RTDBGAL(0, 0xF800011A, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(282, 0x01).id);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5043, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(4,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(5);
		RTDBGAL(0, 0xF800011A, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(282, 0x01).id);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5285, dtype));
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5043, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(5,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(6);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(713, dtype))(Current);
		RTHOOK(7);
		RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
		loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		for (;;) {
			RTHOOK(8);
			if ((EIF_BOOLEAN) !loc1) break;
			RTHOOK(9);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(712, dtype))(Current);
			RTHOOK(10);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(714, dtype))(Current);
			RTHOOK(11);
			RTDBGAL(2, 0xF800011B, 0, 0); /* loc2 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5303, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc2 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(12);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(712, dtype))(Current);
			RTHOOK(13);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(714, dtype))(Current);
			RTHOOK(14);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(720, dtype))(Current)).it_c1);
			tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(702, dtype))(Current)).it_c1);
			if ((EIF_BOOLEAN)(tc1 == tc2)) {
				RTHOOK(15);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(712, dtype))(Current);
				RTHOOK(16);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(714, dtype))(Current);
			} else {
				RTHOOK(17);
				tr1 = RTMS_EX_H("\012 Input string is a not well formed JSON, expected [:] found [",62,979945051);
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(720, dtype))(Current)).it_c1);
				RTNHOOK(17,1);
				tr2 = eif_out__c1_s1(tc1);
				ur1 = RTCCL(tr2);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4900, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr1 = RTMS_EX_H("]",1,93);
				ur1 = tr1;
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4900, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr1);
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(721, dtype));
				ui4_1 = ti4_1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5296, dtype))(Current, ur1x, ui4_1x);
				RTHOOK(18);
				RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
				loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
			RTHOOK(19);
			RTDBGAL(3, 0xF8000119, 0, 0); /* loc3 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5301, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc3 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(20);
			tb1 = *(EIF_BOOLEAN *)(Current + RTWA(5280, dtype));
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !tb1 && (EIF_BOOLEAN) ((EIF_BOOLEAN)(loc3 != NULL) && (EIF_BOOLEAN)(loc2 != NULL)))) {
				RTHOOK(21);
				ur1 = RTCCL(loc3);
				ur2 = RTCCL(loc2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5046, "put", Result))(Result, ur1x, ur2x);
				RTHOOK(22);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(712, dtype))(Current);
				RTHOOK(23);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(714, dtype))(Current);
				RTHOOK(24);
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(720, dtype))(Current)).it_c1);
				tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(693, dtype))(Current)).it_c1);
				if ((EIF_BOOLEAN)(tc1 == tc2)) {
					RTHOOK(25);
					RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
					loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				} else {
					RTHOOK(26);
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(720, dtype))(Current)).it_c1);
					tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(701, dtype))(Current)).it_c1);
					if ((EIF_BOOLEAN)(tc1 != tc2)) {
						RTHOOK(27);
						RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
						loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						RTHOOK(28);
						tr1 = RTMS_EX_H("JSON Object syntactically malformed expected , found [",54,605843291);
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(720, dtype))(Current)).it_c1);
						RTNHOOK(28,1);
						tr2 = eif_out__c1_s1(tc1);
						ur1 = RTCCL(tr2);
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4900, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tr1 = RTMS_EX_H("]",1,93);
						ur1 = tr1;
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4900, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr1);
						ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(721, dtype));
						ui4_1 = ti4_1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5296, dtype))(Current, ur1x, ui4_1x);
					}
				}
			} else {
				RTHOOK(29);
				RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
				loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(30);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
}

/* {JSON_PARSER}.next_json_string */
EIF_TYPED_VALUE F297_7003 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "next_json_string";
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_CHARACTER_8 loc2 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLR(5,Result);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLU(SK_CHAR8, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	
	RTEAA(l_feature_name, 296, Current, 4, 0, 13888);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(296, Current, 13888);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(3, 0xF8000115, 0, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5322, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4875, "wipe_out", loc3))(loc3);
	RTHOOK(3);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(720, dtype))(Current)).it_c1);
	tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(696, dtype))(Current)).it_c1);
	if ((EIF_BOOLEAN)(tc1 == tc2)) {
		RTHOOK(4);
		RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
		loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		for (;;) {
			RTHOOK(5);
			if ((EIF_BOOLEAN) !loc1) break;
			RTHOOK(6);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(712, dtype))(Current);
			RTHOOK(7);
			RTDBGAL(2, 0x08000000, 1, 0); /* loc2 */
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(720, dtype))(Current)).it_c1);
			loc2 = (EIF_CHARACTER_8) tc1;
			RTHOOK(8);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(696, dtype))(Current)).it_c1);
			if ((EIF_BOOLEAN)(loc2 == tc1)) {
				RTHOOK(9);
				RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
				loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			} else {
				RTHOOK(10);
				if ((EIF_BOOLEAN)(loc2 == (EIF_CHARACTER_8) '\\')) {
					RTHOOK(11);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(712, dtype))(Current);
					RTHOOK(12);
					RTDBGAL(2, 0x08000000, 1, 0); /* loc2 */
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(720, dtype))(Current)).it_c1);
					loc2 = (EIF_CHARACTER_8) tc1;
					RTHOOK(13);
					if ((EIF_BOOLEAN)(loc2 == (EIF_CHARACTER_8) 'u')) {
						RTHOOK(14);
						RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
						ti4_1 = *(EIF_INTEGER_32 *)(loc3 + RTVA(4910, "count", loc3));
						loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
						RTHOOK(15);
						tr1 = RTMS_EX_H("\\u",2,23669);
						ur1 = tr1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4934, "append", loc3))(loc3, ur1x);
						RTHOOK(16);
						ur1 = RTCCL(loc3);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5309, dtype))(Current, ur1x);
						RTHOOK(17);
						RTDBGAL(2, 0x08000000, 1, 0); /* loc2 */
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(720, dtype))(Current)).it_c1);
						loc2 = (EIF_CHARACTER_8) tc1;
						RTHOOK(18);
						ur1 = RTCCL(loc3);
						ui4_1 = loc4;
						ti4_1 = *(EIF_INTEGER_32 *)(loc3 + RTVA(4910, "count", loc3));
						ui4_2 = ti4_1;
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5311, dtype))(Current, ur1x, ui4_1x, ui4_2x)).it_b);
						if ((EIF_BOOLEAN) !tb1) {
							RTHOOK(19);
							RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
							loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
							RTHOOK(20);
							tr1 = RTMS_EX_H("Input string is not well formed JSON, expected Unicode value, found [",69,2033199195);
							tr2 = eif_out__c1_s1(loc2);
							ur1 = RTCCL(tr2);
							tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4900, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							tr1 = RTMS_EX_H("]",1,93);
							ur1 = tr1;
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4900, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							ur1 = RTCCL(tr1);
							ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(721, dtype));
							ui4_1 = ti4_1;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5296, dtype))(Current, ur1x, ui4_1x);
						}
					} else {
						RTHOOK(21);
						tb1 = '\01';
						tb2 = '\0';
						uc1 = loc2;
						tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(705, dtype))(Current, uc1x)).it_b);
						if ((EIF_BOOLEAN) !tb3) {
							uc1 = loc2;
							tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(706, dtype))(Current, uc1x)).it_b);
							tb2 = (EIF_BOOLEAN) !tb3;
						}
						if (!tb2) {
							tb1 = (EIF_BOOLEAN)(loc2 == (EIF_CHARACTER_8) '\012');
						}
						if (tb1) {
							RTHOOK(22);
							RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
							loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
							RTHOOK(23);
							tr1 = RTMS_EX_H("Input string is not well formed JSON, found [",45,1899730011);
							tr2 = eif_out__c1_s1(loc2);
							ur1 = RTCCL(tr2);
							tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4900, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							tr1 = RTMS_EX_H("]",1,93);
							ur1 = tr1;
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4900, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							ur1 = RTCCL(tr1);
							ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(721, dtype));
							ui4_1 = ti4_1;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5296, dtype))(Current, ur1x, ui4_1x);
						} else {
							RTHOOK(24);
							uc1 = (EIF_CHARACTER_8) '\\';
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4938, "append_character", loc3))(loc3, uc1x);
							RTHOOK(25);
							uc1 = loc2;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4938, "append_character", loc3))(loc3, uc1x);
						}
					}
				} else {
					RTHOOK(26);
					tb1 = '\0';
					uc1 = loc2;
					tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(705, dtype))(Current, uc1x)).it_b);
					if (tb2) {
						tb1 = (EIF_BOOLEAN)(loc2 != (EIF_CHARACTER_8) '/');
					}
					if (tb1) {
						RTHOOK(27);
						RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
						loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						RTHOOK(28);
						tr1 = RTMS_EX_H("Input string is not well formed JSON, found [",45,1899730011);
						tr2 = eif_out__c1_s1(loc2);
						ur1 = RTCCL(tr2);
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4900, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tr1 = RTMS_EX_H("]",1,93);
						ur1 = tr1;
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4900, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr1);
						ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(721, dtype));
						ui4_1 = ti4_1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5296, dtype))(Current, ur1x, ui4_1x);
					} else {
						RTHOOK(29);
						if ((EIF_BOOLEAN)(loc2 == (EIF_CHARACTER_8) '\000')) {
							RTHOOK(30);
							uc1 = loc2;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4938, "append_character", loc3))(loc3, uc1x);
						} else {
							RTHOOK(31);
							uc1 = loc2;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4938, "append_character", loc3))(loc3, uc1x);
						}
					}
				}
			}
		}
		RTHOOK(32);
		RTDBGAL(0, 0xF800011B, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(283, 0x01).id);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5075, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(32,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(33);
		RTDBGAL(0, 0xF800011B, 0,0); /* Result */
		Result = (EIF_REFERENCE) NULL;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(34);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef uc1
}

/* {JSON_PARSER}.parse_array */
EIF_TYPED_VALUE F297_7004 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parse_array";
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,loc2);
	RTLR(4,ur1);
	RTLR(5,tr2);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_CHAR8, &loc3);
	
	RTEAA(l_feature_name, 296, Current, 3, 0, 13889);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(296, Current, 13889);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF800011C, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(284, 0x01).id);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5284, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5094, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(712, dtype))(Current);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(714, dtype))(Current);
	RTHOOK(4);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(720, dtype))(Current)).it_c1);
	tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(695, dtype))(Current)).it_c1);
	if ((EIF_BOOLEAN)(tc1 == tc2)) {
	} else {
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(713, dtype))(Current);
		RTHOOK(6);
		RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
		loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		for (;;) {
			RTHOOK(7);
			if ((EIF_BOOLEAN) !loc1) break;
			RTHOOK(8);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(712, dtype))(Current);
			RTHOOK(9);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(714, dtype))(Current);
			RTHOOK(10);
			RTDBGAL(2, 0xF8000119, 0, 0); /* loc2 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5301, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc2 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(11);
			tb1 = *(EIF_BOOLEAN *)(Current + RTWA(5280, dtype));
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !tb1 && (EIF_BOOLEAN)(loc2 != NULL))) {
				RTHOOK(12);
				ur1 = RTCCL(loc2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5102, "add", Result))(Result, ur1x);
				RTHOOK(13);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(712, dtype))(Current);
				RTHOOK(14);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(714, dtype))(Current);
				RTHOOK(15);
				RTDBGAL(3, 0x08000000, 1, 0); /* loc3 */
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(720, dtype))(Current)).it_c1);
				loc3 = (EIF_CHARACTER_8) tc1;
				RTHOOK(16);
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(695, dtype))(Current)).it_c1);
				if ((EIF_BOOLEAN)(loc3 == tc1)) {
					RTHOOK(17);
					RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
					loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				} else {
					RTHOOK(18);
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(701, dtype))(Current)).it_c1);
					if ((EIF_BOOLEAN)(loc3 != tc1)) {
						RTHOOK(19);
						RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
						loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						RTHOOK(20);
						tr1 = RTMS_EX_H("Array is not well formed JSON, found [",38,206143579);
						tr2 = eif_out__c1_s1(loc3);
						ur1 = RTCCL(tr2);
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4900, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tr1 = RTMS_EX_H("]",1,93);
						ur1 = tr1;
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4900, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr1);
						ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(721, dtype));
						ui4_1 = ti4_1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5296, dtype))(Current, ur1x, ui4_1x);
					}
				}
			} else {
				RTHOOK(21);
				RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
				loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				RTHOOK(22);
				tr1 = RTMS_EX_H("Array is not well formed JSON, found [",38,206143579);
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(720, dtype))(Current)).it_c1);
				RTNHOOK(22,1);
				tr2 = eif_out__c1_s1(tc1);
				ur1 = RTCCL(tr2);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4900, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr1 = RTMS_EX_H("]",1,93);
				ur1 = tr1;
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4900, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr1);
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(721, dtype));
				ui4_1 = ti4_1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5296, dtype))(Current, ur1x, ui4_1x);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
}

/* {JSON_PARSER}.next_json_number */
EIF_TYPED_VALUE F297_7005 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "next_json_number";
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Result);
	RTLR(5,tr2);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLU(SK_BOOL, &loc2);
	RTLU(SK_CHAR8, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 296, Current, 4, 0, 13890);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(296, Current, 13890);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(4, 0xF8000115, 0, 0); /* loc4 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5323, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4875, "wipe_out", loc4))(loc4);
	RTHOOK(3);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(720, dtype))(Current)).it_c1);
	uc1 = tc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4938, "append_character", loc4))(loc4, uc1x);
	RTHOOK(4);
	RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) !loc1) break;
		RTHOOK(6);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(712, dtype))(Current);
		RTHOOK(7);
		RTDBGAL(3, 0x08000000, 1, 0); /* loc3 */
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(720, dtype))(Current)).it_c1);
		loc3 = (EIF_CHARACTER_8) tc1;
		RTHOOK(8);
		tb1 = '\01';
		tb2 = '\01';
		tb3 = '\01';
		tb4 = '\01';
		tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(717, dtype))(Current)).it_b);
		if (!(EIF_BOOLEAN) !tb5) {
			uc1 = loc3;
			tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(704, dtype))(Current, uc1x)).it_b);
			tb4 = tb5;
		}
		if (!tb4) {
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(701, dtype))(Current)).it_c1);
			tb3 = (EIF_BOOLEAN)(loc3 == tc1);
		}
		if (!tb3) {
			tb2 = (EIF_BOOLEAN)(loc3 == (EIF_CHARACTER_8) '\012');
		}
		if (!tb2) {
			tb1 = (EIF_BOOLEAN)(loc3 == (EIF_CHARACTER_8) '\015');
		}
		if (tb1) {
			RTHOOK(9);
			RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
			loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(10);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(713, dtype))(Current);
		} else {
			RTHOOK(11);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(720, dtype))(Current)).it_c1);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4938, "append_character", loc4))(loc4, uc1x);
		}
	}
	RTHOOK(12);
	ur1 = RTCCL(loc4);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5310, dtype))(Current, ur1x)).it_b);
	if (tb1) {
		RTHOOK(13);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4781, "is_integer_64", loc4))(loc4)).it_b);
		if (tb1) {
			RTHOOK(14);
			RTDBGAL(0, 0xF800011F, 0,0); /* Result */
			tr1 = RTLN(eif_new_type(287, 0x01).id);
			ti8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4815, "to_integer_64", loc4))(loc4)).it_i8);
			ui8_1 = ti8_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5114, Dtype(tr1)))(tr1, ui8_1x);
			RTNHOOK(14,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(15);
			RTDBGAL(2, 0x04000000, 1, 0); /* loc2 */
			loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(16);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4774, "is_double", loc4))(loc4)).it_b);
			if (tb1) {
				RTHOOK(17);
				RTDBGAL(0, 0xF800011F, 0,0); /* Result */
				tr1 = RTLN(eif_new_type(287, 0x01).id);
				tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4823, "to_double", loc4))(loc4)).it_r8);
				ur8_1 = tr8_1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5116, Dtype(tr1)))(tr1, ur8_1x);
				RTNHOOK(17,1);
				Result = (EIF_REFERENCE) RTCCL(tr1);
			}
		}
	} else {
		RTHOOK(18);
		tr1 = RTMS_EX_H("Expected a number, found [",26,1659187803);
		ur1 = RTCCL(loc4);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4900, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H("]",1,93);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4900, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(721, dtype));
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5296, dtype))(Current, ur1x, ui4_1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur8_1
#undef ui8_1
#undef ui4_1
#undef uc1
}

/* {JSON_PARSER}.is_null */
EIF_TYPED_VALUE F297_7006 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_null";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 296, Current, 0, 0, 13891);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(296, Current, 13891);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5316, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 4L);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(716, dtype))(Current, ur1x, ui4_1x, ui4_2x)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
}

/* {JSON_PARSER}.is_false */
EIF_TYPED_VALUE F297_7007 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_false";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 296, Current, 0, 0, 13892);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(296, Current, 13892);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5314, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 5L);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(716, dtype))(Current, ur1x, ui4_1x, ui4_2x)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
}

/* {JSON_PARSER}.is_true */
EIF_TYPED_VALUE F297_7008 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_true";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 296, Current, 0, 0, 13893);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(296, Current, 13893);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5315, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 4L);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(716, dtype))(Current, ur1x, ui4_1x, ui4_2x)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
}

/* {JSON_PARSER}.read_unicode_info */
void F297_7009 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "read_unicode_info";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 296, Current, 1, 1, 13894);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(296, Current, 13894);
	RTCC(arg1, 296, l_feature_name, 1, eif_new_type(277, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(2);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 4L))) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(717, dtype))(Current)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(712, dtype))(Current);
		RTHOOK(4);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(720, dtype))(Current)).it_c1);
		uc1 = tc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4938, "append_character", arg1))(arg1, uc1x);
		RTHOOK(5);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef uc1
#undef arg1
}

/* {JSON_PARSER}.is_valid_number */
EIF_TYPED_VALUE F297_7010 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_valid_number";
	RTEX;
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc4);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_CHAR8, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 296, Current, 4, 1, 13895);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(296, Current, 13895);
	RTCC(arg1, 296, l_feature_name, 1, eif_new_type(277, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(4, 0xF8000115, 0, 0); /* loc4 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5324, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4875, "wipe_out", loc4))(loc4);
	RTHOOK(3);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4910, "count", arg1));
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(5);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		RTHOOK(6);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(7);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(8);
		RTDBGAL(1, 0x08000000, 1, 0); /* loc1 */
		ui4_1 = loc2;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3418, "item", arg1))(arg1, ui4_1x)).it_c1);
		loc1 = (EIF_CHARACTER_8) tc1;
		RTHOOK(9);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(698, dtype))(Current)).it_c1);
		if ((EIF_BOOLEAN)(loc1 == tc1)) {
			RTHOOK(10);
			uc1 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3162, "extend", loc4))(loc4, uc1x);
			RTHOOK(11);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2++;
			RTHOOK(12);
			if ((EIF_BOOLEAN) (loc2 > loc3)) {
				RTHOOK(13);
				RTDBGAL(0, 0x04000000, 1,0); /* Result */
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			} else {
				RTHOOK(14);
				RTDBGAL(1, 0x08000000, 1, 0); /* loc1 */
				ui4_1 = loc2;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3418, "item", arg1))(arg1, ui4_1x)).it_c1);
				loc1 = (EIF_CHARACTER_8) tc1;
			}
		}
		RTHOOK(15);
		tb1 = '\0';
		if (Result) {
			tb2 = EIF_TEST(isdigit(loc1));
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(16);
			if ((EIF_BOOLEAN)(loc1 == (EIF_CHARACTER_8) '0')) {
				RTHOOK(17);
				uc1 = loc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3162, "extend", loc4))(loc4, uc1x);
				RTHOOK(18);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2++;
				RTHOOK(19);
				if ((EIF_BOOLEAN) (loc2 <= loc3)) {
					RTHOOK(20);
					RTDBGAL(1, 0x08000000, 1, 0); /* loc1 */
					ui4_1 = loc2;
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3418, "item", arg1))(arg1, ui4_1x)).it_c1);
					loc1 = (EIF_CHARACTER_8) tc1;
				}
			} else {
				RTHOOK(21);
				uc1 = loc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3162, "extend", loc4))(loc4, uc1x);
				RTHOOK(22);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2++;
				RTHOOK(23);
				if ((EIF_BOOLEAN) (loc2 <= loc3)) {
					RTHOOK(24);
					RTDBGAL(1, 0x08000000, 1, 0); /* loc1 */
					ui4_1 = loc2;
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3418, "item", arg1))(arg1, ui4_1x)).it_c1);
					loc1 = (EIF_CHARACTER_8) tc1;
					for (;;) {
						RTHOOK(25);
						tb1 = '\01';
						if (!(EIF_BOOLEAN) (loc2 > loc3)) {
							tb2 = EIF_TEST(isdigit(loc1));
							tb1 = (EIF_BOOLEAN) !tb2;
						}
						if (tb1) break;
						RTHOOK(26);
						uc1 = loc1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3162, "extend", loc4))(loc4, uc1x);
						RTHOOK(27);
						RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
						loc2++;
						RTHOOK(28);
						if ((EIF_BOOLEAN) (loc2 <= loc3)) {
							RTHOOK(29);
							RTDBGAL(1, 0x08000000, 1, 0); /* loc1 */
							ui4_1 = loc2;
							tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3418, "item", arg1))(arg1, ui4_1x)).it_c1);
							loc1 = (EIF_CHARACTER_8) tc1;
						}
					}
				}
			}
		}
	}
	RTHOOK(30);
	if ((EIF_BOOLEAN) (loc2 > loc3)) {
	} else {
		RTHOOK(31);
		if (Result) {
			RTHOOK(32);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(699, dtype))(Current)).it_c1);
			if ((EIF_BOOLEAN)(loc1 == tc1)) {
				RTHOOK(33);
				uc1 = loc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3162, "extend", loc4))(loc4, uc1x);
				RTHOOK(34);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2++;
				RTHOOK(35);
				RTDBGAL(1, 0x08000000, 1, 0); /* loc1 */
				ui4_1 = loc2;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3418, "item", arg1))(arg1, ui4_1x)).it_c1);
				loc1 = (EIF_CHARACTER_8) tc1;
				RTHOOK(36);
				tb2 = EIF_TEST(isdigit(loc1));
				if (tb2) {
					for (;;) {
						RTHOOK(37);
						tb2 = '\01';
						if (!(EIF_BOOLEAN) (loc2 > loc3)) {
							tb3 = EIF_TEST(isdigit(loc1));
							tb2 = (EIF_BOOLEAN) !tb3;
						}
						if (tb2) break;
						RTHOOK(38);
						uc1 = loc1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3162, "extend", loc4))(loc4, uc1x);
						RTHOOK(39);
						RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
						loc2++;
						RTHOOK(40);
						if ((EIF_BOOLEAN) (loc2 <= loc3)) {
							RTHOOK(41);
							RTDBGAL(1, 0x08000000, 1, 0); /* loc1 */
							ui4_1 = loc2;
							tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3418, "item", arg1))(arg1, ui4_1x)).it_c1);
							loc1 = (EIF_CHARACTER_8) tc1;
						}
					}
				} else {
					RTHOOK(42);
					RTDBGAL(0, 0x04000000, 1,0); /* Result */
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				}
			}
		}
		RTHOOK(43);
		if (Result) {
			RTHOOK(44);
			uc1 = loc1;
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(707, dtype))(Current, uc1x)).it_b);
			if (tb3) {
				RTHOOK(45);
				uc1 = loc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3162, "extend", loc4))(loc4, uc1x);
				RTHOOK(46);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2++;
				RTHOOK(47);
				RTDBGAL(1, 0x08000000, 1, 0); /* loc1 */
				ui4_1 = loc2;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3418, "item", arg1))(arg1, ui4_1x)).it_c1);
				loc1 = (EIF_CHARACTER_8) tc1;
				RTHOOK(48);
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(697, dtype))(Current)).it_c1);
				tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(698, dtype))(Current)).it_c1);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == tc1) || (EIF_BOOLEAN)(loc1 == tc2))) {
					RTHOOK(49);
					uc1 = loc1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3162, "extend", loc4))(loc4, uc1x);
					RTHOOK(50);
					RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
					loc2++;
					RTHOOK(51);
					if ((EIF_BOOLEAN) (loc2 <= loc3)) {
						RTHOOK(52);
						RTDBGAL(1, 0x08000000, 1, 0); /* loc1 */
						ui4_1 = loc2;
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3418, "item", arg1))(arg1, ui4_1x)).it_c1);
						loc1 = (EIF_CHARACTER_8) tc1;
					}
				}
				RTHOOK(53);
				tb3 = EIF_TEST(isdigit(loc1));
				if (tb3) {
					for (;;) {
						RTHOOK(54);
						tb3 = '\01';
						if (!(EIF_BOOLEAN) (loc2 > loc3)) {
							tb4 = EIF_TEST(isdigit(loc1));
							tb3 = (EIF_BOOLEAN) !tb4;
						}
						if (tb3) break;
						RTHOOK(55);
						uc1 = loc1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3162, "extend", loc4))(loc4, uc1x);
						RTHOOK(56);
						RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
						loc2++;
						RTHOOK(57);
						if ((EIF_BOOLEAN) (loc2 <= loc3)) {
							RTHOOK(58);
							RTDBGAL(1, 0x08000000, 1, 0); /* loc1 */
							ui4_1 = loc2;
							tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3418, "item", arg1))(arg1, ui4_1x)).it_c1);
							loc1 = (EIF_CHARACTER_8) tc1;
						}
					}
				} else {
					RTHOOK(59);
					RTDBGAL(0, 0x04000000, 1,0); /* Result */
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				}
			}
		}
		RTHOOK(60);
		if (Result) {
			for (;;) {
				RTHOOK(61);
				tb4 = '\01';
				if (!(EIF_BOOLEAN) (loc2 > loc3)) {
					tb5 = eif_builtin_CHARACTER_8_is_space__c1_b(loc1);
					tb4 = (EIF_BOOLEAN) !tb5;
				}
				if (tb4) break;
				RTHOOK(62);
				uc1 = loc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3162, "extend", loc4))(loc4, uc1x);
				RTHOOK(63);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2++;
				RTHOOK(64);
				if ((EIF_BOOLEAN) (loc2 <= loc3)) {
					RTHOOK(65);
					RTDBGAL(1, 0x08000000, 1, 0); /* loc1 */
					ui4_1 = loc2;
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3418, "item", arg1))(arg1, ui4_1x)).it_c1);
					loc1 = (EIF_CHARACTER_8) tc1;
				}
			}
			RTHOOK(66);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			tb5 = '\0';
			if ((EIF_BOOLEAN) (loc2 > loc3)) {
				ur1 = RTCCL(arg1);
				tb6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4895, "same_string", loc4))(loc4, ur1x)).it_b);
				tb5 = tb6;
			}
			Result = (EIF_BOOLEAN) tb5;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(67);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef uc1
#undef arg1
}

/* {JSON_PARSER}.is_substring_valid_unicode */
EIF_TYPED_VALUE F297_7011 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "is_substring_valid_unicode";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 296, Current, 1, 3, 13896);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(296, Current, 13896);
	RTCC(arg1, 296, l_feature_name, 1, eif_new_type(277, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tb2 = '\0';
	if ((EIF_BOOLEAN)((EIF_INTEGER_32) (arg3 - arg2) == ((EIF_INTEGER_32) 5L))) {
		ui4_1 = arg2;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3418, "item", arg1))(arg1, ui4_1x)).it_c1);
		tb2 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\\');
	}
	if (tb2) {
		ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3418, "item", arg1))(arg1, ui4_1x)).it_c1);
		tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) 'u');
	}
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(3);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 2L));
		for (;;) {
			RTHOOK(4);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > arg3) || (EIF_BOOLEAN)(Result == (EIF_BOOLEAN) 0))) break;
			RTHOOK(5);
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3418, "item", arg1))(arg1, ui4_1x)).it_c1);
			switch (tc1) {
				case (EIF_CHARACTER_8) '0':
				case (EIF_CHARACTER_8) '1':
				case (EIF_CHARACTER_8) '2':
				case (EIF_CHARACTER_8) '3':
				case (EIF_CHARACTER_8) '4':
				case (EIF_CHARACTER_8) '5':
				case (EIF_CHARACTER_8) '6':
				case (EIF_CHARACTER_8) '7':
				case (EIF_CHARACTER_8) '8':
				case (EIF_CHARACTER_8) '9':
				case (EIF_CHARACTER_8) 'A':
				case (EIF_CHARACTER_8) 'B':
				case (EIF_CHARACTER_8) 'C':
				case (EIF_CHARACTER_8) 'D':
				case (EIF_CHARACTER_8) 'E':
				case (EIF_CHARACTER_8) 'F':
				case (EIF_CHARACTER_8) 'a':
				case (EIF_CHARACTER_8) 'b':
				case (EIF_CHARACTER_8) 'c':
				case (EIF_CHARACTER_8) 'd':
				case (EIF_CHARACTER_8) 'e':
				case (EIF_CHARACTER_8) 'f':
					break;
				default:
					RTHOOK(6);
					RTDBGAL(0, 0x04000000, 1,0); /* Result */
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					break;
			}
			RTHOOK(7);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {JSON_PARSER}.extra_elements */
EIF_TYPED_VALUE F297_7012 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "extra_elements";
	RTEX;
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_CHAR8, &loc1);
	
	RTEAA(l_feature_name, 296, Current, 1, 0, 13897);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(296, Current, 13897);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(717, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(712, dtype))(Current);
	}
	RTHOOK(3);
	RTDBGAL(1, 0x08000000, 1, 0); /* loc1 */
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(720, dtype))(Current)).it_c1);
	loc1 = (EIF_CHARACTER_8) tc1;
	for (;;) {
		RTHOOK(4);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 != (EIF_CHARACTER_8) ' ') || (EIF_BOOLEAN)(loc1 != (EIF_CHARACTER_8) '\015')) || (EIF_BOOLEAN)(loc1 != (EIF_CHARACTER_8) '\000')) || (EIF_BOOLEAN)(loc1 != (EIF_CHARACTER_8) '\011')) || (EIF_BOOLEAN)(loc1 != (EIF_CHARACTER_8) '\012'))) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(717, dtype))(Current)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(712, dtype))(Current);
		RTHOOK(6);
		RTDBGAL(1, 0x08000000, 1, 0); /* loc1 */
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(720, dtype))(Current)).it_c1);
		loc1 = (EIF_CHARACTER_8) tc1;
	}
	RTHOOK(7);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(717, dtype))(Current)).it_b);
	Result = (EIF_BOOLEAN) tb2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {JSON_PARSER}.is_valid_start_symbol */
EIF_TYPED_VALUE F297_7013 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_valid_start_symbol";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 296, Current, 1, 0, 13898);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(296, Current, 13898);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(719, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(4910, "count", loc1));
		tb1 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
	}
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		tb1 = '\01';
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3418, "item", loc1))(loc1, ui4_1x)).it_c1);
		tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(692, dtype))(Current)).it_c1);
		if (!(EIF_BOOLEAN)(tc1 == tc2)) {
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3418, "item", loc1))(loc1, ui4_1x)).it_c1);
			tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(694, dtype))(Current)).it_c1);
			tb1 = (EIF_BOOLEAN)(tc1 == tc2);
		}
		Result = (EIF_BOOLEAN) tb1;
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
#undef up1
#undef ui4_1
}

/* {JSON_PARSER}.false_id */
RTOID (F297_7014)


EIF_TYPED_VALUE F297_7014 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F297_7014,13900,RTMS_EX_H("false",5,1635280741));
}

/* {JSON_PARSER}.true_id */
RTOID (F297_7015)


EIF_TYPED_VALUE F297_7015 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F297_7015,13901,RTMS_EX_H("true",4,1953658213));
}

/* {JSON_PARSER}.null_id */
RTOID (F297_7016)


EIF_TYPED_VALUE F297_7016 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F297_7016,13902,RTMS_EX_H("null",4,1853189228));
}

/* {JSON_PARSER}.false_value */
EIF_TYPED_VALUE F297_7017 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5317,Dtype(Current)));
	return r;
}


/* {JSON_PARSER}.true_value */
EIF_TYPED_VALUE F297_7018 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5318,Dtype(Current)));
	return r;
}


/* {JSON_PARSER}.null_value */
EIF_TYPED_VALUE F297_7019 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5319,Dtype(Current)));
	return r;
}


/* {JSON_PARSER}.initialize_buffers */
void F297_7020 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "initialize_buffers";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 296, Current, 0, 0, 13905);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(296, Current, 13905);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5322, 0xF8000115, 0); /* buffer_json_string */
	tr1 = RTLNSMART(RTWCT(5322, dtype, Dftype(Current)).id);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(719, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVA(4910, "count", tr2));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5288, dtype))(Current)).it_i4);
	ui4_1 = ti4_2;
	ti4_3 = eif_min_int32 (ti4_1,ui4_1);
	ui4_1 = ti4_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4748, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,2);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5322, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5323, 0xF8000115, 0); /* buffer_json_number */
	tr1 = RTLNSMART(RTWCT(5323, dtype, Dftype(Current)).id);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5289, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4748, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5323, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 5324, 0xF8000115, 0); /* buffer_is_number */
	tr1 = RTLNSMART(RTWCT(5324, dtype, Dftype(Current)).id);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5289, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4748, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5324, dtype)) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ui4_1
}

/* {JSON_PARSER}.free_buffers */
void F297_7021 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "free_buffers";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 296, Current, 1, 0, 13906);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(296, Current, 13906);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000115, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(277, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4749, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5322, 0xF8000115, 0); /* buffer_json_string */
	tr1 = RTCCL(loc1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5322, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 5323, 0xF8000115, 0); /* buffer_json_number */
	tr1 = RTCCL(loc1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5323, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 5324, 0xF8000115, 0); /* buffer_is_number */
	tr1 = RTCCL(loc1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5324, dtype)) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
}

/* {JSON_PARSER}.buffer_json_string */
EIF_TYPED_VALUE F297_7022 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5322,Dtype(Current)));
	return r;
}


/* {JSON_PARSER}.buffer_json_number */
EIF_TYPED_VALUE F297_7023 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5323,Dtype(Current)));
	return r;
}


/* {JSON_PARSER}.buffer_is_number */
EIF_TYPED_VALUE F297_7024 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5324,Dtype(Current)));
	return r;
}


void EIF_Minit297 (void)
{
	GTCX
	RTOTS (7014,F297_7014)
	RTOTS (7015,F297_7015)
	RTOTS (7016,F297_7016)
}


#ifdef __cplusplus
}
#endif

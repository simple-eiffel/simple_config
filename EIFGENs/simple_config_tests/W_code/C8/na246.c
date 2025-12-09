/*
 * Code for class NATURAL_16_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F246_5394(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5395(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5396(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5397(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5398(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5399(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5400(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5401(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5402(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F246_5403(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F246_5404(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F246_5405(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F246_5406(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F246_5407(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5408(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5409(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5410(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5411(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F246_5412(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F246_5413(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F246_5414(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F246_5415(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5416(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5417(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F246_5418(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F246_5419(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F246_5420(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F246_5421(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F246_5422(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5423(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5424(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5425(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5426(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5427(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5428(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5429(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5430(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5431(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5432(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5433(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5434(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5435(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5436(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5437(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5438(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5439(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5440(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5441(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5442(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5443(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5444(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5445(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5446(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5447(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5448(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5449(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5450(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5451(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F246_5452(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F246_5453(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F246_5454(EIF_REFERENCE);
extern EIF_TYPED_VALUE F246_5455(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F246_5456(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F246_5457(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F246_5458(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F246_5459(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F246_5460(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F246_5461(EIF_REFERENCE);
extern void EIF_Minit246(void);

#ifdef __cplusplus
}
#endif

#include <math.h>
#include "eif_helpers.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {NATURAL_16_REF}.item */
EIF_TYPED_VALUE F246_5394 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT16;
	r.it_n2 = *(EIF_NATURAL_16 *)(Current + RTWA(4288,Dtype(Current)));
	return r;
}


/* {NATURAL_16_REF}.hash_code */
EIF_TYPED_VALUE F246_5395 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "hash_code";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_16 tu2_1;
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
	
	RTEAA(l_feature_name, 245, Current, 0, 0, 12118);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12118);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	ti4_1 = (EIF_INTEGER_32) tu2_1;
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("good_hash_value", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {NATURAL_16_REF}.sign */
EIF_TYPED_VALUE F246_5396 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sign";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 0, 12119);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12119);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	if ((EIF_BOOLEAN) (tu2_1 > (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("three_way", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3870, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2011, dtype))(Current, ur1x)).it_i4);
		if ((EIF_BOOLEAN)(Result == ti4_1)) {
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
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ur1
}

/* {NATURAL_16_REF}.one */
EIF_TYPED_VALUE F246_5397 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "one";
	RTEX;
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
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
	
	RTEAA(l_feature_name, 245, Current, 0, 0, 12120);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12120);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000F5, 0,0); /* Result */
	tr1 = RTLNSMART(Dftype(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	uu2_1 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4293, "set_item", Result))(Result, uu2_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef uu2_1
}

/* {NATURAL_16_REF}.zero */
EIF_TYPED_VALUE F246_5398 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "zero";
	RTEX;
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
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
	
	RTEAA(l_feature_name, 245, Current, 0, 0, 12121);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12121);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000F5, 0,0); /* Result */
	tr1 = RTLNSMART(Dftype(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	uu2_1 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4293, "set_item", Result))(Result, uu2_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef uu2_1
}

/* {NATURAL_16_REF}.ascii_char */
EIF_TYPED_VALUE F246_5399 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "ascii_char";
	RTEX;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_CHAR8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 0, 12122);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12122);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_character_code", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4295, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x08000000, 1,0); /* Result */
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	tc1 = (EIF_CHARACTER_8) tu2_1;
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
}

/* {NATURAL_16_REF}.min_value */
EIF_TYPED_VALUE F246_5400 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT16;
	r.it_n2 = (EIF_NATURAL_16) ((EIF_NATURAL_16) 0U);
	return r;
}

/* {NATURAL_16_REF}.max_value */
EIF_TYPED_VALUE F246_5401 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT16;
	r.it_n2 = (EIF_NATURAL_16) ((EIF_NATURAL_16) 65535U);
	return r;
}

/* {NATURAL_16_REF}.is_less */
EIF_TYPED_VALUE F246_5402 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_less";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 1, 12125);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12125);
	RTCC(arg1, 245, l_feature_name, 1, eif_new_type(245, 0x01),0);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	tu2_2 = *(EIF_NATURAL_16 *)(arg1 + RTVA(4288, "item", arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu2_1 < tu2_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("asymmetric", EX_POST);
		tb1 = '\01';
		if (Result) {
			ur1 = RTCCL(Current);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1924, "is_less", arg1))(arg1, ur1x)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
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
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef arg1
}

/* {NATURAL_16_REF}.is_equal */
EIF_TYPED_VALUE F246_5403 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_equal";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 1, 12126);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12126);
	RTCC(arg1, 245, l_feature_name, 1, eif_new_type(245, 0x01),0);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tu2_1 = *(EIF_NATURAL_16 *)(arg1 + RTVA(4288, "item", arg1));
	tu2_2 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu2_1 == tu2_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("symmetric", EX_POST);
		if ((!(Result) || (RTEQ(arg1, Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("consistent", EX_POST);
		tb1 = '\01';
		ur1 = RTCCL(arg1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12, dtype))(Current, ur1x)).it_b);
		if (tb2) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("trichotomy", EX_POST);
		tb1 = '\0';
		ur1 = RTCCL(arg1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1924, "is_less", Current))(Current, ur1x)).it_b);
		if ((EIF_BOOLEAN) !tb2) {
			ur1 = RTCCL(Current);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1924, "is_less", arg1))(arg1, ur1x)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef arg1
}

/* {NATURAL_16_REF}.set_item */
void F246_5404 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_item";
	RTEX;
#define arg1 arg1x.it_n2
	EIF_NATURAL_16 tu2_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n2 = * (EIF_NATURAL_16 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT16,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 1, 12127);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12127);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 4288, 0x34000000, 1); /* item */
	*(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype)) = (EIF_NATURAL_16) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("item_set", EX_POST);
		tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
		if ((EIF_BOOLEAN)(tu2_1 == arg1)) {
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
	RTLO(3);
	RTEE;
#undef arg1
}

/* {NATURAL_16_REF}.divisible */
EIF_TYPED_VALUE F246_5405 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "divisible";
	RTEX;
#define arg1 arg1x.it_r
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 1, 12128);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12128);
	RTCC(arg1, 245, l_feature_name, 1, eif_new_type(245, 0x01),0);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tu2_1 = *(EIF_NATURAL_16 *)(arg1 + RTVA(4288, "item", arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu2_1 != (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("value", EX_POST);
		tu2_1 = *(EIF_NATURAL_16 *)(arg1 + RTVA(4288, "item", arg1));
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN)(tu2_1 != (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L)))) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {NATURAL_16_REF}.exponentiable */
EIF_TYPED_VALUE F246_5406 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "exponentiable";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REAL_64 tr8_1;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 245, Current, 3, 1, 12129);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12129);
	RTCC(arg1, 245, l_feature_name, 1, eif_new_type(225, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTCCL(arg1);
	loc1 = RTRV(eif_new_type(251, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(4396, "item", loc1));
		if (!(EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
			tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
			tb1 = (EIF_BOOLEAN)(tu2_1 != (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L));
		}
		Result = (EIF_BOOLEAN) tb1;
	} else {
		RTHOOK(4);
		loc2 = RTCCL(arg1);
		loc2 = RTRV(eif_new_type(233, 0x01),loc2);
		if (EIF_TEST(loc2)) {
			RTHOOK(5);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			tb1 = '\01';
			tr4_1 = *(EIF_REAL_32 *)(loc2 + RTVA(4143, "item", loc2));
			if (!((EIF_BOOLEAN) eif_is_greater_equal_real_32 (tr4_1, (EIF_REAL_32) (EIF_REAL_64) 0.0))) {
				tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
				tb1 = (EIF_BOOLEAN)(tu2_1 != (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L));
			}
			Result = (EIF_BOOLEAN) tb1;
		} else {
			RTHOOK(6);
			loc3 = RTCCL(arg1);
			loc3 = RTRV(eif_new_type(236, 0x01),loc3);
			if (EIF_TEST(loc3)) {
				RTHOOK(7);
				RTDBGAL(0, 0x04000000, 1,0); /* Result */
				tb1 = '\01';
				tr8_1 = *(EIF_REAL_64 *)(loc3 + RTVA(4177, "item", loc3));
				if (!(EIF_BOOLEAN) eif_is_greater_equal_real_64 (tr8_1, (EIF_REAL_64) 0.0)) {
					tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
					tb1 = (EIF_BOOLEAN)(tu2_1 != (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L));
				}
				Result = (EIF_BOOLEAN) tb1;
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("safe_values", EX_POST);
		tb1 = '\01';
		tb2 = '\01';
		tb3 = '\0';
		ur1 = RTLN(eif_new_type(252, 0x00).id);
		*(EIF_INTEGER_32 *)ur1 = ((EIF_INTEGER_32) 0L);
		tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9, "conforms_to", arg1))(arg1, ur1x)).it_b);
		if (tb4) {
			tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
			tb3 = (EIF_BOOLEAN)(tu2_1 != (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L));
		}
		if (!tb3) {
			tb3 = '\0';
			ur1 = RTLN(eif_new_type(237, 0x00).id);
			*(EIF_REAL_64 *)ur1 = (EIF_REAL_64) 0.0;
			tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9, "conforms_to", arg1))(arg1, ur1x)).it_b);
			if (tb4) {
				tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
				tb3 = (EIF_BOOLEAN) (tu2_1 > (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L));
			}
			tb2 = tb3;
		}
		if (tb2) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef arg1
}

/* {NATURAL_16_REF}.is_hashable */
EIF_TYPED_VALUE F246_5407 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_hashable";
	RTEX;
	EIF_NATURAL_16 tu2_1;
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
	
	RTEAA(l_feature_name, 245, Current, 0, 0, 12130);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12130);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu2_1 != (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L));
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

/* {NATURAL_16_REF}.is_valid_character_code */
EIF_TYPED_VALUE F246_5408 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_valid_character_code";
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
	
	RTEAA(l_feature_name, 245, Current, 0, 0, 12131);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12131);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4295, dtype))(Current)).it_b);
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
}

/* {NATURAL_16_REF}.is_valid_character_8_code */
EIF_TYPED_VALUE F246_5409 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_valid_character_8_code";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 0, 12132);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12132);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	ti4_1 = (EIF_INTEGER_32) tu2_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4215, 240))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 <= ti4_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("in_bounds", EX_POST);
		tb1 = '\0';
		tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
		ti4_1 = (EIF_INTEGER_32) tu2_1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4214, 240))(Current)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 >= ti4_2)) {
			tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
			ti4_1 = (EIF_INTEGER_32) tu2_1;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4215, 240))(Current)).it_i4);
			tb1 = (EIF_BOOLEAN) (ti4_1 <= ti4_2);
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {NATURAL_16_REF}.is_valid_character_32_code */
EIF_TYPED_VALUE F246_5410 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_valid_character_32_code";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 0, 12133);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12133);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("in_bounds", EX_POST);
		tb1 = '\0';
		tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
		tu4_1 = (EIF_NATURAL_32) tu2_1;
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4258, 243))(Current)).it_n4);
		if ((EIF_BOOLEAN) (tu4_1 >= tu4_2)) {
			tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
			tu4_1 = (EIF_NATURAL_32) tu2_1;
			tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4259, 243))(Current)).it_n4);
			tb1 = (EIF_BOOLEAN) (tu4_1 <= tu4_2);
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {NATURAL_16_REF}.plus */
EIF_TYPED_VALUE F246_5411 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "plus";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 1, 12134);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12134);
	RTCC(arg1, 245, l_feature_name, 1, eif_new_type(245, 0x01),0);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF80000F5, 0,0); /* Result */
	tr1 = RTLNSMART(Dftype(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	tu2_2 = *(EIF_NATURAL_16 *)(arg1 + RTVA(4288, "item", arg1));
	uu2_1 = (EIF_NATURAL_16) (tu2_1 + tu2_2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4293, "set_item", Result))(Result, uu2_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("commutative", EX_POST);
		ur1 = RTCCL(Current);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3873, "plus", arg1))(arg1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTEQ(Result, tr1)) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef uu2_1
#undef arg1
}

/* {NATURAL_16_REF}.minus */
EIF_TYPED_VALUE F246_5412 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "minus";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 1, 12135);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12135);
	RTCC(arg1, 245, l_feature_name, 1, eif_new_type(245, 0x01),0);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF80000F5, 0,0); /* Result */
	tr1 = RTLNSMART(Dftype(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	tu2_2 = *(EIF_NATURAL_16 *)(arg1 + RTVA(4288, "item", arg1));
	uu2_1 = (EIF_NATURAL_16) (tu2_1 - tu2_2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4293, "set_item", Result))(Result, uu2_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef uu2_1
#undef arg1
}

/* {NATURAL_16_REF}.product */
EIF_TYPED_VALUE F246_5413 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "product";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 1, 12136);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12136);
	RTCC(arg1, 245, l_feature_name, 1, eif_new_type(245, 0x01),0);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF80000F5, 0,0); /* Result */
	tr1 = RTLNSMART(Dftype(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	tu2_2 = *(EIF_NATURAL_16 *)(arg1 + RTVA(4288, "item", arg1));
	uu2_1 = (EIF_NATURAL_16) (tu2_1 * tu2_2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4293, "set_item", Result))(Result, uu2_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef uu2_1
#undef arg1
}

/* {NATURAL_16_REF}.quotient */
EIF_TYPED_VALUE F246_5414 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "quotient";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_BOOLEAN tb1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 1, 12137);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12137);
	RTCC(arg1, 245, l_feature_name, 1, eif_new_type(245, 0x01),0);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("good_divisor", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3871, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	tu2_2 = *(EIF_NATURAL_16 *)(arg1 + RTVA(4288, "item", arg1));
	Result = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (tu2_1) /  (EIF_REAL_64) (tu2_2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef ur1
#undef arg1
}

/* {NATURAL_16_REF}.identity */
EIF_TYPED_VALUE F246_5415 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "identity";
	RTEX;
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 tu2_1;
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
	
	RTEAA(l_feature_name, 245, Current, 0, 0, 12138);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12138);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000F5, 0,0); /* Result */
	tr1 = RTLNSMART(Dftype(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	uu2_1 = (EIF_NATURAL_16) tu2_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4293, "set_item", Result))(Result, uu2_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef uu2_1
}

/* {NATURAL_16_REF}.unapplicable_opposite */
EIF_TYPED_VALUE F246_5416 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "unapplicable_opposite";
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 0, 12139);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12139);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000F5, 0,0); /* Result */
	Result = (EIF_REFERENCE) RTCCL(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("not_applicable", EX_POST);
			RTCF;
	}
	RTEC (EN_POST);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
}

/* {NATURAL_16_REF}.integer_quotient */
EIF_TYPED_VALUE F246_5417 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "integer_quotient";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 1, 12140);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12140);
	RTCC(arg1, 245, l_feature_name, 1, eif_new_type(245, 0x01),0);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("good_divisor", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3871, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0xF80000F5, 0,0); /* Result */
	tr1 = RTLNSMART(Dftype(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(3,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	tu2_2 = *(EIF_NATURAL_16 *)(arg1 + RTVA(4288, "item", arg1));
	uu2_1 = (EIF_NATURAL_16) (tu2_1 / tu2_2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4293, "set_item", Result))(Result, uu2_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef uu2_1
#undef arg1
}

/* {NATURAL_16_REF}.integer_remainder */
EIF_TYPED_VALUE F246_5418 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "integer_remainder";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 1, 12141);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12141);
	RTCC(arg1, 245, l_feature_name, 1, eif_new_type(245, 0x01),0);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("good_divisor", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3871, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0xF80000F5, 0,0); /* Result */
	tr1 = RTLNSMART(Dftype(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(3,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	tu2_2 = *(EIF_NATURAL_16 *)(arg1 + RTVA(4288, "item", arg1));
	uu2_1 = (EIF_NATURAL_16) (tu2_1 % tu2_2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4293, "set_item", Result))(Result, uu2_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef uu2_1
#undef arg1
}

/* {NATURAL_16_REF}.power */
EIF_TYPED_VALUE F246_5419 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "power";
	RTEX;
#define arg1 arg1x.it_r8
	EIF_NATURAL_16 tu2_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 1, 12142);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12142);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	Result = (EIF_REAL_64) (EIF_REAL_64) pow ((EIF_REAL_64) (tu2_1), (EIF_REAL_64) (arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef arg1
}

/* {NATURAL_16_REF}.interval */
EIF_TYPED_VALUE F246_5420 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "interval";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 1, 12143);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12143);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000D4, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(212, 0x01).id);
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	ti4_1 = (EIF_INTEGER_32) tu2_1;
	ui4_1 = ti4_1;
	ui4_2 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3424, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {NATURAL_16_REF}.make_from_reference */
void F246_5421 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_from_reference";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
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
	
	RTEAA(l_feature_name, 245, Current, 0, 1, 12144);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12144);
	RTCC(arg1, 245, l_feature_name, 1, eif_new_type(245, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("v_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu2_1 = *(EIF_NATURAL_16 *)(arg1 + RTVA(4288, "item", arg1));
	uu2_1 = tu2_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4293, dtype))(Current, uu2_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("item_set", EX_POST);
		tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
		tu2_2 = *(EIF_NATURAL_16 *)(arg1 + RTVA(4288, "item", arg1));
		if ((EIF_BOOLEAN)(tu2_1 == tu2_2)) {
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
#undef uu2_1
#undef arg1
}

/* {NATURAL_16_REF}.to_reference */
EIF_TYPED_VALUE F246_5422 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_reference";
	RTEX;
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 tu2_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 0, 12145);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12145);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000F5, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(245, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	uu2_1 = tu2_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4293, "set_item", Result))(Result, uu2_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("to_reference_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef uu2_1
}

/* {NATURAL_16_REF}.to_boolean */
EIF_TYPED_VALUE F246_5423 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_boolean";
	RTEX;
	EIF_NATURAL_16 tu2_1;
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
	
	RTEAA(l_feature_name, 245, Current, 0, 0, 12146);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12146);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu2_1 != (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L));
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

/* {NATURAL_16_REF}.as_natural_8 */
EIF_TYPED_VALUE F246_5424 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "as_natural_8";
	RTEX;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 0, 12147);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12147);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x30000000, 1,0); /* Result */
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	tu1_1 = (EIF_NATURAL_8) tu2_1;
	Result = (EIF_NATURAL_8) tu1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT8; r.it_n1 = Result; return r; }
}

/* {NATURAL_16_REF}.as_natural_16 */
EIF_TYPED_VALUE F246_5425 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "as_natural_16";
	RTEX;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT16, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 0, 12148);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12148);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x34000000, 1,0); /* Result */
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	tu2_2 = (EIF_NATURAL_16) tu2_1;
	Result = (EIF_NATURAL_16) tu2_2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT16; r.it_n2 = Result; return r; }
}

/* {NATURAL_16_REF}.as_natural_32 */
EIF_TYPED_VALUE F246_5426 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "as_natural_32";
	RTEX;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 0, 12149);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12149);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	tu4_1 = (EIF_NATURAL_32) tu2_1;
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
}

/* {NATURAL_16_REF}.as_natural_64 */
EIF_TYPED_VALUE F246_5427 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "as_natural_64";
	RTEX;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT64, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 0, 12150);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12150);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x3C000000, 1,0); /* Result */
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	tu8_1 = (EIF_NATURAL_64) tu2_1;
	Result = (EIF_NATURAL_64) tu8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT64; r.it_n8 = Result; return r; }
}

/* {NATURAL_16_REF}.as_integer_8 */
EIF_TYPED_VALUE F246_5428 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "as_integer_8";
	RTEX;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 0, 12151);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12151);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x0C000000, 1,0); /* Result */
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	ti1_1 = (EIF_INTEGER_8) tu2_1;
	Result = (EIF_INTEGER_8) ti1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT8; r.it_i1 = Result; return r; }
}

/* {NATURAL_16_REF}.as_integer_16 */
EIF_TYPED_VALUE F246_5429 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "as_integer_16";
	RTEX;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT16, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 0, 12152);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12152);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x14000000, 1,0); /* Result */
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	ti2_1 = (EIF_INTEGER_16) tu2_1;
	Result = (EIF_INTEGER_16) ti2_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT16; r.it_i2 = Result; return r; }
}

/* {NATURAL_16_REF}.as_integer_32 */
EIF_TYPED_VALUE F246_5430 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "as_integer_32";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_16 tu2_1;
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
	
	RTEAA(l_feature_name, 245, Current, 0, 0, 12153);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12153);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	ti4_1 = (EIF_INTEGER_32) tu2_1;
	Result = (EIF_INTEGER_32) ti4_1;
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

/* {NATURAL_16_REF}.as_integer_64 */
EIF_TYPED_VALUE F246_5431 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "as_integer_64";
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT64, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 0, 12154);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12154);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x24000000, 1,0); /* Result */
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	ti8_1 = (EIF_INTEGER_64) tu2_1;
	Result = (EIF_INTEGER_64) ti8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT64; r.it_i8 = Result; return r; }
}

/* {NATURAL_16_REF}.to_natural_8 */
EIF_TYPED_VALUE F246_5432 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_natural_8";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_UINT8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 0, 12155);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12155);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_too_big", EX_PRE);
		tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4094, 231))(Current)).it_n1);
		tu2_2 = (EIF_NATURAL_16) tu1_1;
		RTTE((EIF_BOOLEAN) (tu2_1 <= tu2_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x30000000, 1,0); /* Result */
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4304, dtype))(Current)).it_n1);
	Result = (EIF_NATURAL_8) tu1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT8; r.it_n1 = Result; return r; }
}

/* {NATURAL_16_REF}.to_natural_16 */
EIF_TYPED_VALUE F246_5433 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_natural_16";
	RTEX;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT16, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 0, 12156);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12156);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x34000000, 1,0); /* Result */
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	Result = (EIF_NATURAL_16) tu2_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT16; r.it_n2 = Result; return r; }
}

/* {NATURAL_16_REF}.to_natural_32 */
EIF_TYPED_VALUE F246_5434 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_natural_32";
	RTEX;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 0, 12157);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12157);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4306, dtype))(Current)).it_n4);
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
}

/* {NATURAL_16_REF}.to_natural_64 */
EIF_TYPED_VALUE F246_5435 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_natural_64";
	RTEX;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT64, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 0, 12158);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12158);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x3C000000, 1,0); /* Result */
	tu8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4307, dtype))(Current)).it_n8);
	Result = (EIF_NATURAL_64) tu8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT64; r.it_n8 = Result; return r; }
}

/* {NATURAL_16_REF}.to_integer_8 */
EIF_TYPED_VALUE F246_5436 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_integer_8";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 0, 12159);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12159);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_too_big", EX_PRE);
		tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
		ti1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4512, 258))(Current)).it_i1);
		tu2_2 = (EIF_NATURAL_16) ti1_1;
		RTTE((EIF_BOOLEAN) (tu2_1 <= tu2_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x0C000000, 1,0); /* Result */
	ti1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4308, dtype))(Current)).it_i1);
	Result = (EIF_INTEGER_8) ti1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT8; r.it_i1 = Result; return r; }
}

/* {NATURAL_16_REF}.to_integer_16 */
EIF_TYPED_VALUE F246_5437 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_integer_16";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT16, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 0, 12160);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12160);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_too_big", EX_PRE);
		tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
		ti2_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4456, 255))(Current)).it_i2);
		tu2_2 = (EIF_NATURAL_16) ti2_1;
		RTTE((EIF_BOOLEAN) (tu2_1 <= tu2_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x14000000, 1,0); /* Result */
	ti2_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4309, dtype))(Current)).it_i2);
	Result = (EIF_INTEGER_16) ti2_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT16; r.it_i2 = Result; return r; }
}

/* {NATURAL_16_REF}.to_integer_32 */
EIF_TYPED_VALUE F246_5438 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_integer_32";
	RTEX;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA(l_feature_name, 245, Current, 0, 0, 12161);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12161);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4310, dtype))(Current)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
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

/* {NATURAL_16_REF}.to_integer_64 */
EIF_TYPED_VALUE F246_5439 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_integer_64";
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT64, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 0, 12162);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12162);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x24000000, 1,0); /* Result */
	ti8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4311, dtype))(Current)).it_i8);
	Result = (EIF_INTEGER_64) ti8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT64; r.it_i8 = Result; return r; }
}

/* {NATURAL_16_REF}.to_real_32 */
EIF_TYPED_VALUE F246_5440 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_real_32";
	RTEX;
	EIF_REAL_32 tr4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 0, 12163);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12163);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x18000000, 1,0); /* Result */
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	tr4_1 = (EIF_REAL_32) (tu2_1);
	Result = (EIF_REAL_32) tr4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL32; r.it_r4 = Result; return r; }
}

/* {NATURAL_16_REF}.to_real_64 */
EIF_TYPED_VALUE F246_5441 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_real_64";
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_NATURAL_16 tu2_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL64, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 0, 12164);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12164);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	tr8_1 = (EIF_REAL_64) (tu2_1);
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
}

/* {NATURAL_16_REF}.to_binary_string */
EIF_TYPED_VALUE F246_5442 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_binary_string";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_16 loc2 = (EIF_NATURAL_16) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
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
	RTLR(3,loc3);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_UINT16, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 245, Current, 3, 0, 12165);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12165);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1888, 155))(Current)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000115, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(277, 0x01).id);
	uc1 = (EIF_CHARACTER_8) '0';
	ui4_1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4877, Dtype(tr1)))(tr1, uc1x, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(2, 0x34000000, 1, 0); /* loc2 */
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	loc2 = (EIF_NATURAL_16) tu2_1;
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(5);
		uu2_1 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 1L);
		tu2_1 = eif_bit_and(loc2,uu2_1);
		tr1 = RTLN(eif_new_type(246, 0x00).id);
		*(EIF_NATURAL_16 *)tr1 = tu2_1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4323, "to_binary_character", tr1))(tr1)).it_c1);
		uc1 = tc1;
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3172, "put", Result))(Result, uc1x, ui4_1x);
		RTHOOK(6);
		RTDBGAL(2, 0x34000000, 1, 0); /* loc2 */
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tu2_1 = eif_bit_shift_right(loc2,ui4_1);
		loc2 = (EIF_NATURAL_16) tu2_1;
		RTHOOK(7);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1--;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("result_valid_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(4910, "count", Result));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1888, 155))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("binary", EX_POST);
		RTNHOOK(10,1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3036, "new_cursor", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3022, "after", loc3))(loc3)).it_b);
			if (tb2) break;
			RTHOOK(11);
			tr1 = RTMS_EX_H("01",2,12337);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3021, "item", loc3))(loc3)).it_c1);
			uc1 = tc1;
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3131, "has", tr1))(tr1, uc1x)).it_b);
			tb1 = tb3;
			RTNHOOK(11,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3023, "forth", loc3))(loc3);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ui4_1
#undef uu2_1
#undef uc1
}

/* {NATURAL_16_REF}.to_binary_character */
EIF_TYPED_VALUE F246_5443 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_binary_character";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_CHAR8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 0, 12166);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12166);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("in_bounds", EX_PRE);
		tb1 = '\0';
		tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
		ti4_1 = (EIF_INTEGER_32) tu2_1;
		if ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) <= ti4_1)) {
			tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
			tb1 = (EIF_BOOLEAN) (tu2_1 <= (EIF_NATURAL_16) ((EIF_INTEGER_32) 1L));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x08000000, 1,0); /* Result */
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	ti4_1 = (EIF_INTEGER_32) tu2_1;
	ui4_1 = ti4_1;
	tc1 = (EIF_CHARACTER_8) (((EIF_INTEGER_32) (EIF_CHARACTER_8) '0') + ui4_1);
	Result = (EIF_CHARACTER_8) tc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("valid_character", EX_POST);
		tr1 = RTMS_EX_H("01",2,12337);
		uc1 = Result;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3131, "has", tr1))(tr1, uc1x)).it_b);
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
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
#undef ui4_1
#undef uc1
}

/* {NATURAL_16_REF}.to_octal_string */
EIF_TYPED_VALUE F246_5444 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_octal_string";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_16 loc2 = (EIF_NATURAL_16) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
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
	RTLR(3,loc3);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_UINT16, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 245, Current, 3, 0, 12167);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12167);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1888, 155))(Current)).it_i4);
	tr8_1 = (EIF_REAL_64) ceil ((double)(EIF_REAL_64) ((EIF_REAL_64) (ti4_1) /  (EIF_REAL_64) (((EIF_INTEGER_32) 3L))));
	ti4_1 = (EIF_INTEGER_32) tr8_1;
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000115, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(277, 0x01).id);
	uc1 = (EIF_CHARACTER_8) '0';
	ui4_1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4877, Dtype(tr1)))(tr1, uc1x, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(2, 0x34000000, 1, 0); /* loc2 */
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	loc2 = (EIF_NATURAL_16) tu2_1;
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(5);
		uu2_1 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 7L);
		tu2_1 = eif_bit_and(loc2,uu2_1);
		tr1 = RTLN(eif_new_type(246, 0x00).id);
		*(EIF_NATURAL_16 *)tr1 = tu2_1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4325, "to_octal_character", tr1))(tr1)).it_c1);
		uc1 = tc1;
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3172, "put", Result))(Result, uc1x, ui4_1x);
		RTHOOK(6);
		RTDBGAL(2, 0x34000000, 1, 0); /* loc2 */
		ui4_1 = ((EIF_INTEGER_32) 3L);
		tu2_1 = eif_bit_shift_right(loc2,ui4_1);
		loc2 = (EIF_NATURAL_16) tu2_1;
		RTHOOK(7);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1--;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("result_valid_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(4910, "count", Result));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1888, 155))(Current)).it_i4);
		tr8_1 = (EIF_REAL_64) ceil ((double)(EIF_REAL_64) ((EIF_REAL_64) (ti4_2) /  (EIF_REAL_64) (((EIF_INTEGER_32) 3L))));
		ti4_2 = (EIF_INTEGER_32) tr8_1;
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("octal", EX_POST);
		RTNHOOK(10,1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3036, "new_cursor", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3022, "after", loc3))(loc3)).it_b);
			if (tb2) break;
			RTHOOK(11);
			tr1 = RTMS_EX_H("01234567",8,2025887031);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3021, "item", loc3))(loc3)).it_c1);
			uc1 = tc1;
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3131, "has", tr1))(tr1, uc1x)).it_b);
			tb1 = tb3;
			RTNHOOK(11,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3023, "forth", loc3))(loc3);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ui4_1
#undef uu2_1
#undef uc1
}

/* {NATURAL_16_REF}.to_octal_character */
EIF_TYPED_VALUE F246_5445 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_octal_character";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_CHAR8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 0, 12168);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12168);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("in_bounds", EX_PRE);
		tb1 = '\0';
		tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
		ti4_1 = (EIF_INTEGER_32) tu2_1;
		if ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) <= ti4_1)) {
			tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
			tb1 = (EIF_BOOLEAN) (tu2_1 <= (EIF_NATURAL_16) ((EIF_INTEGER_32) 7L));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x08000000, 1,0); /* Result */
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	ti4_1 = (EIF_INTEGER_32) tu2_1;
	ui4_1 = ti4_1;
	tc1 = (EIF_CHARACTER_8) (((EIF_INTEGER_32) (EIF_CHARACTER_8) '0') + ui4_1);
	Result = (EIF_CHARACTER_8) tc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("valid_character", EX_POST);
		tr1 = RTMS_EX_H("01234567",8,2025887031);
		uc1 = Result;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3131, "has", tr1))(tr1, uc1x)).it_b);
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
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
#undef ui4_1
#undef uc1
}

/* {NATURAL_16_REF}.to_hex_string */
EIF_TYPED_VALUE F246_5446 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_hex_string";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_16 loc2 = (EIF_NATURAL_16) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
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
	RTLR(3,loc3);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_UINT16, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 245, Current, 3, 0, 12169);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12169);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1888, 155))(Current)).it_i4);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 4L));
	RTHOOK(2);
	RTDBGAL(0, 0xF8000115, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(277, 0x01).id);
	uc1 = (EIF_CHARACTER_8) '0';
	ui4_1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4877, Dtype(tr1)))(tr1, uc1x, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(2, 0x34000000, 1, 0); /* loc2 */
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	loc2 = (EIF_NATURAL_16) tu2_1;
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(5);
		uu2_1 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 15L);
		tu2_1 = eif_bit_and(loc2,uu2_1);
		tr1 = RTLN(eif_new_type(246, 0x00).id);
		*(EIF_NATURAL_16 *)tr1 = tu2_1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4327, "to_hex_character", tr1))(tr1)).it_c1);
		uc1 = tc1;
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3172, "put", Result))(Result, uc1x, ui4_1x);
		RTHOOK(6);
		RTDBGAL(2, 0x34000000, 1, 0); /* loc2 */
		ui4_1 = ((EIF_INTEGER_32) 4L);
		tu2_1 = eif_bit_shift_right(loc2,ui4_1);
		loc2 = (EIF_NATURAL_16) tu2_1;
		RTHOOK(7);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1--;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("result_valid_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(4910, "count", Result));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1888, 155))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (ti4_2 / ((EIF_INTEGER_32) 4L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("hexadecimal", EX_POST);
		RTNHOOK(10,1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3036, "new_cursor", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3022, "after", loc3))(loc3)).it_b);
			if (tb2) break;
			RTHOOK(11);
			tr1 = RTMS_EX_H("0123456789ABCDEF",16,1319696198);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3021, "item", loc3))(loc3)).it_c1);
			uc1 = tc1;
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3131, "has", tr1))(tr1, uc1x)).it_b);
			tb1 = tb3;
			RTNHOOK(11,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3023, "forth", loc3))(loc3);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ui4_1
#undef uu2_1
#undef uc1
}

/* {NATURAL_16_REF}.to_hex_character */
EIF_TYPED_VALUE F246_5447 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_hex_character";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_CHAR8, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 245, Current, 1, 0, 12170);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12170);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("in_bounds", EX_PRE);
		tb1 = '\0';
		tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
		ti4_1 = (EIF_INTEGER_32) tu2_1;
		if ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) <= ti4_1)) {
			tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
			tb1 = (EIF_BOOLEAN) (tu2_1 <= (EIF_NATURAL_16) ((EIF_INTEGER_32) 15L));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	ti4_1 = (EIF_INTEGER_32) tu2_1;
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(0, 0x08000000, 1,0); /* Result */
	if ((EIF_BOOLEAN) (loc1 <= ((EIF_INTEGER_32) 9L))) {
		RTHOOK(4);
		tc1 = (EIF_CHARACTER_8) '0';
	} else {
		RTHOOK(5);
		ui4_1 = ((EIF_INTEGER_32) 10L);
		tc2 = (EIF_CHARACTER_8) (((EIF_INTEGER_32) (EIF_CHARACTER_8) 'A') - ui4_1);
		tc1 = tc2;
	}
	ui4_1 = loc1;
	tc2 = (EIF_CHARACTER_8) (((EIF_INTEGER_32) tc1) + ui4_1);
	Result = (EIF_CHARACTER_8) tc2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("valid_character", EX_POST);
		tr1 = RTMS_EX_H("0123456789ABCDEF",16,1319696198);
		uc1 = Result;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3131, "has", tr1))(tr1, uc1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
#undef ui4_1
#undef uc1
}

/* {NATURAL_16_REF}.to_character */
EIF_TYPED_VALUE F246_5448 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_character";
	RTEX;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_CHAR8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 0, 12171);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12171);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_character", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4295, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x08000000, 1,0); /* Result */
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	tc1 = (EIF_CHARACTER_8) tu2_1;
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
}

/* {NATURAL_16_REF}.to_character_8 */
EIF_TYPED_VALUE F246_5449 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_character_8";
	RTEX;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_CHAR8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 0, 12172);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12172);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_character", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4295, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x08000000, 1,0); /* Result */
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	tc1 = (EIF_CHARACTER_8) tu2_1;
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
}

/* {NATURAL_16_REF}.to_character_32 */
EIF_TYPED_VALUE F246_5450 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_character_32";
	RTEX;
	EIF_CHARACTER_32 tw1;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_CHAR32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 0, 12173);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12173);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_character", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4296, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x1C000000, 1,0); /* Result */
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	tw1 = (EIF_CHARACTER_32) tu2_1;
	Result = (EIF_CHARACTER_32) tw1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR32; r.it_c4 = Result; return r; }
}

/* {NATURAL_16_REF}.bit_and */
EIF_TYPED_VALUE F246_5451 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "bit_and";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_NATURAL_16 tu2_3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 1, 12174);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12174);
	RTCC(arg1, 245, l_feature_name, 1, eif_new_type(245, 0x01),0);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF80000F5, 0,0); /* Result */
	tr1 = RTLNSMART(Dftype(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	tu2_2 = *(EIF_NATURAL_16 *)(arg1 + RTVA(4288, "item", arg1));
	uu2_1 = tu2_2;
	tu2_3 = eif_bit_and(tu2_1,uu2_1);
	uu2_1 = tu2_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4293, "set_item", Result))(Result, uu2_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("bitwise_and_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef uu2_1
#undef arg1
}

/* {NATURAL_16_REF}.bit_or */
EIF_TYPED_VALUE F246_5452 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "bit_or";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_NATURAL_16 tu2_3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 1, 12175);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12175);
	RTCC(arg1, 245, l_feature_name, 1, eif_new_type(245, 0x01),0);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF80000F5, 0,0); /* Result */
	tr1 = RTLNSMART(Dftype(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	tu2_2 = *(EIF_NATURAL_16 *)(arg1 + RTVA(4288, "item", arg1));
	uu2_1 = tu2_2;
	tu2_3 = eif_bit_or(tu2_1,uu2_1);
	uu2_1 = tu2_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4293, "set_item", Result))(Result, uu2_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("bitwise_or_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef uu2_1
#undef arg1
}

/* {NATURAL_16_REF}.bit_xor */
EIF_TYPED_VALUE F246_5453 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "bit_xor";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_NATURAL_16 tu2_3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 1, 12176);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12176);
	RTCC(arg1, 245, l_feature_name, 1, eif_new_type(245, 0x01),0);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF80000F5, 0,0); /* Result */
	tr1 = RTLNSMART(Dftype(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	tu2_2 = *(EIF_NATURAL_16 *)(arg1 + RTVA(4288, "item", arg1));
	uu2_1 = tu2_2;
	tu2_3 = eif_bit_xor(tu2_1,uu2_1);
	uu2_1 = tu2_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4293, "set_item", Result))(Result, uu2_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("bitwise_xor_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef uu2_1
#undef arg1
}

/* {NATURAL_16_REF}.bit_not */
EIF_TYPED_VALUE F246_5454 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "bit_not";
	RTEX;
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
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
	
	RTEAA(l_feature_name, 245, Current, 0, 0, 12177);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12177);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000F5, 0,0); /* Result */
	tr1 = RTLNSMART(Dftype(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	tu2_2 = eif_bit_not(tu2_1);
	uu2_1 = tu2_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4293, "set_item", Result))(Result, uu2_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("bit_not_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef uu2_1
}

/* {NATURAL_16_REF}.bit_shift */
EIF_TYPED_VALUE F246_5455 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "bit_shift";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_UINT16, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 1, 12178);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12178);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_less_than_16", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 16L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_greater_than_minus_16", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) -16L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		RTDBGAL(0, 0x34000000, 1,0); /* Result */
		ui4_1 = arg1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4337, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		tu2_1 = *(EIF_NATURAL_16 *)(tr1 + RTVA(4288, "item", tr1));
		Result = (EIF_NATURAL_16) tu2_1;
	} else {
		RTHOOK(5);
		RTDBGAL(0, 0x34000000, 1,0); /* Result */
		ui4_1 = (EIF_INTEGER_32) -arg1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4336, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		tu2_1 = *(EIF_NATURAL_16 *)(tr1 + RTVA(4288, "item", tr1));
		Result = (EIF_NATURAL_16) tu2_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT16; r.it_n2 = Result; return r; }
#undef up1
#undef ui4_1
#undef arg1
}

/* {NATURAL_16_REF}.bit_shift_left */
EIF_TYPED_VALUE F246_5456 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "bit_shift_left";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 1, 12179);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12179);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_less_than_16", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 16L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0xF80000F5, 0,0); /* Result */
	tr1 = RTLNSMART(Dftype(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(3,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	ui4_1 = arg1;
	tu2_2 = eif_bit_shift_left(tu2_1,ui4_1);
	uu2_1 = tu2_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4293, "set_item", Result))(Result, uu2_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("bit_shift_left_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef uu2_1
#undef arg1
}

/* {NATURAL_16_REF}.bit_shift_right */
EIF_TYPED_VALUE F246_5457 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "bit_shift_right";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 1, 12180);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12180);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_less_than_16", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 16L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0xF80000F5, 0,0); /* Result */
	tr1 = RTLNSMART(Dftype(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(3,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	ui4_1 = arg1;
	tu2_2 = eif_bit_shift_right(tu2_1,ui4_1);
	uu2_1 = tu2_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4293, "set_item", Result))(Result, uu2_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("bit_shift_right_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef uu2_1
#undef arg1
}

/* {NATURAL_16_REF}.bit_test */
EIF_TYPED_VALUE F246_5458 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "bit_test";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_NATURAL_16 tu2_3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 1, 12181);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12181);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_less_than_16", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 16L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	ui4_1 = arg1;
	tu2_2 = eif_bit_shift_left(((EIF_NATURAL_16) 1U),ui4_1);
	uu2_1 = tu2_2;
	tu2_3 = eif_bit_and(tu2_1,uu2_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu2_3 != (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef uu2_1
#undef arg1
}

/* {NATURAL_16_REF}.set_bit */
EIF_TYPED_VALUE F246_5459 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "set_bit";
	RTEX;
#define arg1 arg1x.it_b
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_NATURAL_16 tu2_3;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT16, &Result);
	RTLU(SK_BOOL,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 2, 12182);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12182);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_less_than_16", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 < ((EIF_INTEGER_32) 16L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (arg1) {
		RTHOOK(4);
		RTDBGAL(0, 0x34000000, 1,0); /* Result */
		tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
		ui4_1 = arg2;
		tu2_2 = eif_bit_shift_left(((EIF_NATURAL_16) 1U),ui4_1);
		uu2_1 = tu2_2;
		tu2_3 = eif_bit_or(tu2_1,uu2_1);
		Result = (EIF_NATURAL_16) tu2_3;
	} else {
		RTHOOK(5);
		RTDBGAL(0, 0x34000000, 1,0); /* Result */
		tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
		ui4_1 = arg2;
		tu2_2 = eif_bit_shift_left(((EIF_NATURAL_16) 1U),ui4_1);
		tu2_3 = eif_bit_not(tu2_2);
		uu2_1 = tu2_3;
		tu2_2 = eif_bit_and(tu2_1,uu2_1);
		Result = (EIF_NATURAL_16) tu2_2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT16; r.it_n2 = Result; return r; }
#undef ui4_1
#undef uu2_1
#undef arg2
#undef arg1
}

/* {NATURAL_16_REF}.set_bit_with_mask */
EIF_TYPED_VALUE F246_5460 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "set_bit_with_mask";
	RTEX;
#define arg1 arg1x.it_b
#define arg2 arg2x.it_n2
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_NATURAL_16 tu2_3;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n2 = * (EIF_NATURAL_16 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT16, &Result);
	RTLU(SK_BOOL,&arg1);
	RTLU(SK_UINT16,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 2, 12183);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12183);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (arg1) {
		RTHOOK(2);
		RTDBGAL(0, 0x34000000, 1,0); /* Result */
		tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
		uu2_1 = arg2;
		tu2_2 = eif_bit_or(tu2_1,uu2_1);
		Result = (EIF_NATURAL_16) tu2_2;
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0x34000000, 1,0); /* Result */
		tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
		tu2_2 = eif_bit_not(arg2);
		uu2_1 = tu2_2;
		tu2_3 = eif_bit_and(tu2_1,uu2_1);
		Result = (EIF_NATURAL_16) tu2_3;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT16; r.it_n2 = Result; return r; }
#undef uu2_1
#undef arg2
#undef arg1
}

/* {NATURAL_16_REF}.out */
EIF_TYPED_VALUE F246_5461 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "out";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 tu2_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 245, Current, 0, 0, 12184);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(245, Current, 12184);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000115, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(277, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 5L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4748, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tu2_1 = *(EIF_NATURAL_16 *)(Current + RTWA(4288, dtype));
	uu2_1 = tu2_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4853, "append_natural_16", Result))(Result, uu2_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("out_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef uu2_1
}

void EIF_Minit246 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

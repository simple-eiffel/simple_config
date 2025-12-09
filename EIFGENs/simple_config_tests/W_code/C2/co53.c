/*
 * Code for class CONFIG_TEST_APP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F53_1000(EIF_REFERENCE);
extern void F53_1001(EIF_REFERENCE);
extern void F53_1002(EIF_REFERENCE);
extern void F53_1003(EIF_REFERENCE);
extern void F53_1004(EIF_REFERENCE);
extern void F53_1005(EIF_REFERENCE);
extern void F53_1006(EIF_REFERENCE);
extern void F53_1007(EIF_REFERENCE);
extern void F53_1008(EIF_REFERENCE);
extern void F53_1009(EIF_REFERENCE);
extern void F53_1010(EIF_REFERENCE);
extern void F53_1011(EIF_REFERENCE);
extern void F53_1012(EIF_REFERENCE);
extern void EIF_Minit53(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {CONFIG_TEST_APP}.make */
void F53_1000 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
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
	
	RTEAA(l_feature_name, 52, Current, 0, 0, 1046);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1046);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(32, dtype))(Current);
	RTHOOK(2);
	tr1 = RTMS_EX_H("Running SIMPLE_CONFIG tests...\012\012",32,1984437258);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(959, dtype))(Current);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(960, dtype))(Current);
	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(961, dtype))(Current);
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(962, dtype))(Current);
	RTHOOK(7);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(963, dtype))(Current);
	RTHOOK(8);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(964, dtype))(Current);
	RTHOOK(9);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(965, dtype))(Current);
	RTHOOK(10);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(966, dtype))(Current);
	RTHOOK(11);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(967, dtype))(Current);
	RTHOOK(12);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(968, dtype))(Current);
	RTHOOK(13);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(969, dtype))(Current);
	RTHOOK(14);
	tr1 = RTMS_EX_H("\012=== All tests passed ===\012",26,1776312586);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ur1
}

/* {CONFIG_TEST_APP}.on_prepare */
void F53_1001 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "on_prepare";
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 52, Current, 0, 0, 1047);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1047);
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		RTHOOK(1);
		RTCT("prepared", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(905, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {CONFIG_TEST_APP}.test_empty_config */
void F53_1002 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_empty_config";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 52, Current, 1, 0, 1048);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1048);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("test_empty_config: ",19,133704736);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(1, 0xF80000AF, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(175, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2370, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("empty has no keys",17,636742771);
	ur1 = tr1;
	tr2 = RTMS_EX_H("test",4,1952805748);
	ur2 = tr2;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2374, "has_key", loc1))(loc1, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(922, dtype))(Current, ur1x, ub1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("no file path",12,195270504);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2372, "file_path", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur2 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(945, dtype))(Current, ur1x, ur2x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("not modified",12,900639076);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(2373, "is_modified", loc1));
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(922, dtype))(Current, ur1x, ub1x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("OK\012",3,5196554);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ub1
}

/* {CONFIG_TEST_APP}.test_string_values */
void F53_1003 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_string_values";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLR(6,loc2);
	RTLR(7,ur3);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 52, Current, 2, 0, 1049);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1049);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("test_string_values: ",20,1174932000);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(1, 0xF80000AF, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(175, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2370, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("name",4,1851878757);
	ur1 = tr1;
	tr2 = RTMS_EX_H("Test App",8,82952304);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2390, "set_string", loc1))(loc1, ur1x, ur2x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("has key",7,1540900729);
	ur1 = tr1;
	tr2 = RTMS_EX_H("name",4,1851878757);
	ur2 = tr2;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2374, "has_key", loc1))(loc1, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(921, dtype))(Current, ur1x, ub1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("value attached",14,1828981604);
	ur1 = tr1;
	tr2 = RTMS_EX_H("name",4,1851878757);
	ur2 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2375, "string_value", loc1))(loc1, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur2 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(867, dtype))(Current, ur1x, ur2x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("name",4,1851878757);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2375, "string_value", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = RTCCL(tr1);
	if (EIF_TEST(loc2)) {
		RTHOOK(7);
		tr1 = RTMS_EX_H("value correct",13,1238942580);
		ur1 = tr1;
		tr2 = RTMS_EX_H("Test App",8,82952304);
		ur2 = tr2;
		ur3 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(854, dtype))(Current, ur1x, ur2x, ur3x);
	}
	RTHOOK(8);
	tr1 = RTMS_EX_H("is modified",11,1570773860);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(2373, "is_modified", loc1));
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(921, dtype))(Current, ur1x, ub1x);
	RTHOOK(9);
	tr1 = RTMS_EX_H("OK\012",3,5196554);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ub1
}

/* {CONFIG_TEST_APP}.test_integer_values */
void F53_1004 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_integer_values";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 52, Current, 1, 0, 1050);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1050);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("test_integer_values: ",21,691771168);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(1, 0xF80000AF, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(175, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2370, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("port",4,1886351988);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 8080L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2391, "set_integer", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("has key",7,1540900729);
	ur1 = tr1;
	tr2 = RTMS_EX_H("port",4,1886351988);
	ur2 = tr2;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2374, "has_key", loc1))(loc1, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(921, dtype))(Current, ur1x, ub1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("value correct",13,1238942580);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 8080L);
	tr2 = RTMS_EX_H("port",4,1886351988);
	ur2 = tr2;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2379, "integer_value", loc1))(loc1, ur2x)).it_i4);
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(858, dtype))(Current, ur1x, ui4_1x, ui4_2x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("OK\012",3,5196554);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ub1
}

/* {CONFIG_TEST_APP}.test_boolean_values */
void F53_1005 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_boolean_values";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 52, Current, 1, 0, 1051);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1051);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("test_boolean_values: ",21,823922976);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(1, 0xF80000AF, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(175, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2370, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("debug",5,1701719399);
	ur1 = tr1;
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2392, "set_boolean", loc1))(loc1, ur1x, ub1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("has key",7,1540900729);
	ur1 = tr1;
	tr2 = RTMS_EX_H("debug",5,1701719399);
	ur2 = tr2;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2374, "has_key", loc1))(loc1, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(921, dtype))(Current, ur1x, ub1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("value correct",13,1238942580);
	ur1 = tr1;
	tr2 = RTMS_EX_H("debug",5,1701719399);
	ur2 = tr2;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2382, "boolean_value", loc1))(loc1, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(921, dtype))(Current, ur1x, ub1x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("release",7,1296412773);
	ur1 = tr1;
	ub1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2392, "set_boolean", loc1))(loc1, ur1x, ub1x);
	RTHOOK(7);
	tr1 = RTMS_EX_H("false value",11,1722675301);
	ur1 = tr1;
	tr2 = RTMS_EX_H("release",7,1296412773);
	ur2 = tr2;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2382, "boolean_value", loc1))(loc1, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(922, dtype))(Current, ur1x, ub1x);
	RTHOOK(8);
	tr1 = RTMS_EX_H("OK\012",3,5196554);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ur2
#undef ub1
}

/* {CONFIG_TEST_APP}.test_real_values */
void F53_1006 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_real_values";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 52, Current, 1, 0, 1052);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1052);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("test_real_values: ",18,89152544);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(1, 0xF80000AF, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(175, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2370, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("rate",4,1918989413);
	ur1 = tr1;
	ur8_1 = (EIF_REAL_64) 3.14159;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2393, "set_real", loc1))(loc1, ur1x, ur8_1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("has key",7,1540900729);
	ur1 = tr1;
	tr2 = RTMS_EX_H("rate",4,1918989413);
	ur2 = tr2;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2374, "has_key", loc1))(loc1, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(921, dtype))(Current, ur1x, ub1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("value correct",13,1238942580);
	ur1 = tr1;
	ur8_1 = (EIF_REAL_64) 3.14159;
	tr2 = RTMS_EX_H("rate",4,1918989413);
	ur2 = tr2;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2384, "real_value", loc1))(loc1, ur2x)).it_r8);
	ur8_2 = tr8_1;
	ur8_3 = (EIF_REAL_64) 0.0001;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(937, dtype))(Current, ur1x, ur8_1x, ur8_2x, ur8_3x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("OK\012",3,5196554);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ur2
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ub1
}

/* {CONFIG_TEST_APP}.test_defaults */
void F53_1007 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_defaults";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ur4x = {{0}, SK_REF};
#define ur4 ur4x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLR(6,tr3);
	RTLR(7,ur3);
	RTLR(8,tr4);
	RTLR(9,ur4);
	RTLIU(10);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 52, Current, 1, 0, 1053);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1053);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("test_defaults: ",15,1277991456);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(1, 0xF80000AF, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(175, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2370, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("string default",14,1572866676);
	ur1 = tr1;
	tr2 = RTMS_EX_H("default",7,626575476);
	ur2 = tr2;
	tr3 = RTMS_EX_H("missing",7,1170632295);
	ur3 = tr3;
	tr4 = RTMS_EX_H("default",7,626575476);
	ur4 = tr4;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2376, "string_value_or_default", loc1))(loc1, ur3x, ur4x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(854, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("integer default",15,165187700);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 42L);
	tr2 = RTMS_EX_H("missing",7,1170632295);
	ur2 = tr2;
	ui4_2 = ((EIF_INTEGER_32) 42L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2380, "integer_value_or_default", loc1))(loc1, ur2x, ui4_2x)).it_i4);
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(858, dtype))(Current, ur1x, ui4_1x, ui4_2x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("boolean default",15,2095080308);
	ur1 = tr1;
	tr2 = RTMS_EX_H("missing",7,1170632295);
	ur2 = tr2;
	ub1 = (EIF_BOOLEAN) 1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2383, "boolean_value_or_default", loc1))(loc1, ur2x, ub1x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(921, dtype))(Current, ur1x, ub1x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("real default",12,1186153844);
	ur1 = tr1;
	ur8_1 = (EIF_REAL_64) 2.71828;
	tr2 = RTMS_EX_H("missing",7,1170632295);
	ur2 = tr2;
	ur8_2 = (EIF_REAL_64) 2.71828;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2385, "real_value_or_default", loc1))(loc1, ur2x, ur8_2x)).it_r8);
	ur8_2 = tr8_1;
	ur8_3 = (EIF_REAL_64) 0.0001;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(937, dtype))(Current, ur1x, ur8_1x, ur8_2x, ur8_3x);
	RTHOOK(7);
	tr1 = RTMS_EX_H("OK\012",3,5196554);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ui4_1
#undef ui4_2
#undef ub1
}

/* {CONFIG_TEST_APP}.test_sections */
void F53_1008 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_sections";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLR(5,tr2);
	RTLR(6,ur2);
	RTLR(7,loc3);
	RTLR(8,loc4);
	RTLR(9,ur3);
	RTLIU(10);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 52, Current, 4, 0, 1054);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1054);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("test_sections: ",15,985717280);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(1, 0xF80000AF, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(175, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2370, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(2, 0xF80000AF, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(175, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2370, Dtype(tr1)))(tr1);
	RTNHOOK(3,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	tr1 = RTMS_EX_H("host",4,1752134516);
	ur1 = tr1;
	tr2 = RTMS_EX_H("localhost",9,185724020);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2390, "set_string", loc2))(loc2, ur1x, ur2x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("port",4,1886351988);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 5432L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2391, "set_integer", loc2))(loc2, ur1x, ui4_1x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("database",8,1332066917);
	ur1 = tr1;
	ur2 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2394, "set_section", loc1))(loc1, ur1x, ur2x);
	RTHOOK(7);
	tr1 = RTMS_EX_H("has section",11,1040846958);
	ur1 = tr1;
	tr2 = RTMS_EX_H("database",8,1332066917);
	ur2 = tr2;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2374, "has_key", loc1))(loc1, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(921, dtype))(Current, ur1x, ub1x);
	RTHOOK(8);
	tr1 = RTMS_EX_H("database",8,1332066917);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2389, "section", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = RTCCL(tr1);
	if (EIF_TEST(loc3)) {
		RTHOOK(9);
		tr1 = RTMS_EX_H("section host attached",21,936421732);
		ur1 = tr1;
		tr2 = RTMS_EX_H("host",4,1752134516);
		ur2 = tr2;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2375, "string_value", loc3))(loc3, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur2 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(867, dtype))(Current, ur1x, ur2x);
		RTHOOK(10);
		tr1 = RTMS_EX_H("host",4,1752134516);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2375, "string_value", loc3))(loc3, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc4 = RTCCL(tr1);
		if (EIF_TEST(loc4)) {
			RTHOOK(11);
			tr1 = RTMS_EX_H("section host",12,659343988);
			ur1 = tr1;
			tr2 = RTMS_EX_H("localhost",9,185724020);
			ur2 = tr2;
			ur3 = RTCCL(loc4);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(854, dtype))(Current, ur1x, ur2x, ur3x);
		}
		RTHOOK(12);
		tr1 = RTMS_EX_H("section port",12,793561460);
		ur1 = tr1;
		ui4_1 = ((EIF_INTEGER_32) 5432L);
		tr2 = RTMS_EX_H("port",4,1886351988);
		ur2 = tr2;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2379, "integer_value", loc3))(loc3, ur2x)).it_i4);
		ui4_2 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(858, dtype))(Current, ur1x, ui4_1x, ui4_2x);
	} else {
		RTHOOK(13);
		tr1 = RTMS_EX_H("section exists",14,1152743795);
		ur1 = tr1;
		ub1 = (EIF_BOOLEAN) 0;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(921, dtype))(Current, ur1x, ub1x);
	}
	RTHOOK(14);
	tr1 = RTMS_EX_H("OK\012",3,5196554);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
#undef ub1
}

/* {CONFIG_TEST_APP}.test_dot_notation */
void F53_1009 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_dot_notation";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLR(5,tr2);
	RTLR(6,ur2);
	RTLR(7,loc3);
	RTLR(8,ur3);
	RTLR(9,loc4);
	RTLR(10,loc5);
	RTLIU(11);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 52, Current, 5, 0, 1055);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1055);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("test_dot_notation: ",19,2015398432);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(1, 0xF80000AF, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(175, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2370, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(2, 0xF80000AF, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(175, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2370, Dtype(tr1)))(tr1);
	RTNHOOK(3,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	tr1 = RTMS_EX_H("host",4,1752134516);
	ur1 = tr1;
	tr2 = RTMS_EX_H("localhost",9,185724020);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2390, "set_string", loc2))(loc2, ur1x, ur2x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("port",4,1886351988);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 5432L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2391, "set_integer", loc2))(loc2, ur1x, ui4_1x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("database",8,1332066917);
	ur1 = tr1;
	ur2 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2394, "set_section", loc1))(loc1, ur1x, ur2x);
	RTHOOK(7);
	tr1 = RTMS_EX_H("has database.host",17,2102955380);
	ur1 = tr1;
	tr2 = RTMS_EX_H("database.host",13,1466735988);
	ur2 = tr2;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2374, "has_key", loc1))(loc1, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(921, dtype))(Current, ur1x, ub1x);
	RTHOOK(8);
	tr1 = RTMS_EX_H("database.host attached",22,1452890724);
	ur1 = tr1;
	tr2 = RTMS_EX_H("database.host",13,1466735988);
	ur2 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2375, "string_value", loc1))(loc1, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur2 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(867, dtype))(Current, ur1x, ur2x);
	RTHOOK(9);
	tr1 = RTMS_EX_H("database.host",13,1466735988);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2375, "string_value", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = RTCCL(tr1);
	if (EIF_TEST(loc3)) {
		RTHOOK(10);
		tr1 = RTMS_EX_H("database.host value",19,1463278437);
		ur1 = tr1;
		tr2 = RTMS_EX_H("localhost",9,185724020);
		ur2 = tr2;
		ur3 = RTCCL(loc3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(854, dtype))(Current, ur1x, ur2x, ur3x);
	}
	RTHOOK(11);
	tr1 = RTMS_EX_H("database.port value",19,2000133989);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 5432L);
	tr2 = RTMS_EX_H("database.port",13,1600953460);
	ur2 = tr2;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2379, "integer_value", loc1))(loc1, ur2x)).it_i4);
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(858, dtype))(Current, ur1x, ui4_1x, ui4_2x);
	RTHOOK(12);
	RTDBGAL(1, 0xF80000AF, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(175, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2370, Dtype(tr1)))(tr1);
	RTNHOOK(12,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(13);
	RTDBGAL(2, 0xF80000AF, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(175, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2370, Dtype(tr1)))(tr1);
	RTNHOOK(13,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(14);
	tr1 = RTMS_EX_H("username",8,1977725541);
	ur1 = tr1;
	tr2 = RTMS_EX_H("admin",5,1685636974);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2390, "set_string", loc2))(loc2, ur1x, ur2x);
	RTHOOK(15);
	tr1 = RTMS_EX_H("app",3,6385776);
	ur1 = tr1;
	ur2 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2394, "set_section", loc1))(loc1, ur1x, ur2x);
	RTHOOK(16);
	tr1 = RTMS_EX_H("app",3,6385776);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2389, "section", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc4 = RTCCL(tr1);
	if (EIF_TEST(loc4)) {
		RTHOOK(17);
		RTDBGAL(2, 0xF80000AF, 0, 0); /* loc2 */
		tr1 = RTLN(eif_new_type(175, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2370, Dtype(tr1)))(tr1);
		RTNHOOK(17,1);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(18);
		tr1 = RTMS_EX_H("pass",4,1885434739);
		ur1 = tr1;
		tr2 = RTMS_EX_H("secret",6,1895316340);
		ur2 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2390, "set_string", loc2))(loc2, ur1x, ur2x);
		RTHOOK(19);
		tr1 = RTMS_EX_H("creds",5,1920007795);
		ur1 = tr1;
		ur2 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2394, "set_section", loc4))(loc4, ur1x, ur2x);
	}
	RTHOOK(20);
	tr1 = RTMS_EX_H("app",3,6385776);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2389, "section", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc5 = RTCCL(tr1);
	if (EIF_TEST(loc5)) {
		RTHOOK(21);
		tr1 = RTMS_EX_H("has creds",9,1596441715);
		ur1 = tr1;
		tr2 = RTMS_EX_H("creds",5,1920007795);
		ur2 = tr2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2374, "has_key", loc5))(loc5, ur2x)).it_b);
		ub1 = tb1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(921, dtype))(Current, ur1x, ub1x);
		RTHOOK(22);
		tr1 = RTMS_EX_H("has creds.pass",14,1147720307);
		ur1 = tr1;
		tr2 = RTMS_EX_H("creds.pass",10,1412843635);
		ur2 = tr2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2374, "has_key", loc5))(loc5, ur2x)).it_b);
		ub1 = tb1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(921, dtype))(Current, ur1x, ub1x);
	}
	RTHOOK(23);
	tr1 = RTMS_EX_H("OK\012",3,5196554);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
#undef ub1
}

/* {CONFIG_TEST_APP}.test_typed_arrays */
void F53_1010 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_typed_arrays";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 52, Current, 3, 0, 1056);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1056);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("test_typed_arrays: ",19,1916220704);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(1, 0xF80000AF, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(175, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2370, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(2, 0xF8000186, 0, 0); /* loc2 */
	tr1 = RTMS_EX_H("missing",7,1170632295);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2386, "string_list", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	tr1 = RTMS_EX_H("empty string list",17,1947499892);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3132, "is_empty", loc2))(loc2)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(921, dtype))(Current, ur1x, ub1x);
	RTHOOK(5);
	RTDBGAL(3, 0xF80001C3, 0, 0); /* loc3 */
	tr1 = RTMS_EX_H("missing",7,1170632295);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2387, "integer_list", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	tr1 = RTMS_EX_H("empty int list",14,101692020);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3132, "is_empty", loc3))(loc3)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(921, dtype))(Current, ur1x, ub1x);
	RTHOOK(7);
	tr1 = RTMS_EX_H("OK\012",3,5196554);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ub1
}

/* {CONFIG_TEST_APP}.test_environment_fallback */
void F53_1011 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_environment_fallback";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ur4x = {{0}, SK_REF};
#define ur4 ur4x.it_r
	EIF_TYPED_VALUE ur5x = {{0}, SK_REF};
#define ur5 ur5x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(13);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLR(5,tr2);
	RTLR(6,ur2);
	RTLR(7,tr3);
	RTLR(8,ur3);
	RTLR(9,tr4);
	RTLR(10,ur4);
	RTLR(11,tr5);
	RTLR(12,ur5);
	RTLIU(13);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 52, Current, 2, 0, 1057);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1057);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("test_environment_fallback: ",27,2140887072);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(1, 0xF80000AF, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(175, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2370, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("missing_key",11,558943353);
	ur1 = tr1;
	tr2 = RTMS_EX_H("PATH",4,1346458696);
	ur2 = tr2;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2377, "string_value_or_env", loc1))(loc1, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = RTCCL(tr1);
	if (EIF_TEST(loc2)) {
		RTHOOK(4);
		tr1 = RTMS_EX_H("PATH from env",13,158164342);
		ur1 = tr1;
		ur2 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(946, dtype))(Current, ur1x, ur2x);
	}
	RTHOOK(5);
	tr1 = RTMS_EX_H("env fallback default",20,1846634356);
	ur1 = tr1;
	tr2 = RTMS_EX_H("fallback",8,1316879467);
	ur2 = tr2;
	tr3 = RTMS_EX_H("missing",7,1170632295);
	ur3 = tr3;
	tr4 = RTMS_EX_H("NONEXISTENT_VAR_XYZ123",22,2102333747);
	ur4 = tr4;
	tr5 = RTMS_EX_H("fallback",8,1316879467);
	ur5 = tr5;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2378, "string_value_or_env_or_default", loc1))(loc1, ur3x, ur4x, ur5x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(854, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("OK\012",3,5196554);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef ur5
}

/* {CONFIG_TEST_APP}.test_pretty_print */
void F53_1012 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_pretty_print";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLR(6,loc2);
	RTLR(7,ur3);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 52, Current, 2, 0, 1058);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1058);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("test_pretty_print: ",19,1256157728);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(1, 0xF80000AF, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(175, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2370, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("name",4,1851878757);
	ur1 = tr1;
	tr2 = RTMS_EX_H("Test",4,1415934836);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2390, "set_string", loc1))(loc1, ur1x, ur2x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("port",4,1886351988);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 8080L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2391, "set_integer", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(5);
	RTDBGAL(2, 0xF8000115, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2401, "to_json_pretty", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	tr1 = RTMS_EX_H("has newlines",12,207365491);
	ur1 = tr1;
	ur2 = RTCCL(loc2);
	tr2 = RTMS_EX_H("\012",1,10);
	ur3 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(941, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(7);
	tr1 = RTMS_EX_H("has quotes",10,864280947);
	ur1 = tr1;
	ur2 = RTCCL(loc2);
	tr2 = RTMS_EX_H("\"name\"",6,1702250786);
	ur3 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(941, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(8);
	tr1 = RTMS_EX_H("OK\012",3,5196554);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
}

void EIF_Minit53 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

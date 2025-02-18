/* Code generated by cmd/cgo; DO NOT EDIT. */

/* package mymodule */


#line 1 "cgo-builtin-export-prolog"

#include <stddef.h>

#ifndef GO_CGO_EXPORT_PROLOGUE_H
#define GO_CGO_EXPORT_PROLOGUE_H

#ifndef GO_CGO_GOSTRING_TYPEDEF
typedef struct { const char *p; ptrdiff_t n; } _GoString_;
#endif

#endif

/* Start of preamble from import "C" comments.  */


#line 3 "main.go"

#include <stdlib.h>
#include <string.h>

#line 1 "cgo-generated-wrapper"


/* End of preamble from import "C" comments.  */


/* Start of boilerplate cgo prologue.  */
#line 1 "cgo-gcc-export-header-prolog"

#ifndef GO_CGO_PROLOGUE_H
#define GO_CGO_PROLOGUE_H

typedef signed char GoInt8;
typedef unsigned char GoUint8;
typedef short GoInt16;
typedef unsigned short GoUint16;
typedef int GoInt32;
typedef unsigned int GoUint32;
typedef long long GoInt64;
typedef unsigned long long GoUint64;
typedef GoInt32 GoInt;
typedef GoUint32 GoUint;
typedef size_t GoUintptr;
typedef float GoFloat32;
typedef double GoFloat64;
#ifdef _MSC_VER
#include <complex.h>
typedef _Fcomplex GoComplex64;
typedef _Dcomplex GoComplex128;
#else
typedef float _Complex GoComplex64;
typedef double _Complex GoComplex128;
#endif

/*
  static assertion to make sure the file is being used on architecture
  at least with matching size of GoInt.
*/
typedef char _check_for_32_bit_pointer_matching_GoInt[sizeof(void*)==32/8 ? 1:-1];

#ifndef GO_CGO_GOSTRING_TYPEDEF
typedef _GoString_ GoString;
#endif
typedef void *GoMap;
typedef void *GoChan;
typedef struct { void *t; void *v; } GoInterface;
typedef struct { void *data; GoInt len; GoInt cap; } GoSlice;

#endif

/* End of boilerplate cgo prologue.  */

#ifdef __cplusplus
extern "C" {
#endif

extern __declspec(dllexport) GoInt NewDocumentFromReader(char* cHtml);
extern __declspec(dllexport) void ReleaseSelection(GoInt sIndex);
extern __declspec(dllexport) void ReleaseMatcher(GoInt mIndex);
extern __declspec(dllexport) void NodeName(GoInt sIndex, char* result);
extern __declspec(dllexport) GoUint8 OuterHtml(GoInt sIndex, char* result);
extern __declspec(dllexport) GoInt Single(char* cStrSelector);
extern __declspec(dllexport) GoInt SingleMatcher(GoInt mIndex);
extern __declspec(dllexport) GoInt Selection_Add(GoInt sIndex, char* cStrSelector);
extern __declspec(dllexport) GoInt Selection_AddBack(GoInt sIndex);
extern __declspec(dllexport) GoInt Selection_AddBackFiltered(GoInt sIndex, char* cStrSelector);
extern __declspec(dllexport) GoInt Selection_AddBackMatcher(GoInt sIndex, GoInt mIndex);
extern __declspec(dllexport) GoInt Selection_AddMatcher(GoInt sIndex, GoInt mIndex);
extern __declspec(dllexport) GoInt Selection_AddSelection(GoInt sIndex1, GoInt sIndex2);
extern __declspec(dllexport) GoInt Selection_After(GoInt sIndex, char* cStrSelector);
extern __declspec(dllexport) GoInt Selection_AfterHtml(GoInt sIndex, char* cStrHtml);
extern __declspec(dllexport) GoInt Selection_AfterMatcher(GoInt sIndex, GoInt mIndex);
extern __declspec(dllexport) GoInt Selection_AfterSelection(GoInt sIndex1, GoInt sIndex2);
extern __declspec(dllexport) GoInt Selection_Append(GoInt sIndex, char* cStrSelector);
extern __declspec(dllexport) GoInt Selection_AppendHtml(GoInt sIndex, char* cStrHtml);
extern __declspec(dllexport) GoInt Selection_AppendMatcher(GoInt sIndex, GoInt mIndex);
extern __declspec(dllexport) GoInt Selection_AppendSelection(GoInt sIndex1, GoInt sIndex2);
extern __declspec(dllexport) GoUint8 Selection_Attr(GoInt sIndex, char* cStrAttrName, char* result);
extern __declspec(dllexport) void Selection_AttrOr(GoInt sIndex, char* cStrAttrName, char* cStrDefaultValue, char* result);
extern __declspec(dllexport) GoInt Selection_Before(GoInt sIndex, char* cStrSelector);
extern __declspec(dllexport) GoInt Selection_BeforeHtml(GoInt sIndex, char* cStrHtml);
extern __declspec(dllexport) GoInt Selection_BeforeMatcher(GoInt sIndex, GoInt mIndex);
extern __declspec(dllexport) GoInt Selection_BeforeSelection(GoInt sIndex1, GoInt sIndex2);
extern __declspec(dllexport) GoInt Selection_Children(GoInt sIndex);
extern __declspec(dllexport) GoInt Selection_ChildrenFiltered(GoInt sIndex, char* cStrSelector);
extern __declspec(dllexport) GoInt Selection_ChildrenMatcher(GoInt sIndex, GoInt mIndex);
extern __declspec(dllexport) GoInt Selection_Clone(GoInt sIndex);
extern __declspec(dllexport) GoInt Selection_Closest(GoInt sIndex, char* cStrSelector);
extern __declspec(dllexport) GoInt Selection_ClosestMatcher(GoInt sIndex, GoInt mIndex);
extern __declspec(dllexport) GoInt Selection_ClosestSelection(GoInt sIndex1, GoInt sIndex2);
extern __declspec(dllexport) GoInt Selection_Contents(GoInt sIndex);
extern __declspec(dllexport) GoInt Selection_ContentsFiltered(GoInt sIndex, char* cStrSelector);
extern __declspec(dllexport) GoInt Selection_ContentsMatcher(GoInt sIndex, GoInt mIndex);
extern __declspec(dllexport) GoInt Selection_Each(GoInt sIndex, GoUintptr funcCallback);
extern __declspec(dllexport) GoInt Selection_EachWithBreak(GoInt sIndex, GoUintptr funcCallback);
extern __declspec(dllexport) GoInt Selection_Empty(GoInt sIndex);
extern __declspec(dllexport) GoInt Selection_End(GoInt sIndex);
extern __declspec(dllexport) GoInt Selection_Eq(GoInt sIndex, GoInt index);
extern __declspec(dllexport) GoInt Selection_Filter(GoInt sIndex, char* cStrSelector);
extern __declspec(dllexport) GoInt Selection_FilterFunction(GoInt sIndex, GoUintptr funcCallback);
extern __declspec(dllexport) GoInt Selection_FilterMatcher(GoInt sIndex, GoInt mIndex);
extern __declspec(dllexport) GoInt Selection_FilterSelection(GoInt sIndex, GoInt sIndex2);
extern __declspec(dllexport) GoInt Selection_Find(GoInt sIndex, char* cStrSelector);
extern __declspec(dllexport) GoInt Selection_FindMatcher(GoInt sIndex, GoInt mIndex);
extern __declspec(dllexport) GoInt Selection_FindSelection(GoInt sIndex, GoInt sIndex2);
extern __declspec(dllexport) GoInt Selection_First(GoInt sIndex);
extern __declspec(dllexport) GoInt Selection_Has(GoInt sIndex, char* cStrSelector);
extern __declspec(dllexport) GoUint8 Selection_HasClass(GoInt sIndex, char* cStrClass);
extern __declspec(dllexport) GoInt Selection_HasMatcher(GoInt sIndex, GoInt mIndex);
extern __declspec(dllexport) GoInt Selection_HasSelection(GoInt sIndex, GoInt sIndex2);
extern __declspec(dllexport) GoUint8 Selection_Html(GoInt sIndex, char* result);
extern __declspec(dllexport) GoInt Selection_Index(GoInt sIndex);
extern __declspec(dllexport) GoInt Selection_IndexMatcher(GoInt sIndex, GoInt mIndex);
extern __declspec(dllexport) GoInt Selection_IndexOfSelection(GoInt sIndex, GoInt sIndex2);
extern __declspec(dllexport) GoInt Selection_IndexSelector(GoInt sIndex, char* cStrSelector);
extern __declspec(dllexport) GoUint8 Selection_Is(GoInt sIndex, char* cStrSelector);
extern __declspec(dllexport) GoUint8 Selection_IsFunction(GoInt sIndex, GoUintptr funcCallback);
extern __declspec(dllexport) GoUint8 Selection_IsMatcher(GoInt sIndex, GoInt mIndex);
extern __declspec(dllexport) GoUint8 Selection_IsSelection(GoInt sIndex, GoInt sIndex2);
extern __declspec(dllexport) GoInt Selection_Last(GoInt sIndex);
extern __declspec(dllexport) GoInt Selection_Length(GoInt sIndex);
extern __declspec(dllexport) GoInt Selection_Next(GoInt sIndex);
extern __declspec(dllexport) GoInt Selection_NextAll(GoInt sIndex);
extern __declspec(dllexport) GoInt Selection_NextAllFiltered(GoInt sIndex, char* cStrSelector);
extern __declspec(dllexport) GoInt Selection_NextAllMatcher(GoInt sIndex, GoInt mIndex);
extern __declspec(dllexport) GoInt Selection_NextFiltered(GoInt sIndex, char* cStrSelector);
extern __declspec(dllexport) GoInt Selection_NextFilteredUntil(GoInt sIndex, char* cStrFilterSelector, char* cStrUntilSelector);
extern __declspec(dllexport) GoInt Selection_NextFilteredUntilMatcher(GoInt sIndex, GoInt mIndexFilter, GoInt mIndexUntil);
extern __declspec(dllexport) GoInt Selection_NextFilteredUntilSelection(GoInt sIndex, char* cStrFilterSelector, GoInt sIndex2);
extern __declspec(dllexport) GoInt Selection_NextMatcher(GoInt sIndex, GoInt mIndex);
extern __declspec(dllexport) GoInt Selection_NextMatcherUntilSelection(GoInt sIndex, GoInt mIndex, GoInt sIndex2);
extern __declspec(dllexport) GoInt Selection_NextUntil(GoInt sIndex, char* cStrSelector);
extern __declspec(dllexport) GoInt Selection_NextUntilMatcher(GoInt sIndex, GoInt mIndex);
extern __declspec(dllexport) GoInt Selection_NextUntilSelection(GoInt sIndex, GoInt sIndex2);
extern __declspec(dllexport) GoInt Selection_Not(GoInt sIndex, char* cStrSelector);
extern __declspec(dllexport) GoInt Selection_NotFunction(GoInt sIndex, GoUintptr funcCallback);
extern __declspec(dllexport) GoInt Selection_NotMatcher(GoInt sIndex, GoInt mIndex);
extern __declspec(dllexport) GoInt Selection_NotSelection(GoInt sIndex, GoInt sIndex2);
extern __declspec(dllexport) GoInt Selection_Parent(GoInt sIndex, GoInt sIndex2);
extern __declspec(dllexport) GoInt Selection_ParentFiltered(GoInt sIndex, char* cStrSelector);
extern __declspec(dllexport) GoInt Selection_ParentMatcher(GoInt sIndex, GoInt mIndex);
extern __declspec(dllexport) GoInt Selection_Parents(GoInt sIndex);
extern __declspec(dllexport) GoInt Selection_ParentsFiltered(GoInt sIndex, char* cStrSelector);
extern __declspec(dllexport) GoInt Selection_ParentsFilteredUntil(GoInt sIndex, char* cStrFilterSelector, char* cStrUntilSelector);
extern __declspec(dllexport) GoInt Selection_ParentsFilteredUntilMatcher(GoInt sIndex, GoInt mIndexFilter, GoInt mIndexUntil);
extern __declspec(dllexport) GoInt Selection_ParentsFilteredUntilSelection(GoInt sIndex, char* cStrFilterSelector, GoInt sIndex2);
extern __declspec(dllexport) GoInt Selection_ParentsMatcher(GoInt sIndex, GoInt mIndex);
extern __declspec(dllexport) GoInt Selection_ParentsMatcherUntilSelection(GoInt sIndex, GoInt mIndex, GoInt sIndex2);
extern __declspec(dllexport) GoInt Selection_ParentsUntil(GoInt sIndex, char* cStrSelector);
extern __declspec(dllexport) GoInt Selection_ParentsUntilMatcher(GoInt sIndex, GoInt mIndex);
extern __declspec(dllexport) GoInt Selection_ParentsUntilSelection(GoInt sIndex, GoInt sIndex2);
extern __declspec(dllexport) GoInt Selection_Prepend(GoInt sIndex, char* cStrSelector);
extern __declspec(dllexport) GoInt Selection_PrependHtml(GoInt sIndex, char* cStrHtml);
extern __declspec(dllexport) GoInt Selection_PrependMatcher(GoInt sIndex, GoInt mIndex);
extern __declspec(dllexport) GoInt Selection_PrependSelection(GoInt sIndex, GoInt sIndex2);
extern __declspec(dllexport) GoInt Selection_Prev(GoInt sIndex);
extern __declspec(dllexport) GoInt Selection_PrevAll(GoInt sIndex);
extern __declspec(dllexport) GoInt Selection_PrevAllFiltered(GoInt sIndex, char* cStrSelector);
extern __declspec(dllexport) GoInt Selection_PrevAllMatcher(GoInt sIndex, GoInt mIndex);
extern __declspec(dllexport) GoInt Selection_PrevFiltered(GoInt sIndex, char* cStrSelector);
extern __declspec(dllexport) GoInt Selection_PrevFilteredUntil(GoInt sIndex, char* cStrFilterSelector, char* cStrUntilSelector);
extern __declspec(dllexport) GoInt Selection_PrevFilteredUntilMatcher(GoInt sIndex, GoInt mIndexFilter, GoInt mIndexUntil);
extern __declspec(dllexport) GoInt Selection_PrevFilteredUntilSelection(GoInt sIndex, char* cStrFilterSelector, GoInt sIndex2);
extern __declspec(dllexport) GoInt Selection_PrevMatcher(GoInt sIndex, GoInt mIndex);
extern __declspec(dllexport) GoInt Selection_PrevMatcherUntilSelection(GoInt sIndex, GoInt mIndex, GoInt sIndex2);
extern __declspec(dllexport) GoInt Selection_PrevUntil(GoInt sIndex, char* cStrSelector);
extern __declspec(dllexport) GoInt Selection_PrevUntilMatcher(GoInt sIndex, GoInt mIndex);
extern __declspec(dllexport) GoInt Selection_PrevUntilSelection(GoInt sIndex, GoInt sIndex2);
extern __declspec(dllexport) GoInt Selection_Remove(GoInt sIndex);
extern __declspec(dllexport) GoInt Selection_RemoveAttr(GoInt sIndex, char* cStrAttrName);
extern __declspec(dllexport) GoInt Selection_RemoveFiltered(GoInt sIndex, char* cStrSelector);
extern __declspec(dllexport) GoInt Selection_RemoveMatcher(GoInt sIndex, GoInt mIndex);
extern __declspec(dllexport) GoInt Selection_ReplaceWith(GoInt sIndex, char* cStrSelector);
extern __declspec(dllexport) GoInt Selection_ReplaceWithHtml(GoInt sIndex, char* cStrHtml);
extern __declspec(dllexport) GoInt Selection_ReplaceWithMatcher(GoInt sIndex, GoInt mIndex);
extern __declspec(dllexport) GoInt Selection_ReplaceWithSelection(GoInt sIndex, GoInt sIndex2);
extern __declspec(dllexport) GoInt Selection_SetAttr(GoInt sIndex, char* cStrAttrName, char* cStrValue);
extern __declspec(dllexport) GoInt Selection_SetHtml(GoInt sIndex, char* cStrHtml);
extern __declspec(dllexport) GoInt Selection_SetText(GoInt sIndex, char* cStrText);
extern __declspec(dllexport) GoInt Selection_Siblings(GoInt sIndex);
extern __declspec(dllexport) GoInt Selection_SiblingsFiltered(GoInt sIndex, char* cStrSelector);
extern __declspec(dllexport) GoInt Selection_SiblingsMatcher(GoInt sIndex, GoInt mIndex);
extern __declspec(dllexport) GoInt Selection_Size(GoInt sIndex);
extern __declspec(dllexport) GoInt Selection_Slice(GoInt sIndex, GoInt start, GoInt end);
extern __declspec(dllexport) void Selection_Text(GoInt sIndex, char* result);
extern __declspec(dllexport) GoInt Selection_Union(GoInt sIndex, GoInt sIndex2);
extern __declspec(dllexport) GoInt Selection_Unwrap(GoInt sIndex);
extern __declspec(dllexport) GoInt Selection_Wrap(GoInt sIndex, char* cStrSelector);
extern __declspec(dllexport) GoInt Selection_WrapAll(GoInt sIndex, char* cStrSelector);
extern __declspec(dllexport) GoInt Selection_WrapAllHtml(GoInt sIndex, char* cStrHtml);
extern __declspec(dllexport) GoInt Selection_WrapAllMatcher(GoInt sIndex, GoInt mIndex);
extern __declspec(dllexport) GoInt Selection_WrapAllSelection(GoInt sIndex, GoInt sIndex2);
extern __declspec(dllexport) GoInt Selection_WrapHtml(GoInt sIndex, char* cStrHtml);
extern __declspec(dllexport) GoInt Selection_WrapInner(GoInt sIndex, char* cStrSelector);
extern __declspec(dllexport) GoInt Selection_WrapInnerHtml(GoInt sIndex, char* cStrHtml);
extern __declspec(dllexport) GoInt Selection_WrapInnerMatcher(GoInt sIndex, GoInt mIndex);
extern __declspec(dllexport) GoInt Selection_WrapInnerSelection(GoInt sIndex, GoInt sIndex2);
extern __declspec(dllexport) GoInt Selection_WrapMatcher(GoInt sIndex, GoInt mIndex);
extern __declspec(dllexport) GoInt Selection_WrapSelection(GoInt sIndex, GoInt sIndex2);

#ifdef __cplusplus
}
#endif

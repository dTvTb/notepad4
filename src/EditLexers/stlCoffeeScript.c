#include "EditLexer.h"
#include "EditStyleX.h"

static KEYWORDLIST Keywords_CoffeeScript = {{
//++Autogenerated -- start of section automatically generated
"Infinity NaN and await break by catch class continue debugger default delete do else extends false finally for "
"if in instanceof is isnt loop new no not null of off on or return super switch then this throw true try typeof "
"undefined unless until when while yes yield "

, // 1 reserved words
"arguments case const enum eval function implements interface let native package private protected public static "
"var void with "

, // 2 directive
"__dirname __filename as export exports from import module require "

, // 3 class
"ActiveXObject AggregateError Array ArrayBuffer AsyncFunction AsyncGeneratorFunction Atomics "
"BigInt BigInt64Array BigUint64Array Boolean DataView Date Debug Document Enumerator Error EvalError EventTarget "
"FinalizationRegistry Float32Array Float64Array FormData Function GeneratorFunction Int16Array Int32Array Int8Array JSON "
"Map Math Number Object Promise Proxy RangeError ReferenceError Reflect RegExp "
"Set SharedArrayBuffer String Symbol SyntaxError TypeError URIError Uint16Array Uint32Array Uint8Array Uint8ClampedArray "
"VBArray WScript WeakMap WeakRef WeakSet Worker XMLHttpRequest "

, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL
//--Autogenerated -- end of section automatically generated
}};

static EDITSTYLE Styles_CoffeeScript[] = {
	EDITSTYLE_DEFAULT,
	{ SCE_COFFEESCRIPT_WORD, NP2StyleX_Keyword, L"fore:#0000FF" },
	{ SCE_COFFEESCRIPT_WORD2, NP2StyleX_ReservedWord, L"fore:#B000B0" },
	{ SCE_COFFEESCRIPT_DIRECTIVE, NP2StyleX_Directive, L"fore:#FF8000" },
	{ SCE_COFFEESCRIPT_CLASS, NP2StyleX_Class, L"bold; fore:#0080C0" },
	{ MULTI_STYLE(SCE_COFFEESCRIPT_PROPERTY, SCE_COFFEESCRIPT_PROPERTY_AT, 0, 0), NP2StyleX_Property, L"fore:#A46000" },
	{ MULTI_STYLE(SCE_COFFEESCRIPT_COMMENTLINE, SCE_COFFEESCRIPT_COMMENTBLOCK, SCE_COFFEESCRIPT_REGEX_COMMENT, 0), NP2StyleX_Comment, L"fore:#608060" },
	{ MULTI_STYLE(SCE_COFFEESCRIPT_STRING_SQ, SCE_COFFEESCRIPT_STRING_DQ, SCE_COFFEESCRIPT_XML_STRING_SQ, SCE_COFFEESCRIPT_XML_STRING_DQ), NP2StyleX_String, L"fore:#008000" },
	{ MULTI_STYLE(SCE_COFFEESCRIPT_TRIPLE_STRING_SQ, SCE_COFFEESCRIPT_TRIPLE_STRING_DQ, 0, 0), NP2StyleX_TripleQuotedString, L"fore:#F08000" },
	{ SCE_COFFEESCRIPT_ESCAPECHAR, NP2StyleX_EscapeSequence, L"fore:#0080C0" },
	{ MULTI_STYLE(SCE_COFFEESCRIPT_BACKTICKS, SCE_COFFEESCRIPT_TRIPLE_BACKTICKS, 0, 0), NP2StyleX_Backticks, L"fore:#FF0080" },
	{ MULTI_STYLE(SCE_COFFEESCRIPT_REGEX, SCE_COFFEESCRIPT_TRIPLE_REGEX, 0, 0), NP2StyleX_Regex, L"fore:#006633; back:#FFF1A8; eolfilled" },
	{ SCE_COFFEESCRIPT_XML_TAG, NP2StyleX_XMLTag, L"fore:#648000" },
	{ SCE_COFFEESCRIPT_XML_ATTRIBUTE, NP2StyleX_XMLAttribute, L"fore:#FF4000" },
	{ SCE_COFFEESCRIPT_NUMBER, NP2StyleX_Number, L"fore:#FF0000" },
	{ MULTI_STYLE(SCE_COFFEESCRIPT_OPERATOR, SCE_COFFEESCRIPT_OPERATOR2, SCE_COFFEESCRIPT_OPERATOR_PF, 0), NP2StyleX_Operator, L"fore:#B000B0" },
};

EDITLEXER lexCoffeeScript = {
	SCLEX_COFFEESCRIPT, NP2LEX_COFFEESCRIPT,
//Settings++Autogenerated -- start of section automatically generated
		LexerAttr_IndentBasedFolding |
		LexerAttr_IndentLookForward,
		TAB_WIDTH_4, INDENT_WIDTH_4,
		(1 << 1) | (1 << 2), // class, function
		0,
		'\\', SCE_COFFEESCRIPT_ESCAPECHAR, 0,
		0,
		0, 0,
		SCE_COFFEESCRIPT_OPERATOR, SCE_COFFEESCRIPT_OPERATOR2
		, KeywordAttr32(0, KeywordAttr_PreSorted) // keywords
		| KeywordAttr32(1, KeywordAttr_PreSorted) // reserved words
		| KeywordAttr32(2, KeywordAttr_PreSorted) // directive
		| KeywordAttr32(3, KeywordAttr_PreSorted) // class
		, SCE_COFFEESCRIPT_TASKMARKER,
		SCE_COFFEESCRIPT_STRING_SQ, SCE_COFFEESCRIPT_TRIPLE_REGEX,
//Settings--Autogenerated -- end of section automatically generated
	EDITLEXER_HOLE(L"CoffeeScript", Styles_CoffeeScript),
	L"coffee; cson; cjsx",
	&Keywords_CoffeeScript,
	Styles_CoffeeScript
};

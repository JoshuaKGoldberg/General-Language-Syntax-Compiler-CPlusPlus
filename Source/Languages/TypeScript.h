#ifndef _GLSC_SOURCE_LANGUAGES_TYPESCRIPT_
#define _GLSC_SOURCE_LANGUAGES_TYPESCRIPT_

#include "../GLSC.h"
#include "../Language.h"

using namespace std;

void GLSC::RegisterTypeScript() {
    RegisterLanguage(Language()
        .setName("TypeScript")
        .setExtension("ts")
        .setPrintFunction("console.log")
        .setSemiColon(";")
        .setClassConstructorName("constructor")
        .setClassEnd("}")
        .setClassFunctionsTakeThis(false)
        .setClassNew("new ")
        .setClassPrivacy(true)
        .setClassStartLeft("class ")
        .setClassStartRight(" {")
        .setClassThis("this")
        .setClassThisAccess(".")
        .setCommentorBlockStart("/*")
        .setCommentorBlockEnd("*/")
        .setCommentorInline("//")
        .setConditionStartLeft(" (")
        .setConditionStartRight(") {")
        .setConditionContinueLeft("} ")
        .setConditionContinueRight(" {")
        .setConditionEnd("}")
        .setFileEndLine("}")
        .setFileStartLeft("module ")
        .setFileStartRight(" {")
        .setFunctionDefine("function ")
        .setFunctionDefineRight(" {")
        .setFunctionDefineEnd("}")
        .setFunctionReturnsExplicit(false)
        .setMainEndLine("}")
        .setMainStartLine("export function Main(): void {")
        .setRangedForLoops(false)
        .setVariableTypesExplicit(true)
        .setVariableTypesAfterName(true)
        .setVariableTypeMarker(": ")
        .setVariableDeclare("var ")
        .addTypeAlias("number", "int")
        .addTypeAlias("number", "double")
        .addTypeAlias("number", "float")
        );
}

#endif
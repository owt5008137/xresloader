/**
 * This file is generated by xresloader 2.18.1, please don't edit it.
 * You can find more information about this xresloader on https://xresloader.atframe.work/ .
 * If there is any problem, please find or report issues on https://github.com/xresloader/xresloader/issues .
 */
#pragma once

#include "CoreMinimal.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/DataTable.h"
// Include headers set by UeCfg-IncludeHeader
#include "Engine/CompositeDataTable.h"


#include "EventRuleItem.generated.h"


USTRUCT(BlueprintType)
struct FEventRuleItem : public FTableRowBase
{
    GENERATED_USTRUCT_BODY()

    // Start of fields
    /** Field Type: oneof/union -> FString, Name: Nested, Index: 0. This field is generated for UE Editor compatible. **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    FString Nested;

    /** Field Type: INT, Name: RuleId, Index: 1. This field is generated for UE Editor compatible. **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    int32 RuleId;

    /** Field Type: INT, Name: RuleParam, Index: 2. This field is generated for UE Editor compatible. **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    int32 RuleParam;

    /** Field Type: STRING, Name: NestedNote, Index: 11. This field is generated for UE Editor compatible. **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    FString NestedNote;

    /** Field Type: INT, Name: NestedEnumType, Index: 12. This field is generated for UE Editor compatible. **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    int32 NestedEnumType;

};
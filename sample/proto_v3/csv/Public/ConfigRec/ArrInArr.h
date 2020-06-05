/**
 * This file is generated by xresloader 2.8.0, please don't edit it.
 * You can find more information about this xresloader on https://xresloader.atframe.work/ .
 * If there is any problem, please find or report issues on https://github.com/xresloader/xresloader/issues .
 */
#pragma once

#include "CoreMinimal.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/DataTable.h"
#include "ConfigRec/RoleCfg.h"
#include "ConfigRec/RoleUpgradeCfg.h"
#include "ArrInArr.generated.h"


USTRUCT(BlueprintType)
struct FArrInArr : public FTableRowBase
{
    GENERATED_USTRUCT_BODY()

    // Start of fields
    UENUM(BlueprintType)
    enum : int32 {
        kNameFieldNumber = 1 UMETA(DisplayName = "Name"),
        kIntArrFieldNumber = 2 UMETA(DisplayName = "IntArr"),
        kStrArrFieldNumber = 3 UMETA(DisplayName = "StrArr"),
        kTestInfoRoleFieldNumber = 11 UMETA(DisplayName = "TestInfoRole"),
        kTestRoleUpgradeCfgFieldNumber = 12 UMETA(DisplayName = "TestRoleUpgradeCfg"),
    };

    /** Field Type: INT, Name: IntArr, Index: 2 **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    TArray< int32 > IntArr;

    /** Field Type: STRING, Name: StrArr, Index: 3 **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    TArray< FString > StrArr;

    /** Field Type: oneof/union -> int32, Name: TestOnof, Index: 0. This field is generated for UE Editor compatible. **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    int32 TestOnof;

    /** Field Type: MESSAGE, Name: TestInfoRole, Index: 11 **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    FRoleCfg TestInfoRole;

    /** Field Type: MESSAGE, Name: TestRoleUpgradeCfg, Index: 12 **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    FRoleUpgradeCfg TestRoleUpgradeCfg;

    // This is a test name in array
    /** Field Type: STRING, Name: Name, Index: 1 **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    FName Name;

};


UCLASS(Blueprintable, BlueprintType)
class UArrInArrHelper : public UObject
{
    GENERATED_BODY()

public:
    UArrInArrHelper();

    static void ClearRow(FArrInArr& TableRow);

    UFUNCTION(BlueprintCallable, Category = "XResConfig")
    void ClearDataRow(FArrInArr& TableRow) const;

private:
    FArrInArr Empty;
};


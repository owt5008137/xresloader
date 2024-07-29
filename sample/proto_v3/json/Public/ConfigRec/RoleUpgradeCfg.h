/**
 * This file is generated by xresloader 2.18.2, please don't edit it.
 * You can find more information about this xresloader on https://xresloader.atframe.work/ .
 * If there is any problem, please find or report issues on https://github.com/xresloader/xresloader/issues .
 */
#pragma once
// Test role_upgrade_cfg with multi keys

#include "CoreMinimal.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/DataTable.h"

#include "RoleUpgradeCfg.generated.h"


USTRUCT(BlueprintType)
struct FRoleUpgradeCfg : public FTableRowBase
{
    GENERATED_USTRUCT_BODY()

    // Start of fields
    /** Field Type: STRING, Name: Name, Index: 0. This field is generated for UE Editor compatible. **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    FName Name;

    /** Field Type: INT, Name: Id, Index: 1. This field is generated for UE Editor compatible. **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    int32 Id;

    /** Field Type: INT, Name: Level, Index: 2. This field is generated for UE Editor compatible. **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    int32 Level;

    // Refer to cost_type
    /** Field Type: INT, Name: CostType, Index: 3. This field is generated for UE Editor compatible. **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    int32 CostType;

    /** Field Type: LONG, Name: CostValue, Index: 4. This field is generated for UE Editor compatible. **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    int64 CostValue;

    /** Field Type: INT, Name: ScoreAdd, Index: 5. This field is generated for UE Editor compatible. **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    int32 ScoreAdd;

};


UCLASS(Blueprintable, BlueprintType)
class URoleUpgradeCfgHelper : public UObject
{
    GENERATED_BODY()

public:
    URoleUpgradeCfgHelper();

    void OnReload();

    void SetLoader(TSharedPtr<ConstructorHelpers::FObjectFinder<UDataTable> > NewLoader);

    void InitializeDefaultLoader() const;

    void DisableDefaultLoader();

    const TCHAR* GetObjectPath() const;

    static FName GetRowName(int32 Id, int32 Level);

    UFUNCTION(BlueprintCallable, Category = "XResConfig")
    FName GetDataRowName(int32 Id, int32 Level) const;

    UFUNCTION(BlueprintCallable, Category = "XResConfig")
    FName GetTableRowName(const FRoleUpgradeCfg& TableRow) const;

    UFUNCTION(BlueprintCallable, Category = "XResConfig")
    const FRoleUpgradeCfg& GetDataRowByName(const FName& Name, bool& IsValid) const;

    UFUNCTION(BlueprintCallable, Category = "XResConfig")
    const FRoleUpgradeCfg& GetDataRowByKey(int32 Id, int32 Level, bool& IsValid) const;

    bool ForeachRow(TFunctionRef<void (const FName& Key, const FRoleUpgradeCfg& Value)> Predicate) const;

    UFUNCTION(BlueprintCallable, Category = "XResConfig")
    UDataTable* GetRawDataTable(bool& IsValid) const;

    static void ClearRow(FRoleUpgradeCfg& TableRow);

    UFUNCTION(BlueprintCallable, Category = "XResConfig")
    void ClearDataRow(FRoleUpgradeCfg& TableRow) const;

private:
    TSharedPtr<ConstructorHelpers::FObjectFinder<UDataTable> > Loader;
    UDataTable* DataTable;
    bool EnableDefaultLoader;
    FRoleUpgradeCfg Empty;
};


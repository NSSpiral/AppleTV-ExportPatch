/* Runtime dump - TSTConditionalStyleFormulaOwner
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTConditionalStyleFormulaOwner : NSObject <TSCEFormulaOwning>
{
    TSTTableInfo * mTableInfo;
    TSCECalculationEngine * mCalculationEngine;
    struct __CFUUID * mOwnerID;
    TSCECellCoordinateVector * mCellsToInvalidate;
    TSCECellCoordinateVector * mCellsToRewrite;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)releaseForCalculationEngine:(id)arg0;
- (void)retainForCalculationEngine:(id)arg0;
- (struct ?)recalculateForCalculationEngine:(id)arg0 formulaID:(struct ?)arg1 isInCycle:(char)arg2 hasCalculatedPrecedents:(char)arg3;
- (void)writeResultsForCalculationEngine:(id)arg0;
- (void)invalidateForCalculationEngine:(id)arg0;
- (void)rewriteForCalculationEngine:(id)arg0 formulaID:(struct ?)arg1 rewriteSpec:(NSObject *)arg2;
- (void)beginRewriteForCalculationEngine:(id)arg0 spec:(NSObject *)arg1;
- (TSTConditionalStyleFormulaOwner *)initWithTableInfo:(TSTTableInfo *)arg0;
- (TSTConditionalStyleFormulaOwner *)initWithTableInfo:(TSTTableInfo *)arg0 ownerID:(struct __CFUUID *)arg1;
- (void)setOwnerID:(struct __CFUUID *)arg0;
- (void)replaceFormulaForConditionalStyle:(NSObject *)arg0 atCellID:(struct ?)arg1;
- (void)setTableInfo:(TSTTableInfo *)arg0;
- (TSTTableInfo *)tableInfo;
- (int)registerWithCalculationEngineChoosingUniqueID:(NSObject *)arg0;
- (void)removeFormulaAtCellID:(struct ?)arg0;
- (void)addFormulaForConditionalStyle:(NSObject *)arg0 atCellID:(struct ?)arg1;
- (char)checkConditionForCellID:(struct ?)arg0 withConditionalStyle:(NSObject *)arg1 withIndex:(unsigned int *)arg2;
- (void)changedConditionForCellID:(struct ?)arg0;
- (struct __CFUUID *)ownerID;
- (void)dealloc;

@end

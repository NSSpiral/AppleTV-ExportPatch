/* Runtime dump - TSTHiddenStateFormulaOwner
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTHiddenStateFormulaOwner : TSPObject <TSCEFormulaOwning>
{
    struct __CFUUID * mOwnerID;
    TSTTableInfo * mTableInfo;
    TSCECalculationEngine * mCalculationEngine;
    struct vector<std::__1::pair<unsigned short, bool>, std::__1::allocator<std::__1::pair<unsigned short, bool> > > mPendingComputedShowRowResults;
    NSObject<OS_dispatch_queue> * mPendingComputedShowRowResultsQueue;
    struct vector<TSUColumnRowRect, std::__1::allocator<TSUColumnRowRect> > mCellRangesToInvalidate;
    struct vector<unsigned short, std::__1::allocator<unsigned short> > mHiddenRowIndices;
    TSTTableFilterSet * mRewrittenFilterSet;
    NSMutableArray * mThresholdCellValues;
    char mNeedsToUpdateFilterSetForImport;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (TSTHiddenStateFormulaOwner *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)releaseForCalculationEngine:(id)arg0;
- (void)retainForCalculationEngine:(id)arg0;
- (struct ?)recalculateForCalculationEngine:(id)arg0 formulaID:(struct ?)arg1 isInCycle:(char)arg2 hasCalculatedPrecedents:(char)arg3;
- (void)writeResultsForCalculationEngine:(id)arg0;
- (void)invalidateForCalculationEngine:(id)arg0;
- (TSCECalculationEngine *)calculationEngine;
- (void)rewriteForCalculationEngine:(id)arg0 formulaID:(struct ?)arg1 rewriteSpec:(NSObject *)arg2;
- (void)beginRewriteForCalculationEngine:(id)arg0 spec:(NSObject *)arg1;
- (TSTHiddenStateFormulaOwner *)initWithContext:(NSObject *)arg0 tableInfo:(TSTTableInfo *)arg1;
- (void)filterSetUpdated;
- (void)dirtyFilterState;
- (void)hiddenStateChangedForIndex:(unsigned short)arg0;
- (void)setOwnerID:(struct __CFUUID *)arg0;
- (struct ?)rangeReferenceFromIndex:(struct __CFUUID *)arg0 toIndex:(NSObject *)arg1;
- (void)setTableInfo:(TSTTableInfo *)arg0;
- (TSTTableInfo *)tableInfo;
- (int)registerWithCalculationEngineChoosingUniqueID:(NSObject *)arg0;
- (struct ?)cellReferenceForIndex:(NSObject *)arg0;
- (void)p_removeAllFormulaFromCalculationEngine;
- (void)p_registerAllFormulaToCalculationEngine;
- (struct __CFUUID *)ownerID;
- (void)dealloc;
- (void).cxx_construct;
- (void).cxx_destruct;

@end

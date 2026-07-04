/* Runtime dump - TSTSortRuleReferenceTracker
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTSortRuleReferenceTracker : NSObject <TSCEReferenceTrackerDelegate>
{
    TSTTableInfo * mTableInfo;
    NSMutableSet * mReferences;
    TSCEReferenceTracker * mReferenceTracker;
}

@property (nonatomic) TSTTableInfo * tableInfo;

- (void)registerWithCalculationEngine:(TSCECalculationEngine *)arg0;
- (void)trackedReferenceWasDeleted:(id)arg0 fromOwnerID:(struct __CFUUID *)arg1;
- (void)referencedCellWasModified:(id)arg0;
- (char)shouldRewriteOnSort;
- (char)shouldRewriteOnRangeMove;
- (char)shouldRewriteOnTectonicShift;
- (char)shouldRewriteOnCellMerge;
- (char)shouldRewriteOnTranspose;
- (char)shouldRewriteOnTableIDReassignment;
- (id)cellRangeWasInserted:(struct ?)arg0;
- (void)encodeToArchive:(struct SortRuleReferenceTrackerArchive *)arg0 archiver:(NSObject *)arg1;
- (void)unregisterFromCalculationEngine;
- (TSTSortRuleReferenceTracker *)initFromArchive:(struct SortRuleReferenceTrackerArchive *)arg0 unarchiver:(struct SortRuleReferenceTrackerArchive)arg1;
- (TSTSortRuleReferenceTracker *)initWithTableInfo:(TSTTableInfo *)arg0 context:(NSObject *)arg1;
- (void)updateForSortRules:(id)arg0;
- (void)setOwnerID:(struct __CFUUID *)arg0;
- (void)setTableInfo:(TSTTableInfo *)arg0;
- (TSTTableInfo *)tableInfo;
- (void)registerWithCalculationEngineChoosingUniqueID:(NSObject *)arg0;
- (struct ?)p_cReferenceForColumnIndex:(struct ?)arg0;
- (NSObject *)p_ruleReferenceForTrackedReference:(NSObject *)arg0;
- (unsigned char)p_columnForTrackedReference:(NSObject *)arg0;
- (struct __CFUUID *)ownerID;
- (void)dealloc;

@end

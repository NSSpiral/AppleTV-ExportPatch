/* Runtime dump - TSCENamedReferenceManager
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCENamedReferenceManager : TSPObject <TSCEReferenceTrackerDelegate>
{
    TSCENamedReferenceTrie * mNames;
    struct __CFDictionary * mStringsByTrackedReferenceByTable;
    struct __CFSet * mTablesBeingTracked;
    NSLock * mNRMLock;
    TSCEReferenceTracker * mReferenceTracker;
    TSCECalculationEngine * mCalculationEngine;
}

- (TSCENamedReferenceManager *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (TSCENamedReferenceManager *)initWithContext:(NSObject *)arg0 calculationEngine:(TSCECalculationEngine *)arg1;
- (void)updateTrackedHeaders:(struct __CFUUID *)arg0;
- (char)referenceNameIsUnique:(id)arg0 forReference:(struct ?)arg1 contextTable:(struct ?)arg2;
- (NSString *)trackedReferencesExactlyMatchingString:(NSString *)arg0 scopedToTable:(struct __CFUUID *)arg1;
- (NSString *)trackedReferencesMatchingPrefix:(NSString *)arg0 scopedToTable:(struct __CFUUID *)arg1;
- (NSObject *)referenceForTrackedReference:(NSObject *)arg0 sticky:(char)arg1;
- (struct ?)rangeForTrackedReference:(struct __CFUUID *)arg0 gettingTrackedCell:(NSObject *)arg1;
- (id)referenceTracker;
- (void)setCalculationEngine:(TSCECalculationEngine *)arg0;
- (struct __CFUUID *)formulaOwnerID;
- (void)beginTrackingNamesInRange:(struct TSCERangeCoordinate)arg0 ofResolver:(struct ?)arg1 addingTrackedReferencesTo:(id)arg2;
- (void)beginTrackingNameInCell:(struct ?)arg0 ofResolver:(AVPlayerControllerTimeResolver *)arg1 addingTrackedReferencesTo:(id)arg2;
- (NSObject *)stringForTrackedReference:(NSObject *)arg0 inTable:(struct __CFUUID *)arg1;
- (void)trackedReferenceWasDeleted:(id)arg0 fromOwnerID:(struct __CFUUID *)arg1;
- (char)trackedReferencesExistForTable:(struct __CFUUID *)arg0;
- (void)headerCellContentWasModified:(id)arg0;
- (id)beginTrackingNamesInTable:(struct __CFUUID *)arg0 limitedToRange:(struct TSCERangeCoordinate)arg1;
- (void)referencedCellWasModified:(id)arg0;
- (char)shouldRewriteOnSort;
- (char)shouldRewriteOnRangeMove;
- (char)shouldRewriteOnTectonicShift;
- (char)shouldRewriteOnCellMerge;
- (char)shouldRewriteOnTranspose;
- (char)shouldRewriteOnTableIDReassignment;
- (id)cellRangeWasInserted:(struct ?)arg0;
- (void)endTrackingNamesInTable:(struct __CFUUID *)arg0;
- (NSString *)trackedReferencesMatchingPrefix:(NSString *)arg0;
- (void)dealloc;
- (NSString *)description;
- (TSCENamedReferenceManager *)initWithContext:(TSPObjectContext *)arg0;

@end

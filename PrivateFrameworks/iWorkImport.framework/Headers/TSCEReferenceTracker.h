/* Runtime dump - TSCEReferenceTracker
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEReferenceTracker : TSPObject <TSCEFormulaOwning>
{
    struct __CFUUID * mUUID;
    TSCECalculationEngine * mCalculationEngine;
    char mIsRegisteredWithCalculationEngine;
    <TSCEReferenceTrackerDelegate> * mDelegate;
    NSLock * mTrackedRefsLock;
    NSMutableArray * mTrackedReferences;
    unsigned int mNextEmptyTrackedReferencesIndex;
    unsigned int mNumberOfTrackedReferences;
    struct vector<TSCEFormulaID, std::__1::allocator<TSCEFormulaID> > mFormulaIDsToRewrite;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) <TSCEReferenceTrackerDelegate> * delegate;

- (TSCEReferenceTracker *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)releaseForCalculationEngine:(id)arg0;
- (void)retainForCalculationEngine:(id)arg0;
- (id)objectToArchiveInDependencyTracker;
- (struct ?)recalculateForCalculationEngine:(id)arg0 formulaID:(struct ?)arg1 isInCycle:(char)arg2 hasCalculatedPrecedents:(char)arg3;
- (void)writeResultsForCalculationEngine:(id)arg0;
- (void)invalidateForCalculationEngine:(id)arg0;
- (unsigned int)numberOfTrackedReferences;
- (void)setCalculationEngine:(TSCECalculationEngine *)arg0;
- (struct __CFUUID *)formulaOwnerID;
- (TSCEReferenceTracker *)initWithContext:(NSObject *)arg0 calculationEngine:(TSCECalculationEngine *)arg1 delegate:(<TSCEReferenceTrackerDelegate> *)arg2;
- (void)registerWithCalculationEngine:(char)arg0;
- (NSObject *)beginTrackingReferenceWithCReference:(struct ?)arg0;
- (id)allTrackedReferences;
- (void)endTrackingReference:(NSObject *)arg0;
- (void)trackedReferenceWasDeleted:(id)arg0 fromOwnerID:(struct __CFUUID *)arg1;
- (char)trackedReferencesExistForTable:(struct __CFUUID *)arg0;
- (id)cellRangeWasInserted:(struct ?)arg0;
- (TSCECalculationEngine *)calculationEngine;
- (void)beginTrackingReference:(NSObject *)arg0;
- (void)unregisterFromCalculationEngine;
- (void)setFormulaOwnerID:(struct __CFUUID *)arg0;
- (NSObject *)trackedReferenceAtID:(struct ?)arg0;
- (void)rewriteForCalculationEngine:(id)arg0 formulaID:(struct ?)arg1 rewriteSpec:(NSObject *)arg2;
- (void)beginRewriteForCalculationEngine:(id)arg0 spec:(NSObject *)arg1;
- (void)dealloc;
- (void)setDelegate:(<TSCEReferenceTrackerDelegate> *)arg0;
- (<TSCEReferenceTrackerDelegate> *)delegate;
- (void).cxx_construct;
- (void).cxx_destruct;

@end

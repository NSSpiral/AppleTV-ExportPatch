/* Runtime dump - PFUbiquityRecordImportConflict
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityRecordImportConflict : NSObject
{
    NSString * _conflictingObjectGlobalIDStr;
    NSManagedObject * _sourceObject;
    NSDictionary * _conflictingLogContent;
    PFUbiquityKnowledgeVector * _conflictingLogKnowledgeVector;
    PFUbiquityKnowledgeVector * _currentKnowledgeVector;
    int _conflictingLogTransactionType;
    NSDate * _conflictLogDate;
    NSNumber * _conflictingLogTransactionNumber;
    NSArray * _transactionHistory;
    NSDictionary * _globalIDIndexToLocalIDURIMap;
    PFUbiquityImportContext * _importContext;
    NSMutableDictionary * _relationshipsToObjectIDsToCheck;
}

@property (retain, nonatomic) NSString * conflictingObjectGlobalIDStr;
@property (retain, nonatomic) NSManagedObject * sourceObject;
@property (retain, nonatomic) NSDictionary * conflictingLogContent;
@property (retain, nonatomic) PFUbiquityKnowledgeVector * conflictingLogKnowledgeVector;
@property (retain, nonatomic) PFUbiquityKnowledgeVector * currentKnowledgeVector;
@property (nonatomic) int conflictingLogTransactionType;
@property (retain, nonatomic) NSDate * conflictLogDate;
@property (retain, nonatomic) NSNumber * conflictingLogTransactionNumber;
@property (retain, nonatomic) NSArray * transactionHistory;
@property (retain, nonatomic) NSDictionary * globalIDIndexToLocalIDURIMap;
@property (retain, nonatomic) PFUbiquityImportContext * importContext;
@property (readonly, nonatomic) NSDictionary * relationshipToObjectIDsToCheck;

+ (int)resolvedTypeForConflictingLogType:(int)arg0 andLatestTransactionEntry:(id)arg1 skipObject:(char *)arg2;
+ (PFUbiquityRecordImportConflict *)electAncestorKnowledgeVectorForKnowledgeVector:(id)arg0 withExportingPeerID:(NSString *)arg1 fromPeerSnapshotCollection:(PFUbiquityPeerSnapshotCollection *)arg2;
+ (NSObject *)createSnapshotFromManagedObject:(NSObject *)arg0 withSourceObject:(NSManagedObject *)arg1;
+ (PFUbiquityRecordImportConflict *)createTransactionLogForTransactionEntry:(id)arg0 withImportContext:(PFUbiquityImportContext *)arg1 error:(id *)arg2;
+ (void)initialize;

- (char)resolveConflict:(id *)arg0;
- (PFUbiquityImportContext *)importContext;
- (void)setCurrentKnowledgeVector:(PFUbiquityKnowledgeVector *)arg0;
- (void)setConflictLogDate:(NSDate *)arg0;
- (void)setSourceObject:(NSManagedObject *)arg0;
- (void)setConflictingLogTransactionType:(int)arg0;
- (void)setConflictingLogKnowledgeVector:(PFUbiquityKnowledgeVector *)arg0;
- (PFUbiquityKnowledgeVector *)currentKnowledgeVector;
- (void)setConflictingLogTransactionNumber:(NSNumber *)arg0;
- (void)setTransactionHistory:(NSArray *)arg0;
- (void)setGlobalIDIndexToLocalIDURIMap:(NSDictionary *)arg0;
- (void)setImportContext:(PFUbiquityImportContext *)arg0;
- (NSObject *)createSnapshotFromLogContent:(NSObject *)arg0 withTransactionLog:(PFUbiquityTransactionLog *)arg1;
- (void)setConflictingLogContent:(NSDictionary *)arg0;
- (NSDictionary *)relationshipToObjectIDsToCheck;
- (void)setConflictingObjectGlobalIDStr:(NSString *)arg0;
- (void)addObjectIDsForDiff:(id)arg0 forRelationship:(OCXRelationship *)arg1;
- (void)addObjectID:(NSObject *)arg0 forRelationship:(OCXRelationship *)arg1;
- (NSObject *)_newNormalizedSnapshot:(NSObject *)arg0 forObject:(NSObject *)arg1;
- (NSArray *)transactionHistory;
- (id)createSnapshotDictionaryFromLogEntry:(id)arg0 withError:(id *)arg1;
- (PFUbiquityKnowledgeVector *)conflictingLogKnowledgeVector;
- (char)resolveMergeConflictForLogContent:(NSObject *)arg0 previousSnapshot:(NSObject *)arg1 andAncestorSnapshot:(NSObject *)arg2 withOldVersion:(unsigned int)arg3 andNewVersion:(unsigned int)arg4 error:(id *)arg5;
- (id)createSnapshotFromBaselineForEntry:(id)arg0 error:(id *)arg1;
- (id)createSnapshotDictionaryForObjectWithEntry:(struct archive_entry *)arg0 inTransactionLog:(PFUbiquityTransactionLog *)arg1 withError:(id *)arg2;
- (NSDictionary *)globalIDIndexToLocalIDURIMap;
- (id)createSetOfManagedObjectIDsForGlobalIDsInRelationship:(id)arg0 withValue:(NSValue *)arg1 withGlobalIDToLocalIDURIMap:(NSObject *)arg2 andTransactionLog:(id)arg3;
- (NSString *)conflictingObjectGlobalIDStr;
- (NSDictionary *)conflictingLogContent;
- (int)conflictingLogTransactionType;
- (NSDate *)conflictLogDate;
- (NSNumber *)conflictingLogTransactionNumber;
- (void)dealloc;
- (PFUbiquityRecordImportConflict *)init;
- (NSString *)description;
- (NSManagedObject *)sourceObject;

@end

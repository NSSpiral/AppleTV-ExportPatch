/* Runtime dump - PFUbiquityStoreSaveSnapshot
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityStoreSaveSnapshot : NSObject
{
    NSMutableArray * _entityNames;
    NSMutableArray * _peerIDs;
    NSMutableArray * _globalObjectIDs;
    NSMutableArray * _primaryKeys;
    NSMutableDictionary * _managedObjectIDToGlobalObjectID;
    NSMutableDictionary * _globalObjectIDToPermanentManagedObjectID;
    NSMutableDictionary * _entityNameToIndex;
    NSMutableDictionary * _peerIDToIndex;
    NSMutableDictionary * _primaryKeyToIndex;
    NSMutableDictionary * _globalObjectIDToIndex;
    NSMutableDictionary * _insertedObjects;
    NSMutableDictionary * _updatedObjects;
    NSMutableDictionary * _deletedObjects;
    NSMutableDictionary * _peerStates;
    NSNumber * _transactionNumber;
    NSString * _exportingPeerID;
    NSString * _localPeerID;
    NSDictionary * _storeOptions;
    NSMutableArray * _filesInsertedInTransaction;
    NSArray * _filesDeletedInTransaction;
    PFUbiquityKnowledgeVector * _storeKV;
    PFUbiquityGlobalObjectIDCache * _gidCache;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, nonatomic) NSArray * entityNames;
@property (readonly, nonatomic) NSArray * peerIDs;
@property (readonly, nonatomic) NSArray * globalObjectIDs;
@property (readonly, nonatomic) NSArray * primaryKeys;
@property (readonly, nonatomic) NSDictionary * insertedObjects;
@property (readonly, nonatomic) NSDictionary * updatedObjects;
@property (readonly, nonatomic) NSDictionary * deletedObjects;
@property (readonly, nonatomic) NSDictionary * peerStates;
@property (retain, nonatomic) NSNumber * transactionNumber;
@property (retain, nonatomic) NSString * exportingPeerID;
@property (retain, nonatomic) NSString * localPeerID;
@property (retain, nonatomic) PFUbiquityKnowledgeVector * storeKV;
@property (readonly, nonatomic) NSDictionary * globalObjectIDToPermanentManagedObjectID;
@property (readonly, nonatomic) NSDictionary * managedObjectIDToGlobalObjectID;
@property (readonly, nonatomic) NSDictionary * entityNameToIndex;
@property (readonly, nonatomic) NSDictionary * peerIDToIndex;
@property (readonly, nonatomic) NSDictionary * primaryKeyToIndex;
@property (readonly, nonatomic) NSDictionary * globalObjectIDToIndex;
@property (retain, nonatomic) PFUbiquityGlobalObjectIDCache * globalObjectIDCache;

- (NSArray *)primaryKeys;
- (NSString *)localPeerID;
- (void)setDeletedObjects:(NSDictionary *)arg0;
- (NSString *)exportingPeerID;
- (void)setExportingPeerID:(NSString *)arg0;
- (NSNumber *)transactionNumber;
- (void)setTransactionNumber:(NSNumber *)arg0;
- (NSObject *)globalObjectIDFromCompressedObjectID:(NSObject *)arg0;
- (NSArray *)createKnowledgeVectorFromPeerStates;
- (void)_setFilesDeletedInTransaction:(NSObject *)arg0;
- (void)reserveTransactionNumberWithStoreExportContext:(NSObject *)arg0;
- (void)generatePeerStates;
- (void)resetFromOptimisticLockingException;
- (NSObject *)addManagedObject:(NSObject *)arg0 withTransactionType:(int)arg1 andStoreExportContext:(NSObject *)arg2 withError:(id *)arg3;
- (NSMutableArray *)filesInsertedInTransaction;
- (NSDictionary *)peerStates;
- (NSObject *)compressedGlobalObjectIDFromGlobalObjectID:(NSObject *)arg0;
- (PFUbiquityKnowledgeVector *)storeKV;
- (PFUbiquityStoreSaveSnapshot *)initWithExportingPeerID:(NSString *)arg0;
- (void)setLocalPeerID:(NSString *)arg0;
- (PFUbiquityStoreSaveSnapshot *)initForExport:(JSExport *)arg0;
- (NSArray *)entityNames;
- (NSArray *)peerIDs;
- (NSArray *)globalObjectIDs;
- (NSDictionary *)managedObjectIDToGlobalObjectID;
- (NSDictionary *)entityNameToIndex;
- (NSDictionary *)peerIDToIndex;
- (NSDictionary *)primaryKeyToIndex;
- (id)checkIndecies:(id)arg0;
- (NSObject *)noSyncCheckIndex:(NSObject *)arg0 forValue:(NSValue *)arg1 fromArrayOfValues:(NSArray *)arg2;
- (NSObject *)globalObjectIDForManagedObject:(NSObject *)arg0 withStoreExportContext:(NSObject *)arg1;
- (NSDictionary *)createUbiquityDictionary:(NSDictionary *)arg0 withStoreExportContext:(NSObject *)arg1 error:(id *)arg2;
- (NSObject *)checkIndex:(NSObject *)arg0 forValue:(NSValue *)arg1 fromArrayOfValues:(NSArray *)arg2;
- (NSArray *)transactionNumberFromPeerStates:(NSArray *)arg0;
- (NSArray *)filesDeletedInTransaction;
- (void)setTransactionNumber:(NSNumber *)arg0 peerStates:(NSDictionary *)arg1 andPeerIDs:(id)arg2;
- (void)setEntityNames:(NSArray *)arg0 globalObjectIDs:(NSArray *)arg1 primaryKeys:(NSArray *)arg2 forStoreName:(NSString *)arg3 withRootLocation:(PFUbiquityLocation *)arg4;
- (void)setInsertedObjects:(NSDictionary *)arg0;
- (void)setUpdatedObjects:(NSDictionary *)arg0;
- (void)prepareForGlobalIDReplacement;
- (void)replaceGlobalObjectID:(NSObject *)arg0 withGlobalObjectID:(NSObject *)arg1;
- (void)finishGlobalIDReplacement;
- (NSDictionary *)globalObjectIDToIndex;
- (NSDictionary *)globalObjectIDToPermanentManagedObjectID;
- (void)setStoreKV:(PFUbiquityKnowledgeVector *)arg0;
- (PFUbiquityGlobalObjectIDCache *)globalObjectIDCache;
- (void)setGlobalObjectIDCache:(PFUbiquityGlobalObjectIDCache *)arg0;
- (void)dealloc;
- (PFUbiquityStoreSaveSnapshot *)init;
- (NSString *)description;
- (NSDictionary *)insertedObjects;
- (NSDictionary *)updatedObjects;
- (NSDictionary *)deletedObjects;

@end

/* Runtime dump - TSPPackageReadCoordinator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPackageReadCoordinator : TSPReadCoordinatorBase <TSPReadCoordinator>
{
    TSPObjectContext * _context;
    NSUUID * _documentUUID;
    TSPObject * _documentObject;
    TSPPackage * _package;
    NSURL * _packageURL;
    TSPFinalizeHandlerQueue * _finalizeHandlerQueue;
    TSPDocumentResourceDataProvider * _documentResourceDataProvider;
    char _areExternalDataReferencesAllowed;
    char _skipDocumentUpgrade;
    TSPPackageMetadata * _cachedMetadata;
    unsigned long long _readVersion;
    unsigned long long _writeVersion;
    TSPPersistedObjectUUIDMap * _persistedUUIDMap;
    struct vector<std::__1::auto_ptr<TSP::PersistedObjectUUIDMapOperation>, std::__1::allocator<std::__1::auto_ptr<TSP::PersistedObjectUUIDMapOperation> > > _persistedUUIDMapOperations;
    NSObject<OS_dispatch_queue> * _errorQueue;
    NSError * _error;
    NSObject<OS_dispatch_group> * _completionGroup;
    NSObject<OS_dispatch_queue> * _ioQueue;
    NSObject<OS_dispatch_queue> * _ioCompletionQueue;
    NSObject<OS_dispatch_queue> * _readCompletionQueue;
    NSObject<OS_dispatch_queue> * _componentQueue;
    struct hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > _readIdentifiers;
    NSMutableArray * _componentsToUpgrade;
    NSObject<OS_dispatch_queue> * _objectQueue;
    NSMapTable * _objects;
    struct hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > _readExternalObjects;
    char _didRequireUpgrade;
    TSPDocumentRevision * _documentRevision;
    int _preferredPackageType;
    TSPObject * _metadataObject;
    unsigned long long _saveToken;
}

@property (readonly, nonatomic) unsigned long long readVersion;
@property (readonly, nonatomic) unsigned long long writeVersion;
@property (readonly, nonatomic) TSPDocumentRevision * documentRevision;
@property (readonly, nonatomic) unsigned long long saveToken;
@property (readonly, nonatomic) int preferredPackageType;
@property (readonly, nonatomic) TSPObject * metadataObject;
@property (readonly, nonatomic) char didRequireUpgrade;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) char isReadingFromDocument;

- (unsigned long long)saveToken;
- (unsigned long long)fileFormatVersion;
- (TSPDocumentRevision *)documentRevision;
- (unsigned char)packageIdentifier;
- (NSError *)readPackageMetadataWithError:(id *)arg0;
- (TSPPackageReadCoordinator *)initWithContext:(TSPObjectContext *)arg0 package:(TSPPackage *)arg1 packageURLOrNil:(id)arg2 finalizeHandlerQueue:(TSPFinalizeHandlerQueue *)arg3 documentResourceDataProvider:(TSPDocumentResourceDataProvider *)arg4 areExternalDataReferencesAllowed:(char)arg5 skipDocumentUpgrade:(char)arg6;
- (int)preferredPackageType;
- (TSPObject *)metadataObject;
- (void)updateObjectContextForSuccessfulRead;
- (char)didRequireUpgrade;
- (unsigned long long)writeVersion;
- (void)readRootObjectWithCompletionQueue:(NSObject<OS_dispatch_queue> *)arg0 completion:(id /* block */)arg1;
- (void)processMetadata:(NSDictionary *)arg0;
- (char)endReading;
- (void)readComponent:(id)arg0 completionQueue:(NSObject<OS_dispatch_queue> *)arg1 completion:(id /* block */)arg2;
- (char)requestDocumentResourcesUsingDataProvider:(NSObject *)arg0;
- (char)hasDocumentVersionUUID;
- (void)reader:(NSObject *)arg0 didFindExternalReferenceToObjectIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isWeak:(char)arg3 allowUnknownObject:(char)arg4 fromParentObject:(NSObject *)arg5 completion:(id /* block */)arg6;
- (void)reader:(NSObject *)arg0 didFindExternalRepeatedReference:(NSObject *)arg1 isWeak:(char)arg2 allowUnknownObject:(char)arg3 fromParentObject:(NSObject *)arg4 completion:(id /* block */)arg5;
- (char)isReadingFromDocument;
- (void)didUpdateLazyReferenceDelegate:(NSObject *)arg0;
- (NSUUID *)baseObjectUUID;
- (NSString *)unarchivedObjectForIdentifier:(long long)arg0 isReadFinished:(char)arg1;
- (NSString *)externalObjectForIdentifier:(long long)arg0 componentIdentifier:(long long)arg1 isReadFinished:(char)arg2;
- (void)didReferenceExternalObject:(NSObject *)arg0 withIdentifier:(long long)arg1;
- (long long)reader:(NSObject *)arg0 wantsObjectIdentifierForUUID:(id)arg1;
- (NSObject *)reader:(NSObject *)arg0 wantsDataForIdentifier:(long long)arg1;
- (long long)metadataObjectIdentifier;
- (void)readComponent:(id)arg0 additionalComponents:(NSArray *)arg1 requireUpgrade:(char)arg2 completionQueue:(NSObject<OS_dispatch_queue> *)arg3 completion:(id /* block */)arg4;
- (void)readPackageMetadataWithComponent:(id)arg0 completionQueue:(NSObject<OS_dispatch_queue> *)arg1 completion:(id /* block */)arg2;
- (char)readComponentIfNeededAsync:(id)arg0;
- (void)prepareForFullDocumentUpgradeImpl;
- (void)readComponentAsync:(id)arg0;
- (void)didReadObjects:(NSArray *)arg0 forComponent:(_UIDatePickerComponent *)arg1 packageIdentifier:(unsigned char)arg2;
- (void)prepareToReadComponentWithIdentifier:(long long)arg0 forObjectIdentifier:(long long)arg1 isWeakReference:(char)arg2 queue:(NSObject *)arg3 completion:(id /* block */)arg4;
- (void)didReadMetadata:(NSDictionary *)arg0;
- (void)readExternalReferenceComponentIfNeededAsyncForObjectIdentifier:(long long)arg0 componentIdentifier:(long long)arg1 isWeak:(char)arg2 fromComponent:(_UIDatePickerComponent *)arg3;
- (void)prepareForFullDocumentUpgrade;
- (void)reader:(NSObject *)arg0 didResetObjectIdentifierForObject:(NSObject *)arg1 originalObjectIdentifier:(long long)arg2;
- (void)reader:(NSObject *)arg0 didResetObjectUUID:(id)arg1 forObjectIdentifier:(long long)arg2 originalObjectUUID:(id)arg3;
- (unsigned long long)readVersion;
- (TSPPackageReadCoordinator *)init;
- (TSPObjectContext *)context;
- (void).cxx_construct;
- (void).cxx_destruct;
- (NSError *)error;
- (void)setError:(NSError *)arg0;

@end

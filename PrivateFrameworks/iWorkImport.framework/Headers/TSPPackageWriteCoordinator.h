/* Runtime dump - TSPPackageWriteCoordinator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPackageWriteCoordinator : NSObject <TSPArchiverManagerDelegate, TSPComponentWriterDelegate, TSPDataArchiver, TSPExternalReferenceDelegate, TSPObjectModifyDelegate>
{
    TSPObjectContext * _context;
    unsigned char _packageIdentifier;
    TSPDocumentRevision * _documentRevision;
    unsigned long long _fileFormatVersion;
    unsigned long long _saveToken;
    int _preferredPackageType;
    TSPObject * _metadataObject;
    TSPDataAttributesSnapshot * _dataAttributesSnapshot;
    TSPArchiverManager * _archiverManager;
    NSObject<OS_dispatch_group> * _completionGroup;
    struct /* ? */ _componentPropertiesSnapshot;
    NSObject<OS_dispatch_queue> * _componentQueue;
    struct hash_map<const long long, TSP::WrittenComponentInfo, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSP::WrittenComponentInfo> > > _writtenComponents;
    struct hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > _skippedComponents;
    struct /* ? */ _remainingComponentsQueue;
    TSUPathSet * _packageLocatorPathSet;
    TSPObjectContainer * _objectContainer;
    char _didWriteObjectContainer;
    NSObject<OS_dispatch_queue> * _modifyObjectQueue;
    NSHashTable * _modifiedObjectsDuringWrite;
    char _captureSnapshots;
    NSObject<OS_dispatch_queue> * _externalLazyReferencesQueue;
    TSPComponentExternalReferenceMap * _externalLazyReferencesMap;
    NSObject<OS_dispatch_queue> * _objectsQueue;
    struct hash_map<const long long, TSP::WrittenObjectInfo, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSP::WrittenObjectInfo> > > _writtenObjects;
    struct queue<TSP::WrittenObjectInfo, std::__1::deque<TSP::WrittenObjectInfo, std::__1::allocator<TSP::WrittenObjectInfo> > > _writtenLazyReferences;
    NSObject<OS_dispatch_queue> * _externalReferenceQueue;
    NSMutableArray * _externalReferenceBlocks;
    NSObject<OS_dispatch_queue> * _metadataQueue;
    unsigned long long _readVersion;
    unsigned long long _writeVersion;
    NSHashTable * _referencedDatas;
    NSMutableArray * _dataFinalizeHandlers;
    char _writeSuccess;
    char _isRecoverableError;
    char _isCancelled;
    char _didWriteRootObject;
    char _didWriteMetadata;
    NSURL * _documentTargetURL;
    NSURL * _relativeURLForExternalData;
    TSPPackageMetadata * _packageMetadata;
}

@property (readonly, nonatomic) TSPPackageMetadata * packageMetadata;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSURL * relativeURLForExternalData;

- (void)willModifyObject:(NSObject *)arg0 duringReadOperation:(char)arg1;
- (TSPPackageWriteCoordinator *)initWithContext:(TSPObjectContext *)arg0 documentRevision:(TSPDocumentRevision *)arg1 saveToken:(unsigned long long)arg2 packageIdentifier:(unsigned char)arg3 fileFormatVersion:(unsigned long long)arg4 preferredPackageType:(int)arg5 metadataObject:(TSPObject *)arg6 dataAttributesSnapshot:(TSPDataAttributesSnapshot *)arg7;
- (NSURL *)relativeURLForExternalData;
- (unsigned int)writeRootObject:(NSObject *)arg0 withPackageWriter:(NSObject *)arg1 saveOperationState:(NSObject *)arg2 error:(id *)arg3;
- (void)stopCapturingSnapshots;
- (void)enumerateWrittenObjectsWithBlock:(id /* block */)arg0;
- (void)updateObjectContextForSuccessfulSaveWithPackageWriter:(NSObject *)arg0 packageURL:(NSURL *)arg1;
- (NSString *)objectForIdentifier:(long long)arg0;
- (void)didReferenceData:(NSData *)arg0;
- (TSPPackageWriteCoordinator *)initWithContext:(TSPObjectContext *)arg0 documentRevision:(TSPDocumentRevision *)arg1 saveToken:(unsigned long long)arg2 packageIdentifier:(unsigned char)arg3 fileFormatVersion:(unsigned long long)arg4 preferredPackageType:(int)arg5 metadataObject:(TSPObject *)arg6 dataAttributesSnapshot:(TSPDataAttributesSnapshot *)arg7 packageWriteCoordinator:(TSPPackageWriteCoordinator *)arg8 captureSnapshots:(char)arg9;
- (char)shouldArchiveComponent:(id)arg0;
- (void)writeRootObject:(NSObject *)arg0 withPackageWriter:(NSObject *)arg1 saveOperationState:(NSObject *)arg2 completionQueue:(NSObject<OS_dispatch_queue> *)arg3 completion:(id /* block */)arg4;
- (NSObject *)createPackageMetadataWritingDatasWithPackageWriter:(NSObject *)arg0 saveOperationState:(NSObject *)arg1;
- (void)writeRootObjectAndRelatedComponents:(NSArray *)arg0 withPackageWriter:(NSObject *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completion:(id /* block */)arg3;
- (void)writeRemainingRootObjectsAndRelatedComponents:(NSArray *)arg0 withPackageWriter:(NSObject *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completion:(id /* block */)arg3;
- (void)writeRemainingComponentsWithPackageWriter:(NSObject *)arg0 completionQueue:(NSObject<OS_dispatch_queue> *)arg1 completion:(id /* block */)arg2;
- (void)enqueueRootObject:(NSObject *)arg0 forceArchive:(char)arg1 completion:(id /* block */)arg2;
- (void)enqueueRootObjectImpl:(id)arg0 forceArchive:(char)arg1 completion:(id /* block */)arg2;
- (void)enqueueComponent:(id)arg0 rootObjectOrNil:(id)arg1 forceArchive:(char)arg2;
- (char)isComponentPersisted:(id)arg0;
- (char)shouldEnqueueComponent:(id)arg0;
- (id)objectContainerImpl;
- (void)nextComponentAndRootObjectForComponentWriteWithCompletion:(id /* block */)arg0;
- (void)writeComponent:(id)arg0 rootObjectOrNil:(id)arg1 forceArchive:(char)arg2 withPackageWriter:(NSObject *)arg3;
- (char)shouldArchiveComponent:(id)arg0 checkForceArchive:(char)arg1;
- (void)archiveComponent:(id)arg0 locator:(NSString *)arg1 storeOutsideObjectArchive:(char)arg2 rootObject:(NSObject *)arg3 withPackageWriter:(NSObject *)arg4;
- (void)copyComponent:(id)arg0 locator:(NSString *)arg1 packageWriter:(NSObject *)arg2;
- (void)writeExternalReferences:(id)arg0 andUpdateLazyReferences:(id)arg1 withPackageWriter:(NSObject *)arg2 forComponent:(_UIDatePickerComponent *)arg3 locator:(NSString *)arg4;
- (void)setArchivedObjects:(NSHashTable *)arg0 objectUUIDToIdentifierDictionary:(NSDictionary *)arg1 externalStrongReferences:(id)arg2 externalWeakReferences:(id)arg3 readVersion:(unsigned long long)arg4 writeVersion:(unsigned long long)arg5 dataReferences:(NSHashTable *)arg6 forComponent:(_UIDatePickerComponent *)arg7;
- (char)shouldLinkComponentOfObject:(NSObject *)arg0;
- (void)updateExternalReferencesForLinkedComponent:(id)arg0;
- (char)isObjectInExternalPackage:(id)arg0 claimingComponent:(id *)arg1;
- (NSString *)componentForObjectIdentifier:(long long)arg0 objectOrNil:(id)arg1;
- (NSObject *)explicitComponentRootObjectForObject:(NSObject *)arg0 archiverOrNil:(id)arg1 claimingComponent:(id *)arg2 isInComponentQueue:(char)arg3 hasArchiverAccessLock:(char)arg4;
- (void)addDelayedObject:(NSObject *)arg0 forComponentRootObject:(NSObject *)arg1 claimingComponent:(id *)arg2 assertOnFailure:(char)arg3 completion:(id /* block */)arg4;
- (char)isComponentExternal:(id)arg0 wasWritten:(char *)arg1 wasCopied:(char *)arg2;
- (void)calculateExternalReferences;
- (TSPObjectContainer *)objectContainer;
- (NSObject *)componentWriter:(NSObject *)arg0 wantsExplicitComponentRootObjectForObject:(NSObject *)arg1 archiverOrNil:(id)arg2 claimingComponent:(id *)arg3 hasArchiverAccessLock:(char)arg4;
- (void)componentWriter:(NSObject *)arg0 canSkipArchivingStronglyReferencedObject:(NSObject *)arg1 fromComponentRootObject:(NSObject *)arg2 completion:(id /* block */)arg3;
- (void)componentWriterWantsDelayedObjects:(NSArray *)arg0 queue:(NSObject *)arg1 completion:(id /* block */)arg2;
- (void)componentWriter:(NSObject *)arg0 wantsComponentOfObject:(NSObject *)arg1 queue:(NSObject *)arg2 completion:(id /* block */)arg3;
- (void)componentWriterNeedsDocumentRecovery:(id)arg0;
- (void)componentWriter:(NSObject *)arg0 locatorForClaimingComponent:(id)arg1 queue:(NSObject *)arg2 completion:(id /* block */)arg3;
- (char)componentWriter:(NSObject *)arg0 object:(NSObject *)arg1 belongsToLinkedComponent:(id)arg2;
- (void)addDataFinalizeHandlerForSuccessfulSave:(id)arg0;
- (long long)componentIdentifierForObjectIdentifier:(long long)arg0 objectOrNil:(id)arg1 objectUUIDOrNil:(id)arg2;
- (NSObject *)explicitComponentRootObjectForObject:(NSObject *)arg0;
- (char)didWriteObject:(NSObject *)arg0 claimingComponent:(id *)arg1;
- (char)didWriteComponent:(id)arg0 wasCopied:(char *)arg1;
- (char)didWriteData:(long long)arg0;
- (TSPPackageMetadata *)packageMetadata;
- (void)dealloc;
- (TSPPackageWriteCoordinator *)init;
- (void).cxx_construct;
- (void).cxx_destruct;

@end

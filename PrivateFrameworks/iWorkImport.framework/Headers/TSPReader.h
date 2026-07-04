/* Runtime dump - TSPReader
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPReader : NSObject <TSPObjectDelegate, TSPUnarchiverDelegate>
{
    char _hasReadFailure;
    <TSPReaderDelegate> * _delegate;
    TSPComponent * _component;
    NSDictionary * _objectIdentifierToUUIDDictionary;
    TSPFinalizeHandlerQueue * _finalizeHandlerQueue;
    NSObject<OS_dispatch_group> * _completionGroup;
    NSObject<OS_dispatch_queue> * _errorQueue;
    NSError * _error;
    NSObject<OS_dispatch_queue> * _unarchiveQueue;
    NSObject<OS_dispatch_queue> * _objectsQueue;
    struct hash_map<long long, TSP::ObjectInfo, TSP::ObjectIdentifierHash, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, TSP::ObjectInfo> > > _objectInfoMap;
    struct vector<TSP::UnarchiverRepeatedReference, std::__1::allocator<TSP::UnarchiverRepeatedReference> > _repeatedReferences;
    NSMapTable * _objects;
    NSObject<OS_dispatch_queue> * _objectsToModifyQueue;
    NSHashTable * _objectsToModify;
    struct ? _flags;
}

@property (readonly, weak, nonatomic) <TSPReaderDelegate> * delegate;
@property (readonly, nonatomic) TSPComponent * component;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> * completionGroup;
@property (retain, nonatomic) NSError * error;
@property (readonly) char hasReadFailure;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) TSPObjectContext * context;
@property (readonly, nonatomic) unsigned long long fileFormatVersion;
@property (readonly, nonatomic) char didFinishResolvingReferences;
@property (readonly, nonatomic) char hasDocumentVersionUUID;
@property (readonly, nonatomic) char isFromCopy;
@property (readonly, nonatomic) char isCrossDocumentPaste;
@property (readonly, nonatomic) char isCrossAppPaste;

- (long long)modifyObjectTokenForNewObject;
- (NSObject *)newObjectUUIDForObject:(NSObject *)arg0;
- (void)willModifyObject:(NSObject *)arg0 duringReadOperation:(char)arg1;
- (char)canSetObjectUUIDForObject:(NSObject *)arg0;
- (TSPObjectUUIDMap *)objectUUIDMap;
- (long long)newObjectIdentifier;
- (unsigned long long)fileFormatVersion;
- (char)isObjectInDocument:(NSObject *)arg0;
- (char)didFinishResolvingReferences;
- (void)unarchiver:(SKKeyedUnarchiver *)arg0 didReadLazyReference:(NSObject *)arg1 isExternal:(char *)arg2;
- (NSString *)dataForIdentifier:(long long)arg0;
- (char)hasDocumentVersionUUID;
- (long long)objectIdentifierForUUID:(id)arg0;
- (NSString *)UUIDForObjectIdentifier:(long long)arg0;
- (char)isFromCopy;
- (char)isCrossDocumentPaste;
- (char)isCrossAppPaste;
- (void)readWithIOCompletionQueue:(NSObject *)arg0 ioCompletion:(id /* block */)arg1 completionQueue:(/* block */ id)arg2 completion:(id /* block */)arg3;
- (TSPReader *)initWithComponent:(TSPComponent *)arg0 finalizeHandlerQueue:(TSPFinalizeHandlerQueue *)arg1 delegate:(<TSPReaderDelegate> *)arg2;
- (char)hasReadFailure;
- (void)attemptedToReadInMemoryObject:(NSObject *)arg0 objectIdentifier:(long long)arg1;
- (void)unarchiveObjectWithUnarchiver:(id)arg0;
- (void)beginReadingWithCompletionQueue:(NSObject<OS_dispatch_queue> *)arg0 completion:(id /* block */)arg1;
- (void)didUnarchiveObject:(NSObject *)arg0 withUnarchiver:(NSUnarchiver *)arg1;
- (NSObject<OS_dispatch_group> *)completionGroup;
- (char)validateObjectIdentifierForObject:(NSObject *)arg0;
- (char)finishUnarchiving;
- (void)addUnarchivedObject:(NSObject *)arg0 unarchiver:(SKKeyedUnarchiver *)arg1;
- (struct ObjectInfo *)objectInfoForIdentifier:(NSString *)arg0;
- (void)resolveReferences;
- (void)setObjectDelegatesToContextObjectDelegate;
- (void)processObjectsToModify;
- (TSPReader *)init;
- (<TSPReaderDelegate> *)delegate;
- (TSPObjectContext *)context;
- (void).cxx_construct;
- (void).cxx_destruct;
- (NSError *)error;
- (TSPComponent *)component;
- (void)setError:(NSError *)arg0;

@end

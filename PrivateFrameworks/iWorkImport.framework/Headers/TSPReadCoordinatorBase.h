/* Runtime dump - TSPReadCoordinatorBase
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPReadCoordinatorBase : NSObject <TSPReaderDelegate, TSPLazyReferenceDelegate>
{
    NSObject<OS_dispatch_queue> * _lazyReferenceQueue;
    NSHashTable * _lazyReferences;
    NSHashTable * _lazyReferenceCopies;
    NSMutableArray * _lazyReferenceObserverBlocks;
    NSObject<OS_dispatch_queue> * _externalReferenceQueue;
    struct hash_map<long long, TSP::ExternalReferenceInfo, TSP::ObjectIdentifierHash, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, TSP::ExternalReferenceInfo> > > _externalReferences;
    struct vector<TSP::RepeatedExternalReferenceCompletionInfo, std::__1::allocator<TSP::RepeatedExternalReferenceCompletionInfo> > _repeatedExternalReferences;
    char _success;
}

@property (readonly, nonatomic) char success;
@property (readonly, nonatomic) unsigned long long fileFormatVersion;
@property (readonly, nonatomic) unsigned char packageIdentifier;
@property (readonly, nonatomic) NSUUID * baseObjectUUID;
@property (readonly, nonatomic) char isReadingFromDocument;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) char hasDocumentVersionUUID;
@property (readonly, nonatomic) char isFromCopy;
@property (readonly, nonatomic) char isCrossDocumentPaste;
@property (readonly, nonatomic) char isCrossAppPaste;

- (unsigned long long)fileFormatVersion;
- (unsigned char)packageIdentifier;
- (NSString *)objectForIdentifier:(long long)arg0;
- (char)readLazyReference:(NSObject *)arg0 object:(id *)arg1 error:(id *)arg2;
- (void)addLoadObserver:(NSObject *)arg0 action:(SEL)arg1 forLazyReference:(NSObject *)arg2;
- (void)lazyReference:(NSObject *)arg0 didCreateCopy:(id)arg1;
- (char)hasDocumentVersionUUID;
- (char)resolveExternalReferences;
- (void)setLazyReferencesDelegateToObjectContext;
- (void)readDidFail;
- (void)reader:(NSObject *)arg0 didFindExternalReferenceToObjectIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isWeak:(char)arg3 allowUnknownObject:(char)arg4 fromParentObject:(NSObject *)arg5 completion:(id /* block */)arg6;
- (void)reader:(NSObject *)arg0 didFindExternalRepeatedReference:(NSObject *)arg1 isWeak:(char)arg2 allowUnknownObject:(char)arg3 fromParentObject:(NSObject *)arg4 completion:(id /* block */)arg5;
- (void)reader:(NSObject *)arg0 didReadLazyReference:(NSObject *)arg1;
- (char)isReadingFromDocument;
- (void)didUpdateLazyReferenceDelegate:(NSObject *)arg0;
- (NSUUID *)baseObjectUUID;
- (NSString *)unarchivedObjectForIdentifier:(long long)arg0 isReadFinished:(char)arg1;
- (NSString *)externalObjectForIdentifier:(long long)arg0 componentIdentifier:(long long)arg1 isReadFinished:(char)arg2;
- (void)didReferenceExternalObject:(NSObject *)arg0 withIdentifier:(long long)arg1;
- (long long)reader:(NSObject *)arg0 wantsObjectIdentifierForUUID:(id)arg1;
- (NSObject *)reader:(NSObject *)arg0 wantsDataForIdentifier:(long long)arg1;
- (NSObject *)contextForReader:(NSObject *)arg0;
- (NSObject *)lazyReferenceDelegateForReader:(NSObject *)arg0;
- (struct ExternalReferenceInfo *)externalReferenceInfoForObjectIdentifier:(NSString *)arg0 componentIdentifier:(long long)arg1;
- (NSObject *)objectDelegateForReader:(NSObject *)arg0;
- (char)success;
- (TSPReadCoordinatorBase *)init;
- (NSString *)context;
- (void).cxx_construct;
- (void).cxx_destruct;

@end

/* Runtime dump - TSPComponentWriter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPComponentWriter : NSObject
{
    TSPComponent * _component;
    NSString * _locator;
    TSPObject * _rootObject;
    <TSPComponentWriterDelegate> * _delegate;
    int _mode;
    unsigned char _packageIdentifier;
    <TSPComponentWriteChannel> * _writeChannel;
    TSPArchiverManager * _archiverManager;
    NSObject<OS_dispatch_queue> * _globalConcurrentQueue;
    NSObject<OS_dispatch_semaphore> * _delegateSemaphore;
    NSHashTable * _archivedObjects;
    NSMapTable * _archivedObjectsDictionary;
    NSMutableDictionary * _objectUUIDToIdentifierDictionary;
    struct vector<TSP::ObjectStackEntry, std::__1::allocator<TSP::ObjectStackEntry> > _objectStack;
    NSObject<OS_dispatch_group> * _writeGroup;
    NSObject<OS_dispatch_queue> * _writeQueue;
    NSHashTable * _weakReferences;
    NSHashTable * _lazyReferences;
    NSHashTable * _dataReferences;
    unsigned long long _readVersion;
    unsigned long long _writeVersion;
    NSHashTable * _analyzedCommandToModelReferences;
    NSHashTable * _commandToModelReferences;
    NSHashTable * _newCommandToModelReferences;
    NSHashTable * _indirectCommandToModelExternalReferences;
    NSHashTable * _externalReferences;
    struct ? _flags;
}

@property (readonly, nonatomic) TSPComponent * component;
@property (readonly, nonatomic) unsigned long long readVersion;
@property (readonly, nonatomic) unsigned long long writeVersion;

- (unsigned long long)writeVersion;
- (unsigned long long)readVersion;
- (TSPComponentWriter *)initWithComponent:(TSPComponent *)arg0 locator:(NSString *)arg1 rootObject:(TSPObject *)arg2 delegate:(<TSPComponentWriterDelegate> *)arg3 mode:(int)arg4 packageIdentifier:(unsigned char)arg5 writeChannel:(<TSPComponentWriteChannel> *)arg6 archiverManager:(TSPArchiverManager *)arg7;
- (void)writeWithCompletionQueue:(NSObject<OS_dispatch_queue> *)arg0 completion:(id /* block */)arg1;
- (void)writeObjects:(NSArray *)arg0 parentObject:(NSObject *)arg1 isCommandToModelReference:(char)arg2 isAnalyzingExternalComponent:(char)arg3 hasArchiverAccessLock:(char)arg4 completion:(id /* block */)arg5;
- (char)shouldDelayWritingObject:(NSObject *)arg0;
- (char)isObjectExternal:(id)arg0 archiverOrNil:(id)arg1 parentObject:(NSObject *)arg2 validateAmbiguousObjectOwnership:(char)arg3 hasArchiverAccessLock:(char)arg4 claimingComponent:(id *)arg5 isOwnedByDifferentPackage:(char *)arg6;
- (char)validateObjectContextForObject:(NSObject *)arg0;
- (char)shouldWriteObject:(NSObject *)arg0;
- (char)shouldAnalyzeCommandToModelReference:(NSObject *)arg0 isAnalyzingExternalComponent:(char)arg1;
- (void)writeObject:(NSObject *)arg0 archiver:(NSObject *)arg1 parentObject:(NSObject *)arg2 completion:(id /* block */)arg3;
- (void)analyzeCommandToModelReference:(NSObject *)arg0 isAnalyzingExternalComponent:(char)arg1 archiver:(NSObject *)arg2 completion:(id /* block */)arg3;
- (id)commandToModelReferencesToWrite;
- (void)validateAmbiguousObjectOwnershipForObject:(NSObject *)arg0 explicitComponentRootObject:(TSPObject *)arg1 parentObject:(NSObject *)arg2 claimingComponent:(id *)arg3 claimingPackageIdentifier:(unsigned char)arg4 claimingComponentWillBeLinked:(char)arg5;
- (void)validateExplicitComponentOwnershipForObject:(NSObject *)arg0 archiverOrNil:(id)arg1 parentObject:(NSObject *)arg2 hasArchiverAccessLock:(char)arg3;
- (void)addCommandToModelReferences:(id)arg0 parentObject:(NSObject *)arg1;
- (void)writeArchiver:(id)arg0;
- (char)isObjectExternalBecauseItAlreadyBelongsToAnotherComponent:(id)arg0 parentObject:(NSObject *)arg1 claimingComponent:(id *)arg2 claimingPackageIdentifier:(unsigned char *)arg3 claimingComponentWillBeLinked:(char *)arg4;
- (char)isObjectExternalBecauseOfExplicitComponentOwnership:(id)arg0 archiverOrNil:(id)arg1 claimingComponentOrNil:(id)arg2 hasArchiverAccessLock:(char)arg3 explicitComponentRootObject:(id *)arg4 claimingComponent:(id *)arg5 isOwnedByDifferentPackage:(char *)arg6;
- (char)canSkipArchivingStronglyReferencedObject:(NSObject *)arg0 fromComponentRootObject:(NSObject *)arg1;
- (TSPComponentWriter *)init;
- (void).cxx_construct;
- (void).cxx_destruct;
- (TSPComponent *)component;

@end

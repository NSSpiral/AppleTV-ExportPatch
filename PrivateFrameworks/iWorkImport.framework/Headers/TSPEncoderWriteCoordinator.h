/* Runtime dump - TSPEncoderWriteCoordinator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPEncoderWriteCoordinator : NSObject <TSPArchiverManagerDelegate, TSPComponentWriterDelegate, TSPDataArchiver, TSPObjectModifyDelegate, TSPProxyObjectMapping>
{
    <TSPEncoder> * _encoder;
    TSPArchiverManager * _archiverManager;
    <TSPEncoderWriteCoordinatorDelegate> * _delegate;
    char _didStopCapturingSnapshots;
    NSMutableArray * _dataFinalizeHandlers;
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSHashTable * _delayedObjects;
    char _hasProxyObjects;
    TSURetainedPointerKeyDictionary * _proxyObjectMap;
    TSPObjectContext * _context;
}

@property (readonly, weak, nonatomic) TSPObjectContext * context;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSURL * relativeURLForExternalData;

- (void)willModifyObject:(NSObject *)arg0 duringReadOperation:(char)arg1;
- (NSURL *)relativeURLForExternalData;
- (void)stopCapturingSnapshots;
- (NSObject *)proxyForReferencedObject:(NSObject *)arg0;
- (void)archiverManager:(TSPArchiverManager *)arg0 didCreateArchiver:(id)arg1;
- (char)archiverManager:(TSPArchiverManager *)arg0 shouldDelayArchivingObject:(NSObject *)arg1;
- (NSObject *)componentWriter:(NSObject *)arg0 wantsExplicitComponentRootObjectForObject:(NSObject *)arg1 archiverOrNil:(id)arg2 claimingComponent:(id *)arg3 hasArchiverAccessLock:(char)arg4;
- (void)componentWriter:(NSObject *)arg0 canSkipArchivingStronglyReferencedObject:(NSObject *)arg1 fromComponentRootObject:(NSObject *)arg2 completion:(id /* block */)arg3;
- (void)componentWriterWantsDelayedObjects:(NSArray *)arg0 queue:(NSObject *)arg1 completion:(id /* block */)arg2;
- (void)componentWriter:(NSObject *)arg0 wantsComponentOfObject:(NSObject *)arg1 queue:(NSObject *)arg2 completion:(id /* block */)arg3;
- (char)componentWriter:(NSObject *)arg0 shouldDelayWritingObject:(NSObject *)arg1;
- (void)addDataFinalizeHandlerForSuccessfulSave:(id)arg0;
- (char)shouldDelayArchivingObject:(NSObject *)arg0;
- (TSPEncoderWriteCoordinator *)initWithEncoder:(<TSPEncoder> *)arg0 context:(TSPObjectContext *)arg1 archiverClass:(Class)arg2 delegate:(<TSPEncoderWriteCoordinatorDelegate> *)arg3;
- (void)writeRootObject:(NSObject *)arg0 completion:(id /* block */)arg1;
- (void)delayArchivingOfObject:(NSObject *)arg0;
- (void)setProxy:(NSObject *)arg0 forReferencedObject:(NSObject *)arg1;
- (void)skipArchivingObject:(NSObject *)arg0;
- (void)dealloc;
- (TSPEncoderWriteCoordinator *)init;
- (TSPObjectContext *)context;
- (void).cxx_destruct;

@end

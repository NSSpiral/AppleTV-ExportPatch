/* Runtime dump - TSPDecoderReadCoordinator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDecoderReadCoordinator : TSPReadCoordinatorBase <TSPReadCoordinator>
{
    <TSPDecoder> * _decoder;
    TSPObjectContext * _context;
    TSPFinalizeHandlerQueue * _finalizeHandlerQueue;
    <TSPDecoderReadCoordinatorDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _dataQueue;
    TSPComponent * _rootObjectComponent;
    NSMapTable * _objects;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) char isReadingFromDocument;

- (unsigned long long)fileFormatVersion;
- (unsigned char)packageIdentifier;
- (NSString *)objectForIdentifier:(long long)arg0;
- (void)readRootObjectWithCompletionQueue:(NSObject<OS_dispatch_queue> *)arg0 completion:(id /* block */)arg1;
- (char)endReading;
- (void)readComponent:(id)arg0 completionQueue:(NSObject<OS_dispatch_queue> *)arg1 completion:(id /* block */)arg2;
- (char)readLazyReference:(NSObject *)arg0 object:(id *)arg1 error:(id *)arg2;
- (char)hasDocumentVersionUUID;
- (TSPDecoderReadCoordinator *)initWithDecoder:(<TSPDecoder> *)arg0 context:(TSPObjectContext *)arg1 finalizeHandlerQueue:(TSPFinalizeHandlerQueue *)arg2 delegate:(<TSPDecoderReadCoordinatorDelegate> *)arg3;
- (char)isFromCopy;
- (char)isCrossDocumentPaste;
- (char)isCrossAppPaste;
- (char)isExternalLazyReference:(NSObject *)arg0;
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
- (void)reader:(NSObject *)arg0 didUnarchiveObject:(NSObject *)arg1;
- (TSPDecoderReadCoordinator *)init;
- (TSPObjectContext *)context;
- (void).cxx_destruct;

@end

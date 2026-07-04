/* Runtime dump - BRCCloudFileProvider
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCCloudFileProvider : BRCFileProvider <BRItemNotificationReceiving, BRCReachabilityDelegate>
{
    NSMutableDictionary * _pipeByURL;
    NSMutableDictionary * _readersURLAndIDToDocID;
    NSMutableDictionary * _downloadTrackersByDocID;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)invalidate;
- (BRCCloudFileProvider *)initWithURL:(NSString *)arg0;
- (void).cxx_destruct;
- (void)dumpToContext:(NSObject *)arg0;
- (void)networkReachabilityChanged:(char)arg0;
- (void)receiveUpdates:(id)arg0 logicalExtensions:(id)arg1 physicalExtensions:(id)arg2 reply:(id /* block */)arg3;
- (void)cancelAllCoordinationProviders;
- (void)_documentWasMadeLive:(id)arg0;
- (char)_hasPendingReaderForDocumentID:(NSObject *)arg0;
- (NSString *)_fileReactorID;
- (NSURL *)_physicalURLForURL:(NSURL *)arg0;
- (void)_provideItemAtURL:(NSURL *)arg0 toReaderWithID:(int)arg1 completionHandler:(id /* block */)arg2;
- (void)_cancelProvidingItemAtURL:(NSURL *)arg0 toReaderWithID:(int)arg1;
- (void)__provideItemAtURL:(NSURL *)arg0 toReaderWithID:(int)arg1 session:(NSObject *)arg2 completionHandler:(id /* block */)arg3;
- (void)_registerPresenterForItemAtURL:(NSURL *)arg0 key:(NSString *)arg1 session:(BRCAccountSession *)arg2;
- (void)_unregisterPresenterForItemAtURL:(NSURL *)arg0 key:(NSString *)arg1;

@end

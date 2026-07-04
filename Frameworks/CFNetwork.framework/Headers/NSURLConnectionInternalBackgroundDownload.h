/* Runtime dump - NSURLConnectionInternalBackgroundDownload
 * Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLConnectionInternalBackgroundDownload : NSURLConnectionInternal <NSURLConnectionRequired, SSDownloadManagerObserver, SSDownloadHandlerDelegate>
{
    struct __CFRunLoopSource * _source;
    NSMutableArray * _pendingOps;
    NSCountedSet * _runloops;
    SSDownloadHandler * _handler;
    NSAsyncSSDownloadManager * _manager;
    long long _downloadIdent;
    long long _ctLast;
    char _terminated;
    NSTimer * _deferredStartTimer;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSURLConnectionInternalBackgroundDownload *)sharedDownloadManagerForMediaKind:(id)arg0 persistenceIdentifier:(NSString *)arg1;
+ (void)_enableLogging;

- (NSURLConnectionInternalBackgroundDownload *)initWithInfo:(struct InternalInit *)arg0;
- (void)_updateDownloadState:(NSObject *)arg0;
- (void)_invokeInvocation:(NSObject *)arg0 withConnection:(NSURLConnection *)arg1;
- (void)_preTerminalInvocation:(NSObject *)arg0;
- (void)_postTerminalInvocation:(NSObject *)arg0;
- (void)_sendTerminalErrorToDelegate:(NSObject *)arg0;
- (void)setHandlerForDownload:(id)arg0 completionBlock:(id /* block */)arg1;
- (void)_managerFailedToStartInTime;
- (void)_createNewDownload;
- (void)_updateClientWithCurrentWrites:(id)arg0;
- (void)_sendTerminalDidFinishToDelegate:(NSObject *)arg0;
- (void)invokeForDelegate:(NSObject *)arg0;
- (void)_sourcePerform;
- (long long)_getDownloadIdent;
- (void)downloadHandlerDidDisconnect:(id)arg0;
- (void)downloadHandler:(SSDownloadHandler *)arg0 cancelSession:(NSObject *)arg1;
- (char)downloadHandler:(SSDownloadHandler *)arg0 pauseSession:(NSObject *)arg1;
- (void)downloadHandler:(SSDownloadHandler *)arg0 handleAuthenticationSession:(NSObject *)arg1;
- (void)cancel;
- (void)dealloc;
- (NSString *)description;
- (void)start;
- (void)useCredential:(NSObject *)arg0 forAuthenticationChallenge:(NSObject *)arg1;
- (void)_invalidate;
- (void)setDelegateQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)scheduleInRunLoop:(NSObject *)arg0 forMode:(struct __CFString *)arg1;
- (void)unscheduleFromRunLoop:(NSObject *)arg0 forMode:(struct __CFString *)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(NSObject *)arg0;
- (void)cancelAuthenticationChallenge:(NSObject *)arg0;
- (void)performDefaultHandlingForAuthenticationChallenge:(NSObject *)arg0;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(NSObject *)arg0;

@end

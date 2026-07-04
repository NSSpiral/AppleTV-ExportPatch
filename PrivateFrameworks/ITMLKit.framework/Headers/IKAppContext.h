/* Runtime dump - IKAppContext
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKAppContext : NSObject <ISURLOperationDelegate>
{
    struct __CFRunLoop * _jsThreadRunLoop;
    struct __CFRunLoopSource * _jsThreadRunLoopSource;
    char _isValid;
    char _remoteInspectionEnabled;
    char _mescalPrimeEnabledForXHRRequests;
    char _canAccessPendingQueue;
    <IKApplication> * _app;
    unsigned int _mode;
    <IKAppContextDelegate> * _delegate;
    JSContext * _jsContext;
    NSMutableArray * _postEvaluationBlocks;
    IKJSFoundation * _jsFoundation;
    NSString * _responseScript;
    NSError * _responseError;
    id _reloadData;
    NSMutableArray * _pendingQueue;
}

@property (readonly, weak, nonatomic) <IKApplication> * app;
@property (readonly, nonatomic) unsigned int mode;
@property (readonly, weak, nonatomic) <IKAppContextDelegate> * delegate;
@property char isValid;
@property (nonatomic) char remoteInspectionEnabled;
@property (nonatomic) char mescalPrimeEnabledForXHRRequests;
@property (retain, nonatomic) JSContext * jsContext;
@property (retain, nonatomic) NSMutableArray * postEvaluationBlocks;
@property (retain, nonatomic) IKJSFoundation * jsFoundation;
@property (nonatomic) char canAccessPendingQueue;
@property (copy, nonatomic) NSString * responseScript;
@property (retain, nonatomic) NSError * responseError;
@property (retain, nonatomic) id reloadData;
@property (retain, nonatomic) NSMutableArray * pendingQueue;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (IKAppContext *)currentAppContext;

- (void)_sourcePerform;
- (void)operation:(ISURLOperation *)arg0 failedWithError:(NSError *)arg1;
- (NSData *)reloadData;
- (void)reload;
- (<IKAppContextDelegate> *)delegate;
- (char)isValid;
- (void)stop;
- (unsigned int)mode;
- (void)start;
- (void).cxx_destruct;
- (void)setRemoteInspectionEnabled:(char)arg0;
- (void)addPostEvaluateBlock:(id /* block */)arg0;
- (void)operation:(ISURLOperation *)arg0 finishedWithOutput:(AVPlayerLayer *)arg1;
- (void)setIsValid:(char)arg0;
- (NSError *)responseError;
- (void)setResponseError:(NSError *)arg0;
- (void)handleReloadWithUrgencyType:(unsigned int)arg0 data:(NSData *)arg1;
- (void)handleRestart;
- (void)launchAppWithOptions:(NSDictionary *)arg0;
- (void)openURLWithOptions:(NSDictionary *)arg0;
- (void)exitAppWithOptions:(NSDictionary *)arg0;
- (JSContext *)jsContext;
- (<IKApplication> *)app;
- (void)evaluateDelegateBlockSync:(id)arg0;
- (void)_evaluateFoundationWithDeviceConfig:(<IKAppDeviceConfig> *)arg0;
- (IKJSFoundation *)jsFoundation;
- (void)setJsFoundation:(IKJSFoundation *)arg0;
- (void)setException:(JSValue *)arg0 withErrorMessage:(NSString *)arg1;
- (void)evaluateFoundationJS;
- (void)evaluate:(CPMLModelEvaluate *)arg0 completionBlock:(/* block */ id)arg1;
- (char)validateDOMDocument:(NSObject *)arg0 error:(id *)arg1;
- (NSURL *)_preferredLaunchURL;
- (NSMutableArray *)pendingQueue;
- (void)setPendingQueue:(NSMutableArray *)arg0;
- (void)setCanAccessPendingQueue:(char)arg0;
- (void)_startWithURL:(NSURL *)arg0 urlTrusted:(char)arg1;
- (void)_jsThreadMain;
- (void)_addStopRecordToPendingQueueWithReload:(char)arg0;
- (char)canAccessPendingQueue;
- (void)_evaluate:(CPMLModelEvaluate *)arg0;
- (NSMutableArray *)postEvaluationBlocks;
- (NSString *)_errorWithMessage:(NSString *)arg0;
- (void)_dispatchError:(NSError *)arg0;
- (void)setReloadData:(NSData *)arg0;
- (void)setResponseScript:(NSString *)arg0;
- (void)_startWithScript:(NSString *)arg0;
- (NSString *)responseScript;
- (char)remoteInspectionEnabled;
- (void)setJsContext:(JSContext *)arg0;
- (void)_stopAndReload:(char)arg0;
- (void)setPostEvaluationBlocks:(NSMutableArray *)arg0;
- (IKAppContext *)initWithApplication:(NSString *)arg0 mode:(unsigned int)arg1 delegate:(<IKAppContextDelegate> *)arg2;
- (void)suspendWithOptions:(NSDictionary *)arg0;
- (void)resumeWithOptions:(NSDictionary *)arg0;
- (void)_sourceScheduledOnRunLoop:(struct __CFRunLoop *)arg0;
- (void)_sourceCanceledOnRunLoop:(struct __CFRunLoop *)arg0;
- (char)mescalPrimeEnabledForXHRRequests;
- (void)setMescalPrimeEnabledForXHRRequests:(char)arg0;

@end

/* Runtime dump - SSRequest
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSRequest : NSObject <SSXPCCoding>
{
    int _backgroundTaskIdentifier;
    char _cancelAfterTaskExpiration;
    <SSRequestDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    SSXPCConnection * _requestConnection;
    SSXPCConnection * _responseConnection;
    NSObject<OS_dispatch_source> * _backgroundTaskExpirationTimer;
}

@property (nonatomic) <SSRequestDelegate> * delegate;
@property (nonatomic) char shouldCancelAfterTaskExpiration;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)_endBackgroundTask;
- (void)startWithCompletionBlock:(id /* block */)arg0;
- (void)cancel;
- (void)dealloc;
- (void)setDelegate:(<SSRequestDelegate> *)arg0;
- (SSRequest *)init;
- (<SSRequestDelegate> *)delegate;
- (char)start;
- (void)disconnect;
- (void)_shutdownRequest;
- (void)_startWithMessageID:(long long)arg0 messageBlock:(id /* block */)arg1;
- (char)__shouldUseBackgroundTaskAssertions;
- (NSURLRequest *)_initSSRequest;
- (void)_shutdownRequestWithMessageID:(long long)arg0;
- (void)__beginBackgroundTask;
- (void)__endBackgroundTask;
- (void)_expireBackgroundTask;
- (void)_cancelBackgroundTaskExpirationTimer;
- (void)setShouldCancelAfterTaskExpiration:(char)arg0;
- (char)shouldCancelAfterTaskExpiration;
- (void)_beginBackgroundTask;

@end

/* Runtime dump - SSDownloadHandler
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadHandler : NSObject
{
    SSXPCConnection * _controlConnection;
    <SSDownloadHandlerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSArray * _downloadPhasesToIgnore;
    long long _handlerID;
    SSXPCConnection * _observerConnection;
    char _sessionsNeedPowerAssertion;
    char _sessionsShouldBlockOtherDownloads;
}

@property <SSDownloadHandlerDelegate> * delegate;
@property (copy) NSArray * downloadPhasesToIgnore;
@property char sessionsNeedPowerAssertion;
@property char sessionsShouldBlockOtherDownloads;
@property (readonly) long long handlerIdentifier;

- (void)setDownloadPhasesToIgnore:(NSArray *)arg0;
- (void)setSessionsNeedPowerAssertion:(char)arg0;
- (void)setSessionsShouldBlockOtherDownloads:(char)arg0;
- (long long)handlerIdentifier;
- (void)dealloc;
- (void)setDelegate:(<SSDownloadHandlerDelegate> *)arg0;
- (SSDownloadHandler *)init;
- (NSString *)description;
- (<SSDownloadHandlerDelegate> *)delegate;
- (void)_setValue:(NSValue *)arg0 forProperty:(char *)arg1;
- (void)_handleMessage:(NSString *)arg0 fromServerConnection:(NSURLConnection *)arg1;
- (void)_connectToDaemon;
- (void)_sendDisconnectMessage;
- (char)_sendAuthenticationSessionWithMessage:(NSString *)arg0;
- (char)_sendSessionHandleWithMessage:(NSString *)arg0;
- (char)_sendSessionCancelWithMessage:(NSString *)arg0;
- (char)_sendSessionPauseWithMessage:(NSString *)arg0;
- (NSURLConnection *)_controlConnection;
- (NSString *)_newSessionWithMessage:(NSString *)arg0;
- (NSArray *)downloadPhasesToIgnore;
- (void)resetDisavowedSessions;
- (char)sessionsNeedPowerAssertion;
- (char)sessionsShouldBlockOtherDownloads;

@end

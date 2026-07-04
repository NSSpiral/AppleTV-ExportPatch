/* Runtime dump - NSURLConnectionInternalConnection
 * Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLConnectionInternalConnection : NSURLConnectionInternal <NSURLConnectionRequired>
{
    int _cfConnLock;
    struct _CFURLConnection * _cfConn;
    struct _CFURLAuthChallenge * _currCFChallenge;
    NSURLAuthenticationChallenge * _currNSChallenge;
    struct __CFString * _fileName;
    BOOL _shouldSkipCancelOnRelease;
    long long _totalBytes;
    long long _expectedTotalBytes;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSURLConnectionInternalConnection *)initWithInfo:(struct InternalInit *)arg0;
- (void)_setDelegateQueue:(NSObject *)arg0;
- (void)_suspendLoading;
- (void)_resumeLoading;
- (void)_setShouldSkipCancelOnRelease:(BOOL)arg0;
- (void)invokeForDelegate:(NSObject *)arg0;
- (void)sendCFChallenge:(struct _CFURLAuthChallenge *)arg0 toSelector:(SEL)arg1;
- (struct _CFURLConnection *)_retainCFURLConnection;
- (struct _CFURLConnection *)_atomic_CFURLConnection;
- (void)cleanupChallenges;
- (struct _CFURLConnection *)_CFURLConnection;
- (void)cancel;
- (void)dealloc;
- (void)start;
- (void)useCredential:(NSObject *)arg0 forAuthenticationChallenge:(NSObject *)arg1;
- (void)_invalidate;
- (NSData *)_timingData;
- (void)scheduleInRunLoop:(NSObject *)arg0 forMode:(struct __CFString *)arg1;
- (void)unscheduleFromRunLoop:(NSObject *)arg0 forMode:(struct __CFString *)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(NSObject *)arg0;
- (void)cancelAuthenticationChallenge:(NSObject *)arg0;
- (void)performDefaultHandlingForAuthenticationChallenge:(NSObject *)arg0;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(NSObject *)arg0;

@end

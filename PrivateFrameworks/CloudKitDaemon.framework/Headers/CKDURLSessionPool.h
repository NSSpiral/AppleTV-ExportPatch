/* Runtime dump - CKDURLSessionPool
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDURLSessionPool : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegatePrivate, NSURLSessionDataDelegate>
{
    NSMutableDictionary * _delegateByTaskDescription;
    NSMutableDictionary * _sessionByIdentifier;
    NSMutableDictionary * _ephemeralSessionByTaskDescription;
    NSMutableDictionary * _sessionConfigurationReferenceByName;
    NSMutableDictionary * _sessionConfigurationReferenceByIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
    int _backgroundSessionConnectionPoolLimit;
    int _networkdNotifyToken;
}

@property (readonly, nonatomic) int backgroundSessionConnectionPoolLimit;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (CKDURLSessionPool *)sharedURLSessionPool;
+ (NSString *)backgroundSessionConnectionPoolName;

- (void)dealloc;
- (CKDURLSessionPool *)init;
- (void).cxx_destruct;
- (void)URLSession:(NSURLSession *)arg0 task:(NSObject *)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(NSURLRequest *)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(NSURLSession *)arg0 task:(NSObject *)arg1 needNewBodyStream:(NSObject *)arg2;
- (void)URLSession:(NSURLSession *)arg0 task:(NSObject *)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
- (void)URLSession:(NSURLSession *)arg0 task:(NSObject *)arg1 didCompleteWithError:(NSError *)arg2;
- (void)URLSession:(NSURLSession *)arg0 didBecomeInvalidWithError:(NSError *)arg1;
- (void)URLSession:(NSURLSession *)arg0 didReceiveChallenge:(NSObject *)arg1 completionHandler:(id /* block */)arg2;
- (NSString *)dataTaskWithTaskDescription:(NSString *)arg0 configuration:(NSDictionary *)arg1 request:(NSURLRequest *)arg2 delegate:(NSObject *)arg3;
- (int)backgroundSessionConnectionPoolLimit;
- (NSString *)checkoutSessionConfigurationWithName:(NSString *)arg0;
- (void)setSessionConfiguration:(NSDictionary *)arg0 forName:(NSString *)arg1;
- (void)invalidateDataTask:(NSObject *)arg0;
- (void)checkinSessionConfiguration:(NSDictionary *)arg0;
- (void)_updateBackgroundSessionConnectionPoolLimit;
- (NSDictionary *)_URLSessionWithConfiguration:(NSDictionary *)arg0 forDelegate:(NSObject *)arg1;
- (void)_performAsyncOnDelegateOfSession:(NSObject *)arg0 task:(NSObject *)arg1 fromSelector:(SEL)arg2 block:(id /* block */)arg3;
- (void)URLSession:(NSURLSession *)arg0 task:(NSObject *)arg1 _willSendRequestForEstablishedConnection:(NSURLConnection *)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(NSURLSession *)arg0 _taskIsWaitingForConnection:(NSURLConnection *)arg1;
- (void)URLSession:(NSURLSession *)arg0 task:(NSObject *)arg1 _conditionalRequirementsChanged:(char)arg2;
- (void)URLSession:(NSURLSession *)arg0 dataTask:(NSURLSessionDataTask *)arg1 didReceiveResponse:(char)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(NSURLSession *)arg0 dataTask:(NSURLSessionDataTask *)arg1 didReceiveData:(char)arg2;

@end

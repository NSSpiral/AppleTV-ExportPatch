/* Runtime dump - AAURLSession
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAURLSession : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate>
{
    NSURLSession * _urlSession;
    NSMutableDictionary * _pendingCompletionsByTask;
    NSMutableDictionary * _receivedDataByTask;
    NSMutableDictionary * _retryCountByRequest;
    NSObject<OS_dispatch_queue> * _sessionQueue;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (AAURLSession *)sharedURLSession;

- (AAURLSession *)init;
- (void).cxx_destruct;
- (void)beginDataTaskWithRequest:(NSURLRequest *)arg0 completionHandler:(id /* block */)arg1;
- (void)beginDataTaskWithURL:(NSString *)arg0 completionHandler:(id /* block */)arg1;
- (NSURLSession *)_URLSession;
- (char)_isRecoverableError:(NSError *)arg0;
- (char)_unsafe_retryTaskIfPossible:(id)arg0;
- (void)URLSession:(NSURLSession *)arg0 task:(NSObject *)arg1 didCompleteWithError:(NSError *)arg2;
- (void)URLSession:(NSURLSession *)arg0 didBecomeInvalidWithError:(NSError *)arg1;
- (void)URLSession:(NSURLSession *)arg0 dataTask:(NSURLSessionDataTask *)arg1 didReceiveData:(char)arg2;

@end

/* Runtime dump - AARequester
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AARequester : NSOperation
{
    AARequest * _request;
    AAResponse * _response;
    NSURLConnection * _urlConnection;
    id _handler;
    NSMutableData * _data;
    NSHTTPURLResponse * _httpResponse;
    Class _responseClass;
    char _isExecuting;
    char _isFinished;
    char _canceled;
    char _isCanceled;
    NSObject<OS_dispatch_queue> * _handlerQueue;
}

@property (nonatomic) char isExecuting;
@property char finished;
@property char canceled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * handlerQueue;

- (void)cancel;
- (void)start;
- (void)connection:(NSURLConnection *)arg0 didFailWithError:(char)arg1;
- (void)connection:(NSURLConnection *)arg0 didReceiveData:(char)arg1;
- (void)connectionDidFinishLoading:(NSURLConnection *)arg0;
- (void)connection:(NSURLConnection *)arg0 didReceiveResponse:(char)arg1;
- (void).cxx_destruct;
- (char)isFinished;
- (char)isExecuting;
- (void)_callHandler;
- (void)setFinished:(char)arg0;
- (NSObject<OS_dispatch_queue> *)handlerQueue;
- (void)setHandlerQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setIsExecuting:(char)arg0;
- (void)setCanceled:(char)arg0;
- (char)isCanceled;
- (AARequester *)initWithRequest:(AARequest *)arg0 handler:(id /* block */)arg1;
- (char)connection:(NSURLConnection *)arg0 canAuthenticateAgainstProtectionSpace:(NSObject *)arg1;
- (void)connection:(NSURLConnection *)arg0 didReceiveAuthenticationChallenge:(NSObject *)arg1;

@end

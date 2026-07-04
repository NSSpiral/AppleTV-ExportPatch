/* Runtime dump - MMCSHTTPSession
 * Image: /System/Library/PrivateFrameworks/MMCS.framework/MMCS
 */

@interface MMCSHTTPSession : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDataDelegatePrivate>
{
    char _isBackground;
    NSString * _sessionName;
    NSString * _sessionConfigurationId;
    NSURLSession * _urlSession;
    NSURLSessionConfiguration * _urlSessionConfiguration;
    NSOperationQueue * _operationQueue;
    NSMutableDictionary * _contextsForTasks;
}

@property (retain, nonatomic) NSString * sessionName;
@property (retain, nonatomic) NSString * sessionConfigurationId;
@property (retain, nonatomic) NSURLSession * urlSession;
@property (retain, nonatomic) NSURLSessionConfiguration * urlSessionConfiguration;
@property (retain, nonatomic) NSOperationQueue * operationQueue;
@property (retain, nonatomic) NSMutableDictionary * contextsForTasks;
@property char isBackground;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)URLSession:(NSURLSession *)arg0 _willRetryBackgroundDataTask:(NSObject *)arg1 withError:(NSError *)arg2;
- (NSString *)description;
- (void)setOperationQueue:(NSOperationQueue *)arg0;
- (void).cxx_destruct;
- (void)setUrlSession:(NSURLSession *)arg0;
- (NSOperationQueue *)operationQueue;
- (void)URLSession:(NSURLSession *)arg0 task:(NSObject *)arg1 needNewBodyStream:(NSObject *)arg2;
- (void)URLSession:(NSURLSession *)arg0 task:(NSObject *)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
- (void)URLSession:(NSURLSession *)arg0 task:(NSObject *)arg1 didCompleteWithError:(NSError *)arg2;
- (void)invalidateAndCancel;
- (void)URLSession:(NSURLSession *)arg0 task:(NSObject *)arg1 _willSendRequestForEstablishedConnection:(NSURLConnection *)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(NSURLSession *)arg0 dataTask:(NSURLSessionDataTask *)arg1 didReceiveResponse:(char)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(NSURLSession *)arg0 dataTask:(NSURLSessionDataTask *)arg1 didReceiveData:(char)arg2;
- (NSURLSession *)urlSession;
- (NSString *)sessionConfigurationId;
- (char)isBackground;
- (NSString *)sessionName;
- (NSURLRequest *)dataTaskWithRequest:(NSURLRequest *)arg0 uuid:(NSUUID *)arg1 forHTTPContext:(NSObject *)arg2;
- (MMCSHTTPSession *)initWithName:(NSString *)arg0 sessionConfigurationId:(NSString *)arg1 configuration:(NSDictionary *)arg2;
- (void)setSessionName:(NSString *)arg0;
- (void)setSessionConfigurationId:(NSString *)arg0;
- (void)setUrlSessionConfiguration:(NSURLSessionConfiguration *)arg0;
- (void)setContextsForTasks:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)contextsForTasks;
- (NSURLSessionTask *)mmcsHTTPContextForTask:(NSObject *)arg0 reason:(NSString *)arg1;
- (NSURLSessionConfiguration *)urlSessionConfiguration;
- (void)setIsBackground:(char)arg0;

@end

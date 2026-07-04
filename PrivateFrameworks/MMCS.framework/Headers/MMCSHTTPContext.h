/* Runtime dump - MMCSHTTPContext
 * Image: /System/Library/PrivateFrameworks/MMCS.framework/MMCS
 */

@interface MMCSHTTPContext : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionTaskDelegatePrivate, NSURLSessionDataDelegatePrivate, NSStreamDelegate>
{
    char _didOpen;
    char _isValid;
    char _isTaskDone;
    char _requestIsStreamed;
    char _isHandlingError;
    struct mmcs_http_context * _hc;
    NSURLSession * _urlSession;
    NSInputStream * _inputStream;
    NSOutputStream * _outputStream;
    NSOperationQueue * _operationQueue;
    NSURLSessionDataTask * _dataTask;
    NSDictionary * _timingData;
    MMCSDuetReporter * _duetReporter;
}

@property (nonatomic) struct mmcs_http_context * hc;
@property (retain, nonatomic) NSURLSession * urlSession;
@property (retain, nonatomic) NSInputStream * inputStream;
@property (retain, nonatomic) NSOutputStream * outputStream;
@property (retain, nonatomic) NSOperationQueue * operationQueue;
@property (retain, nonatomic) NSURLSessionDataTask * dataTask;
@property (retain, nonatomic) NSDictionary * timingData;
@property (retain, nonatomic) MMCSDuetReporter * duetReporter;
@property (nonatomic) char didOpen;
@property (nonatomic) char isValid;
@property (nonatomic) char isTaskDone;
@property (nonatomic) char requestIsStreamed;
@property (nonatomic) char isHandlingError;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (MMCSHTTPContext *)sharedMMCSHTTPSession;

- (void)URLSession:(NSURLSession *)arg0 _willRetryBackgroundDataTask:(NSObject *)arg1 withError:(NSError *)arg2;
- (MMCSHTTPContext *)initWithContext:(struct mmcs_http_context *)arg0 options:(int)arg1;
- (void)dealloc;
- (NSString *)description;
- (void)invalidate;
- (char)isValid;
- (void)setOperationQueue:(NSOperationQueue *)arg0;
- (char)send;
- (void).cxx_destruct;
- (NSDictionary *)timingData;
- (void)setTimingData:(NSDictionary *)arg0;
- (void)setUrlSession:(NSURLSession *)arg0;
- (NSOperationQueue *)operationQueue;
- (void)URLSession:(NSURLSession *)arg0 task:(NSObject *)arg1 needNewBodyStream:(NSObject *)arg2;
- (void)URLSession:(NSURLSession *)arg0 task:(NSObject *)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
- (void)URLSession:(NSURLSession *)arg0 task:(NSObject *)arg1 didCompleteWithError:(NSError *)arg2;
- (void)URLSession:(NSURLSession *)arg0 task:(NSObject *)arg1 _willSendRequestForEstablishedConnection:(NSURLConnection *)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(NSURLSession *)arg0 dataTask:(NSURLSessionDataTask *)arg1 didReceiveResponse:(char)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(NSURLSession *)arg0 dataTask:(NSURLSessionDataTask *)arg1 didReceiveData:(char)arg2;
- (NSInputStream *)inputStream;
- (void)setInputStream:(NSInputStream *)arg0;
- (void)setOutputStream:(NSOutputStream *)arg0;
- (void)stream:(NSObject *)arg0 handleEvent:(unsigned int)arg1;
- (void)setIsValid:(char)arg0;
- (NSURLSession *)urlSession;
- (NSURLSessionDataTask *)dataTask;
- (void)cleanupResponse;
- (int)writeRequestBody:(char *)arg0 maxLength:(unsigned int)arg1;
- (void)requestBodyDone;
- (char)requestBodyCanAcceptData;
- (void)setRequestIsStreamed:(char)arg0;
- (char)isTaskDone;
- (struct mmcs_http_context *)hc;
- (char)isHandlingError;
- (void)invalidateStreamPair;
- (void)setIsHandlingError:(char)arg0;
- (void)setHc:(struct mmcs_http_context *)arg0;
- (char)createNewRequestBodyInputStream;
- (void)setDataTask:(NSURLSessionDataTask *)arg0;
- (void)setDuetReporter:(MMCSDuetReporter *)arg0;
- (MMCSDuetReporter *)duetReporter;
- (void)setIsTaskDone:(char)arg0;
- (void)setDidOpen:(char)arg0;
- (void)cleanupRequest;
- (char)requestIsStreamed;
- (long long)countOfRequestBodyBytesSent;
- (char)didOpen;
- (NSOutputStream *)outputStream;

@end

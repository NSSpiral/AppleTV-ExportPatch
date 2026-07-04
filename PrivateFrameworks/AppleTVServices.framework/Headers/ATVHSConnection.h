/* Runtime dump - ATVHSConnection
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVHSConnection : NSObject
{
    char _initialized;
    <ATVHSConnectionDelegate> * _delegate;
    NSURLSession * _urlSession;
    NSString * _baseIPAddress;
    NSMutableArray * _inflightRequests;
}

@property (weak, nonatomic) <ATVHSConnectionDelegate> * delegate;
@property (retain, nonatomic) NSURLSession * urlSession;
@property (nonatomic) char initialized;
@property (copy, nonatomic) NSString * baseIPAddress;
@property (retain, nonatomic) NSMutableArray * inflightRequests;

- (void)dealloc;
- (void)setDelegate:(<ATVHSConnectionDelegate> *)arg0;
- (ATVHSConnection *)init;
- (<ATVHSConnectionDelegate> *)delegate;
- (void)invalidate;
- (void).cxx_destruct;
- (NSURLRequest *)processRequest:(NSURLRequest *)arg0 withCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1 completionHandler:(id /* block */)arg2;
- (ATVHSConnection *)initWithMaxConcurrentRequests:(unsigned int)arg0;
- (void)_handleRequestError:(NSError *)arg0 request:(NSURLRequest *)arg1;
- (NSString *)baseIPAddress;
- (void)_updateBaseIPAddressWithResponse:(NSURLResponse *)arg0;
- (NSMutableArray *)inflightRequests;
- (void)setBaseIPAddress:(NSString *)arg0;
- (NSData *)_ipAddressFromPeerAddressData:(NSData *)arg0 hostName:(NSString *)arg1;
- (void)setUrlSession:(NSURLSession *)arg0;
- (char)initialized;
- (void)setInitialized:(char)arg0;
- (void)setInflightRequests:(NSMutableArray *)arg0;
- (void)cancelRequest:(_UIAsyncInvocation *)arg0;
- (NSURLSession *)urlSession;

@end

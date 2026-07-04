/* Runtime dump - CTCellularPlanRequest
 * Image: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
 */

@interface CTCellularPlanRequest : NSObject <NSURLConnectionDataDelegate>
{
    int nextConnectionTypeIndex;
    NSArray * _responseCookies;
    NSArray * _requestCookies;
    NSDictionary * _internetSettings;
    NSDictionary * _bootstrapSettings;
    NSMutableData * _receivedData;
    NSMutableURLRequest * _request;
    NSURLResponse * _response;
    NSError * _error;
    struct dispatch_queue_s * _queue;
    id _completionBlock;
    NSURLConnection * _connection;
}

@property (retain, nonatomic) NSMutableData * receivedData;
@property (retain, nonatomic) NSMutableURLRequest * request;
@property (retain, nonatomic) NSURLResponse * response;
@property (retain, nonatomic) NSError * error;
@property (nonatomic) NSData * serializedCookies;
@property (nonatomic) struct dispatch_queue_s * queue;
@property (copy, nonatomic) id completionBlock;
@property (retain, nonatomic) NSURLConnection * connection;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)load;
+ (NSURLRequest *)createSessionRequest;
+ (NSObject *)plansRequestWithSignIdMap:(NSObject *)arg0 renewalIccid:(id)arg1 urls:(id)arg2;
+ (NSObject *)requestHandoffTokenWithSignIdMap:(NSObject *)arg0 urls:(id)arg1;
+ (CTCellularPlanRequest *)subscriptionDetailsRequestWithIccids:(id)arg0 signIdMap:(NSObject *)arg1 urls:(id)arg2;
+ (NSObject *)newInitiatePurchaseWithSessionId:(NSObject *)arg0 planId:(NSObject *)arg1;
+ (NSObject *)newPurchaseWithSessionId:(NSObject *)arg0 receipt:(IDSSocketPairSMSDeliveryReceipt *)arg1 userId:(NSObject *)arg2 userName:(NSString *)arg3;
+ (void)initialize;
+ (void)setRequestUrls:(id)arg0;
+ (void)setBootstrapConnectionSettings:(NSDictionary *)arg0;
+ (void)setInternetConnectionSettings:(NSDictionary *)arg0;
+ (NSObject *)connectionSettingsForServiceType:(int)arg0;
+ (char)isRetriableErrorCode:(int)arg0;

- (void)cancel;
- (void)dealloc;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;
- (NSMutableURLRequest *)request;
- (NSURLResponse *)response;
- (void)connection:(NSURLConnection *)arg0 didFailWithError:(NSError *)arg1;
- (void)connection:(NSURLConnection *)arg0 didReceiveData:(NSData *)arg1;
- (void)connectionDidFinishLoading:(NSURLConnection *)arg0;
- (void)connection:(NSURLConnection *)arg0 didReceiveResponse:(NSURLResponse *)arg1;
- (NSURLConnection *)connection;
- (void)setConnection:(NSURLConnection *)arg0;
- (NSData *)serializedCookies;
- (void)startRequestWithReplyQueue:(struct dispatch_queue_s *)arg0 completion:(id /* block */)arg1;
- (NSURL *)_initWithUrl:(NSURL *)arg0 httpMethod:(NSString *)arg1 httpHeaders:(NSDictionary *)arg2 httpBody:(NSData *)arg3 internetSettings:(NSDictionary *)arg4 bootstrapSettings:(NSDictionary *)arg5;
- (char)_isRetryableError:(NSError *)arg0;
- (char)_canTryAnotherConnectionType;
- (NSObject *)_connectionSettingsForNextConnectionType;
- (void)_startRequestWithNextConnectionTypeOrFail;
- (CTCellularPlanRequest *)initWithUrl:(NSURL *)arg0 httpMethod:(NSString *)arg1 httpHeaders:(NSDictionary *)arg2 httpBody:(NSData *)arg3;
- (CTCellularPlanRequest *)initGetWithUrl:(NSURL *)arg0;
- (CTCellularPlanRequest *)initPostWithUrl:(NSURL *)arg0;
- (CTCellularPlanRequest *)initJsonPostWithUrl:(NSURL *)arg0 jsonData:(NSData *)arg1;
- (CTCellularPlanRequest *)initJsonPostWithUrl:(NSURL *)arg0 jsonData:(NSData *)arg1 internetSettings:(NSDictionary *)arg2 bootstrapSettings:(NSDictionary *)arg3;
- (void)setSerializedCookies:(NSData *)arg0;
- (NSError *)error;
- (struct dispatch_queue_s *)queue;
- (void)setQueue:(struct dispatch_queue_s *)arg0;
- (void)setResponse:(NSURLResponse *)arg0;
- (void)_callback;
- (NSMutableData *)receivedData;
- (void)setReceivedData:(NSMutableData *)arg0;
- (void)setError:(NSError *)arg0;
- (void)setRequest:(NSMutableURLRequest *)arg0;

@end

/* Runtime dump - SSPurchaseResponse
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPurchaseResponse : NSObject <SSXPCCoding>
{
    char _cancelsPurchaseBatch;
    NSArray * _downloadIdentifiers;
    NSError * _error;
    SSPurchase * _purchase;
    double _requestStartTime;
    SSURLConnectionResponse * _response;
    double _responseEndTime;
    double _responseStartTime;
    NSMutableDictionary * _transactionIdentifiers;
}

@property (nonatomic) char cancelsPurchaseBatch;
@property (copy, nonatomic) NSError * error;
@property (copy, nonatomic) SSPurchase * purchase;
@property (retain, nonatomic) SSURLConnectionResponse * URLResponse;
@property (copy, nonatomic) NSArray * downloadIdentifiers;
@property (nonatomic) double requestStartTime;
@property (nonatomic) double responseEndTime;
@property (nonatomic) double responseStartTime;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (SSURLConnectionResponse *)URLResponse;
- (NSDictionary *)copyXPCEncoding;
- (SSPurchaseResponse *)initWithXPCEncoding:(NSString *)arg0;
- (SSPurchase *)purchase;
- (void)dealloc;
- (NSError *)error;
- (void)setError:(NSError *)arg0;
- (void)setPurchase:(SSPurchase *)arg0;
- (void)setResponseStartTime:(double)arg0;
- (void)setResponseEndTime:(double)arg0;
- (void)setRequestStartTime:(double)arg0;
- (NSString *)transactionIdentifierForItemIdentifier:(long long)arg0;
- (id)responseMetrics;
- (char)cancelsPurchaseBatch;
- (void)setCancelsPurchaseBatch:(char)arg0;
- (NSArray *)downloadIdentifiers;
- (void)setDownloadIdentifiers:(NSArray *)arg0;
- (double)requestStartTime;
- (double)responseEndTime;
- (double)responseStartTime;
- (void)setURLResponse:(NSURLResponse *)arg0;

@end

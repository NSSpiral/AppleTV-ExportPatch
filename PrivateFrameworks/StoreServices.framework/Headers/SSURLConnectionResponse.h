/* Runtime dump - SSURLConnectionResponse
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSURLConnectionResponse : NSObject <SSXPCCoding>
{
    NSData * _bodyData;
    SSMetricsPageEvent * _metricsPageEvent;
    NSHTTPURLResponse * _urlResponse;
}

@property (readonly, nonatomic) NSData * radio_decompressedBodyData;
@property (readonly, nonatomic) char ssv_isExpiredResponse;
@property (readonly, nonatomic) NSData * bodyData;
@property (readonly, nonatomic) long long expectedContentLength;
@property (readonly, nonatomic) NSString * MIMEType;
@property (readonly, nonatomic) NSString * suggestedFilename;
@property (readonly, nonatomic) NSString * textEncodingName;
@property (readonly, nonatomic) NSURL * URL;
@property (readonly, nonatomic) NSData * databaseEncoding;
@property (retain, nonatomic) SSMetricsPageEvent * metricsPageEvent;
@property (readonly, nonatomic) NSHTTPURLResponse * URLResponse;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSData *)radio_decompressedBodyData;
- (NSString *)textEncodingName;
- (NSString *)suggestedFilename;
- (NSData *)bodyData;
- (NSHTTPURLResponse *)URLResponse;
- (NSDictionary *)copyXPCEncoding;
- (SSURLConnectionResponse *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (NSURL *)URL;
- (NSString *)MIMEType;
- (int)statusCode;
- (NSDictionary *)allHeaderFields;
- (SSURLConnectionResponse *)initWithURLResponse:(NSString *)arg0 bodyData:(NSData *)arg1;
- (void)setMetricsPageEvent:(SSMetricsPageEvent *)arg0;
- (SSMetricsPageEvent *)metricsPageEvent;
- (char)ssv_isExpiredResponse;
- (SSURLConnectionResponse *)initWithDatabaseEncoding:(NSData *)arg0;
- (NSData *)databaseEncoding;
- (long long)expectedContentLength;

@end

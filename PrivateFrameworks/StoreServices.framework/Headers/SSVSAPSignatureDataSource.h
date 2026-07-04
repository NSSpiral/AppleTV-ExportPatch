/* Runtime dump - SSVSAPSignatureDataSource
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVSAPSignatureDataSource : NSObject
{
    NSData * _bodyData;
    NSURLRequest * _request;
    SSURLRequestProperties * _requestProperties;
    NSHTTPURLResponse * _response;
}

@property (readonly, nonatomic) NSData * HTTPBody;
@property (readonly, nonatomic) NSString * HTTPMethod;

- (NSData *)HTTPBody;
- (SSVSAPSignatureDataSource *)initWithURLRequest:(NSString *)arg0;
- (void).cxx_destruct;
- (NSString *)HTTPMethod;
- (SSVSAPSignatureDataSource *)initWithURLRequestProperties:(NSDictionary *)arg0;
- (SSVSAPSignatureDataSource *)initWithURLResponse:(NSString *)arg0 bodyData:(NSData *)arg1;
- (NSString *)valueForHTTPHeader:(NSString *)arg0;
- (id)valueForQueryParameter:(id)arg0;

@end

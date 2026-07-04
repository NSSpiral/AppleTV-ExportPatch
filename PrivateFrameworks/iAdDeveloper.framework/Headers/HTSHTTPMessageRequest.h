/* Runtime dump - HTSHTTPMessageRequest
 * Image: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
 */

@interface HTSHTTPMessageRequest : HTSHTTPMessage
{
    NSString * _requestMethod;
    NSURL * _requestURL;
}

@property (copy, nonatomic) NSString * requestMethod;
@property (copy, nonatomic) NSURL * requestURL;

- (void)dealloc;
- (HTSHTTPMessageRequest *)initWithRequest:(struct __CFHTTPMessage *)arg0;
- (NSString *)requestMethod;
- (void)setRequestMethod:(NSString *)arg0;
- (NSURL *)requestURL;
- (id)responseWithStatus:(int)arg0;
- (void)setRequestURL:(NSURL *)arg0;
- (struct __CFHTTPMessage *)copyMessage;
- (char)responseCanUseGZip;

@end

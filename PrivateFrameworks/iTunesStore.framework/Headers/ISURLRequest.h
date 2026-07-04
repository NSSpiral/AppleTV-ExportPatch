/* Runtime dump - ISURLRequest
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISURLRequest : NSObject <NSCoding, NSCopying>
{
    NSLock * _lock;
    SSMutableURLRequestProperties * _properties;
}

@property (retain) NSString * appleClientApplication;
@property (retain) NSData * HTTPBody;
@property (retain) NSInputStream * HTTPBodyStream;
@property (retain) NSString * HTTPMethod;
@property (retain) NSDictionary * queryStringDictionary;
@property (readonly) NSURL * primaryURL;
@property (retain) NSArray * URLs;
@property int allowedRetryCount;
@property double timeoutInterval;
@property unsigned int cachePolicy;
@property (retain) NSDictionary * customHeaders;
@property int URLBagType;
@property long long expectedContentLength;

+ (NSURL *)requestWithURL:(NSURL *)arg0;

- (NSInputStream *)HTTPBodyStream;
- (NSData *)HTTPBody;
- (void)setAllowedRetryCount:(int)arg0;
- (void)setCachePolicy:(unsigned int)arg0;
- (ISURLRequest *)initWithRequestProperties:(NSDictionary *)arg0;
- (ISURLRequest *)initWithURLRequest:(NSString *)arg0;
- (void)dealloc;
- (ISURLRequest *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (ISURLRequest *)init;
- (char)isEqual:(NSObject *)arg0;
- (ISURLRequest *)copyWithZone:(struct _NSZone *)arg0;
- (ISURLRequest *)initWithURL:(NSURL *)arg0;
- (void)setURLs:(id)arg0;
- (NSArray *)URLs;
- (void)setValue:(NSObject *)arg0 forHeaderField:(id)arg1;
- (void)setTimeoutInterval:(double)arg0;
- (unsigned int)cachePolicy;
- (void)setHTTPBodyStream:(NSObject *)arg0;
- (NSString *)HTTPMethod;
- (NSDictionary *)requestProperties;
- (double)timeoutInterval;
- (void)setHTTPBody:(NSObject *)arg0;
- (void)setHTTPMethod:(NSString *)arg0;
- (void)setExpectedContentLength:(long long)arg0;
- (ISURLRequest *)_initCommon;
- (int)allowedRetryCount;
- (int)URLBagType;
- (void)setURLBagType:(int)arg0;
- (long long)expectedContentLength;
- (NSString *)appleClientApplication;
- (void)setAppleClientApplication:(NSString *)arg0;
- (NSDictionary *)customHeaders;
- (NSDictionary *)queryStringDictionary;
- (NSURL *)primaryURL;
- (void)setCustomHeaders:(NSDictionary *)arg0;
- (void)setQueryStringDictionary:(NSDictionary *)arg0;
- (void)setValue:(NSObject *)arg0 forQueryStringParameter:(id)arg1;

@end

/* Runtime dump - HSRequest
 * Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSRequest : NSObject
{
    NSDictionary * _arguments;
    char _concurrent;
    char _excludeSessionIDFromURL;
    char _shouldPromptForAuthentication;
    char _acceptsGzipEncoding;
    NSString * _action;
    int _method;
    NSData * _bodyData;
    NSURL * _responseDataDestinationFileURL;
}

@property (readonly, nonatomic) NSString * action;
@property (readonly, nonatomic) char concurrent;
@property (nonatomic) int method;
@property (readonly, nonatomic) double timeoutInterval;
@property (copy, nonatomic) NSData * bodyData;
@property (nonatomic) char excludeSessionIDFromURL;
@property (nonatomic) char shouldPromptForAuthentication;
@property (copy, nonatomic) NSURL * responseDataDestinationFileURL;
@property (nonatomic) char acceptsGzipEncoding;

+ (NSURLRequest *)request;

- (NSData *)bodyData;
- (void)setValue:(NSObject *)arg0 forArgument:(MTLArgument *)arg1;
- (NSString *)description;
- (NSString *)action;
- (int)method;
- (void).cxx_destruct;
- (HSRequest *)initWithAction:(NSString *)arg0;
- (char)isConcurrent;
- (double)timeoutInterval;
- (char)acceptsGzipEncoding;
- (NSURLResponse *)canonicalResponseForResponse:(NSURLResponse *)arg0;
- (NSURL *)requestURLForBaseURL:(NSURL *)arg0 sessionID:(unsigned int)arg1;
- (NSURL *)URLRequestForBaseURL:(NSURL *)arg0 sessionID:(unsigned int)arg1;
- (char)excludeSessionIDFromURL;
- (void)setExcludeSessionIDFromURL:(char)arg0;
- (char)shouldPromptForAuthentication;
- (void)setShouldPromptForAuthentication:(char)arg0;
- (NSURL *)responseDataDestinationFileURL;
- (void)setResponseDataDestinationFileURL:(NSURL *)arg0;
- (void)setAcceptsGzipEncoding:(char)arg0;
- (void)setBodyData:(NSData *)arg0;
- (void)setMethod:(int)arg0;

@end

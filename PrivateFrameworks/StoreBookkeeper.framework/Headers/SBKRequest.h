/* Runtime dump - SBKRequest
 * Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKRequest : NSObject
{
    char _shouldAuthenticate;
    NSURL * _requestURL;
    NSString * _action;
    NSData * _bodyData;
    int _bodyContentType;
    NSDictionary * _headers;
    NSDictionary * _arguments;
    int _method;
    ISDataProvider * _responseDataProvider;
    char _concurrent;
    char _includeDeviceGUID;
    SBKTransaction * _transaction;
}

@property (retain, nonatomic) SBKTransaction * transaction;
@property (readonly, nonatomic) char concurrent;
@property (nonatomic) int method;
@property (readonly, nonatomic) double timeoutInterval;
@property (nonatomic) char shouldAuthenticate;
@property (nonatomic) char includeDeviceGUID;
@property (retain, nonatomic) NSData * bodyData;
@property (retain, nonatomic) ISDataProvider * responseDataProvider;

+ (NSURL *)requestWithRequestURL:(NSURL *)arg0;
+ (NSString *)_methodStringForMethod:(int)arg0;
+ (int)bodyContentEncodingType;
+ (int)bodyContentType;
+ (NSObject *)_contentEncodingTypeStringForBodyContentEncodingType:(int)arg0;
+ (NSObject *)_contentTypeStringForBodyContentType:(int)arg0;

- (void)setTransaction:(SBKTransaction *)arg0;
- (NSData *)bodyData;
- (void)setValue:(NSObject *)arg0 forArgument:(MTLArgument *)arg1;
- (NSString *)description;
- (int)method;
- (void).cxx_destruct;
- (void)setValue:(NSObject *)arg0 forHeaderField:(id)arg1;
- (char)isConcurrent;
- (double)timeoutInterval;
- (SBKTransaction *)transaction;
- (char)acceptsGzipEncoding;
- (NSURLResponse *)canonicalResponseForResponse:(NSURLResponse *)arg0;
- (void)setBodyData:(NSData *)arg0;
- (void)setBodyDataWithPropertyList:(NSDictionary *)arg0;
- (void)setIncludeDeviceGUID:(char)arg0;
- (char)shouldAuthenticate;
- (void)setShouldAuthenticate:(char)arg0;
- (NSObject *)newURLOperation;
- (NSDictionary *)copyRequestProperties;
- (ISDataProvider *)responseDataProvider;
- (SBKRequest *)initWithRequestURL:(NSURL *)arg0;
- (NSArray *)_defaultHeaderFields;
- (void)setResponseDataProvider:(ISDataProvider *)arg0;
- (char)includeDeviceGUID;
- (NSArray *)descriptionWithoutHeaderFields;
- (void)setMethod:(int)arg0;

@end

/* Runtime dump - ATVHSRequest
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVHSRequest : NSObject
{
    ATVHSDataClient * _dataClient;
    NSString * _requestDescription;
    NSString * _requestName;
    NSString * _requestMethod;
    NSData * _requestBody;
    int _requestType;
    NSMutableDictionary * _headersDict;
    NSMutableDictionary * _argumentsDict;
    double _timeoutInterval;
}

@property (nonatomic) double timeoutInterval;
@property (readonly, nonatomic) ATVHSDataClient * dataClient;
@property (copy, nonatomic) NSString * requestDescription;
@property (copy, nonatomic) NSString * requestName;
@property (retain, nonatomic) NSString * requestMethod;
@property (retain, nonatomic) NSData * requestBody;
@property (nonatomic) int requestType;
@property (retain, nonatomic) NSMutableDictionary * headersDict;
@property (retain, nonatomic) NSMutableDictionary * argumentsDict;

+ (NSObject *)daapATVHeadersForDataClient:(NSObject *)arg0;
+ (void)_setDefaultHeadersInDictionary:(NSDictionary *)arg0 dataClient:(ATVHSDataClient *)arg1 requestType:(int)arg2;

- (void)setValue:(NSObject *)arg0 forArgument:(MTLArgument *)arg1;
- (NSString *)description;
- (ATVHSRequest *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (ATVHSDataClient *)dataClient;
- (ATVHSRequest *)initWithRequestName:(NSString *)arg0 requestMethod:(NSString *)arg1 requestBody:(NSData *)arg2 requestType:(int)arg3 dataClient:(ATVHSDataClient *)arg4;
- (ATVHSRequest *)initUpdateRequestWithName:(NSString *)arg0 requestMethod:(NSString *)arg1 requestBody:(NSData *)arg2 requestType:(int)arg3 revision:(unsigned long)arg4 dataClient:(ATVHSDataClient *)arg5;
- (void)setRequestDescription:(NSString *)arg0;
- (unsigned long)_sessionID;
- (NSString *)requestName;
- (NSString *)requestMethod;
- (NSData *)requestBody;
- (NSMutableDictionary *)headersDict;
- (NSMutableDictionary *)argumentsDict;
- (void)setHeadersDict:(NSMutableDictionary *)arg0;
- (void)setArgumentsDict:(NSMutableDictionary *)arg0;
- (NSString *)_requestTypeString;
- (NSString *)requestDescription;
- (void)setValue:(NSObject *)arg0 forHeaderField:(id)arg1;
- (void)setRequestName:(NSString *)arg0;
- (void)setRequestMethod:(NSString *)arg0;
- (void)setRequestBody:(NSData *)arg0;
- (void)setTimeoutInterval:(double)arg0;
- (double)timeoutInterval;
- (void)setRequestType:(int)arg0;
- (int)requestType;
- (NSURLRequest *)urlRequest;

@end

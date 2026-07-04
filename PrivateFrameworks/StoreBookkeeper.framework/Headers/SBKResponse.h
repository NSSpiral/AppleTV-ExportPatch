/* Runtime dump - SBKResponse
 * Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKResponse : NSObject
{
    NSDictionary * _responseDictionary;
    unsigned int _responseCode;
    NSDictionary * _responseHeaderFields;
    NSError * _error;
    NSString * _MIMEType;
    SBKResponseStatus * _responseStatus;
    double _retrySeconds;
}

@property (readonly, nonatomic) unsigned int responseCode;
@property (readonly, nonatomic) NSDictionary * responseHeaderFields;
@property (readonly, nonatomic) NSDictionary * responseDictionary;
@property (readonly, nonatomic) NSError * error;
@property (readonly) int statusCode;
@property (readonly, copy) NSString * consoleDescription;
@property (readonly) NSError * requestError;
@property (readonly) char isSuccess;
@property (readonly) char isRecoverable;
@property (readonly) char isError;
@property (readonly) char shouldFileRadar;
@property (readonly) char isGenericError;
@property (readonly) char isUnsupportedClient;
@property (readonly) char isAuthenticationError;
@property (readonly) char isValidationError;
@property (readonly) char isPuntedError;
@property (readonly) double retrySeconds;
@property (readonly, nonatomic) NSString * MIMEType;
@property (readonly, nonatomic) SBKResponseStatus * responseStatus;

+ (NSURLResponse *)responseWithResponse:(NSURLResponse *)arg0;
+ (NSURLResponse *)responseWithURLResponse:(NSString *)arg0 responseDictionary:(NSDictionary *)arg1;
+ (SBKResponse *)responseWithCode:(unsigned int)arg0 headerFields:(NSDictionary *)arg1 responseDictionary:(NSDictionary *)arg2 MIMEType:(NSString *)arg3 error:(NSError *)arg4;

- (unsigned int)responseCode;
- (NSString *)description;
- (NSString *)MIMEType;
- (int)statusCode;
- (void).cxx_destruct;
- (NSError *)error;
- (NSDictionary *)responseHeaderFields;
- (NSError *)requestError;
- (NSDictionary *)responseDictionary;
- (double)retrySeconds;
- (char)isSuccess;
- (char)isUnsupportedClient;
- (char)isGenericError;
- (char)isValidationError;
- (char)isAuthenticationError;
- (SBKResponse *)initWithCode:(unsigned int)arg0 headerFields:(NSDictionary *)arg1 responseDictionary:(NSDictionary *)arg2 MIMEType:(NSString *)arg3 error:(NSError *)arg4;
- (char)isPuntedError;
- (SBKResponse *)initWithURLResponse:(NSString *)arg0 responseDictionary:(NSDictionary *)arg1;
- (NSString *)consoleDescription;
- (char)isRecoverable;
- (char)isError;
- (char)shouldFileRadar;
- (SBKResponseStatus *)responseStatus;

@end

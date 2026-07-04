/* Runtime dump - SBKResponseStatus
 * Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKResponseStatus : NSObject
{
    char _isRecoverable;
    char _isError;
    char _shouldFileRadar;
    char _isPuntedError;
    int _statusCode;
    NSString * _consoleDescription;
}

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

+ (NSNumber *)responseStatusForStatusCodeNumber:(NSNumber *)arg0;

- (int)statusCode;
- (void).cxx_destruct;
- (NSError *)requestError;
- (char)isSuccess;
- (char)isUnsupportedClient;
- (char)isGenericError;
- (char)isValidationError;
- (char)isAuthenticationError;
- (char)isPuntedError;
- (NSString *)consoleDescription;
- (char)isRecoverable;
- (char)isError;
- (char)shouldFileRadar;
- (SBKResponseStatus *)initWithStatus:(int)arg0 isRecoverable:(char)arg1 isError:(char)arg2 consoleDescription:(NSString *)arg3 shouldFileRadar:(char)arg4;

@end

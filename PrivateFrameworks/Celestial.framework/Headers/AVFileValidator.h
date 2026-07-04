/* Runtime dump - AVFileValidator
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVFileValidator : NSObject
{
    struct AVFileValidatorPrivate * _priv;
    NSString * _validationRules;
}

@property (retain) NSString * validationRules;

- (char)isCompleted;
- (void)cancel;
- (void)dealloc;
- (NSURL *)url;
- (void)validate;
- (AVFileValidator *)initWithURL:(NSURL *)arg0;
- (float)progress;
- (NSString *)validationRules;
- (NSObject *)notificationForFileCheckResult:(NSObject *)arg0;
- (void)postNotificationForCallback:(id /* block */)arg0;
- (void)setValidationRules:(NSString *)arg0;
- (id)validateBlocking:(char)arg0;
- (char)isStreaming;
- (void)validateForCameraRoll;
- (char)validateSyncWithError:(id *)arg0;
- (AVFileValidator *)initWithURL:(NSURL *)arg0 options:(NSDictionary *)arg1;

@end

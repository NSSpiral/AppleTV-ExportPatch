/* Runtime dump - SASSpeechFailure
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASSpeechFailure : SABaseClientBoundCommand

@property (nonatomic) int errorCode;
@property (nonatomic) int reason;
@property (copy, nonatomic) NSString * reasonDescription;

+ (SASSpeechFailure *)speechFailure;
+ (NSDictionary *)speechFailureWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (int)reason;
- (void)setErrorCode:(int)arg0;
- (int)errorCode;
- (void)setReason:(int)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSString *)reasonDescription;
- (void)setReasonDescription:(NSString *)arg0;

@end

/* Runtime dump - SASessionValidationFailed
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASessionValidationFailed : SABaseClientBoundCommand

@property (copy, nonatomic) NSString * errorCode;

+ (SASessionValidationFailed *)sessionValidationFailed;
+ (NSDictionary *)sessionValidationFailedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setErrorCode:(NSString *)arg0;
- (NSString *)errorCode;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end

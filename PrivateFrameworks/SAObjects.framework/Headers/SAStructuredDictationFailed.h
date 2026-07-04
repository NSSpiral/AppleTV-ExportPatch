/* Runtime dump - SAStructuredDictationFailed
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAStructuredDictationFailed : SABaseClientBoundCommand

@property (copy, nonatomic) NSString * dialogIdentifier;
@property (nonatomic) int errorCode;
@property (copy, nonatomic) NSString * recognition;
@property (copy, nonatomic) NSString * userFacingReasonDescription;
@property (copy, nonatomic) NSString * userFacingReasonTitle;

+ (SAStructuredDictationFailed *)structuredDictationFailed;
+ (NSDictionary *)structuredDictationFailedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setErrorCode:(int)arg0;
- (int)errorCode;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSString *)recognition;
- (void)setRecognition:(NSString *)arg0;
- (NSString *)dialogIdentifier;
- (void)setDialogIdentifier:(NSString *)arg0;
- (NSString *)userFacingReasonDescription;
- (void)setUserFacingReasonDescription:(NSString *)arg0;
- (NSString *)userFacingReasonTitle;
- (void)setUserFacingReasonTitle:(NSString *)arg0;

@end

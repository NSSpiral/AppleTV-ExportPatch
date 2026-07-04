/* Runtime dump - SAPhoneCallEmergencySnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAPhoneCallEmergencySnippet : SAPhoneCallSnippet

@property (nonatomic) int countDownSeconds;

+ (SAPhoneCallEmergencySnippet *)callEmergencySnippet;
+ (NSDictionary *)callEmergencySnippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (int)countDownSeconds;
- (void)setCountDownSeconds:(int)arg0;

@end

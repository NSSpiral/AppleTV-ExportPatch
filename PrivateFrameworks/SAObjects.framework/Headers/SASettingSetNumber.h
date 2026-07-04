/* Runtime dump - SASettingSetNumber
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingSetNumber : SASettingSetValue

@property (nonatomic) char increment;

+ (NSNumber *)setNumber;
+ (NSDictionary *)setNumberWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (char)increment;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (void)setIncrement:(char)arg0;

@end

/* Runtime dump - SASettingSetFloat
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingSetFloat : SASettingSetNumber

@property (nonatomic) float value;

+ (SASettingSetFloat *)setFloat;
+ (NSDictionary *)setFloatWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (float)value;
- (void)setValue:(float)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end

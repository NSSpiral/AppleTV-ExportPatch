/* Runtime dump - SASettingSetBool
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingSetBool : SASettingSetValue

@property (nonatomic) char toggle;
@property (nonatomic) char value;

+ (SASettingSetBool *)setBool;
+ (NSDictionary *)setBoolWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (char)value;
- (void)setValue:(char)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (char)toggle;
- (void)setToggle:(char)arg0;

@end

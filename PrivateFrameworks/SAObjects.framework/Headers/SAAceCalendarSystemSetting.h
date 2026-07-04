/* Runtime dump - SAAceCalendarSystemSetting
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAceCalendarSystemSetting : SADomainObject

@property (copy, nonatomic) NSString * calendarType;

+ (SAAceCalendarSystemSetting *)aceCalendarSystemSetting;
+ (NSDictionary *)aceCalendarSystemSettingWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setCalendarType:(NSString *)arg0;
- (NSString *)calendarType;
- (NSString *)encodedClassName;

@end

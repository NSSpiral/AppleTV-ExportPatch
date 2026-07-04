/* Runtime dump - SASettingGetCellularData
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingGetCellularData : SASettingGetBool

+ (NSData *)getCellularData;
+ (NSDictionary *)getCellularDataWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end

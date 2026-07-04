/* Runtime dump - SASettingOpenCellularData
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingOpenCellularData : SASettingOpenSettings

+ (NSData *)openCellularData;
+ (NSDictionary *)openCellularDataWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end

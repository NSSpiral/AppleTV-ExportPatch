/* Runtime dump - SASettingGetNumberResponse
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingGetNumberResponse : SASettingGetValueResponse

+ (NSURLResponse *)getNumberResponse;
+ (NSDictionary *)getNumberResponseWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;

@end

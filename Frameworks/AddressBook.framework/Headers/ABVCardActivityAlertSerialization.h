/* Runtime dump - ABVCardActivityAlertSerialization
 * Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABVCardActivityAlertSerialization : NSObject

+ (NSObject *)stringWithType:(NSObject *)arg0 info:(NSDictionary *)arg1;
+ (void)parseString:(NSString *)arg0 intoTypeAndInfo:(NSDictionary *)arg1;
+ (NSObject *)dictionaryWithType:(NSObject *)arg0 info:(NSDictionary *)arg1;
+ (NSString *)activityAlertWithString:(NSString *)arg0;
+ (NSDictionary *)typeFromDictionary:(NSDictionary *)arg0;
+ (NSDictionary *)infoFromDictionary:(NSDictionary *)arg0;

@end

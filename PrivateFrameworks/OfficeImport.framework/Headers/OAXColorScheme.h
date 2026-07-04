/* Runtime dump - OAXColorScheme
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAXColorScheme : NSObject

+ (void)readFromXmlNode:(struct _xmlNode *)arg0 toColorScheme:(struct _xmlNode *)arg1;
+ (NSObject *)schemeColorEnumMap;
+ (NSString *)colorForScheme:(NSString *)arg0 value:(NSObject *)arg1;

@end

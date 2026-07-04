/* Runtime dump - OAXColor
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAXColor : NSObject

+ (NSObject *)readColorFromNode:(struct _xmlNode *)arg0;
+ (void)writeSRgbColor:(UIColor *)arg0 to:(NSObject *)arg1;
+ (NSObject *)readScRgbColorFromXmlNode:(struct _xmlNode *)arg0;
+ (NSObject *)readSRgbColorFromXmlNode:(struct _xmlNode *)arg0 attribute:(struct _xmlNode *)arg1;
+ (NSObject *)readHslColorFromXmlNode:(struct _xmlNode *)arg0;
+ (NSObject *)readSystemColorFromXmlNode:(struct _xmlNode *)arg0;
+ (NSObject *)readSchemeColorFromXmlNode:(struct _xmlNode *)arg0;
+ (NSObject *)readPresetColorFromXmlNode:(struct _xmlNode *)arg0;
+ (NSObject *)presetColorEnumMap;
+ (NSObject *)presetColorRGBEnumMap;
+ (NSObject *)systemColorEnumMap;
+ (UIColor *)stringSRgbColor:(UIColor *)arg0;
+ (NSObject *)readSchemeColorFromAttribute:(NSObject *)arg0;
+ (void)writePresetColor:(UIColor *)arg0 to:(NSObject *)arg1;
+ (NSObject *)schemeColorEnumMap;
+ (NSObject *)readColorFromParentXmlNode:(struct _xmlNode *)arg0;
+ (NSObject *)readPresetColorFromAttribute:(NSObject *)arg0;
+ (NSObject *)readSystemColorFromAttribute:(NSObject *)arg0;

@end

/* Runtime dump - WXCharacterProperties
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WXCharacterProperties : NSObject

+ (void)initialize;
+ (NSString *)stringFromLanguage:(int)arg0;
+ (char)readBooleanCharacterProperty:(struct _xmlNode *)arg0 propertyName:(struct _xmlNode *)arg1 attributeName:(struct _xmlNode *)arg2 outValue:(struct _xmlNode *)arg3 state:(struct _xmlNode *)arg4;
+ (void)readReflection:(id)arg0 fromXmlNode:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (void)readShadowForTarget:(NSObject *)arg0 fromXmlNode:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (char)readBooleanCharacterMultipleProperty:(struct _xmlNode *)arg0 propertyName:(struct _xmlNode *)arg1 attributeName:(struct _xmlNode *)arg2 outValue:(struct _xmlNode *)arg3 state:(struct _xmlNode *)arg4;
+ (UIColor *)readFillColor:(struct _xmlNode *)arg0 forTarget:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (void)applyDeletionInsertionProperties:(NSDictionary *)arg0 state:(NSObject *)arg1;
+ (char)isBooleanCharacterPropertyTrue:(int)arg0;
+ (void)readFrom:(struct _xmlNode *)arg0 to:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;

@end

/* Runtime dump - OAXTheme
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAXTheme : NSObject

+ (void)readObjectDefaults:(struct _xmlNode *)arg0 theme:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (void)readFromPackagePart:(id)arg0 toTheme:(TSSTheme *)arg1 state:(NSObject *)arg2;
+ (void)readDefaultProperties:(struct _xmlNode *)arg0 fallback:(struct _xmlNode *)arg1 defaultProperties:(struct _xmlNode *)arg2 drawingState:(struct _xmlNode *)arg3;
+ (void)readObjectDefaultsFromParent:(struct _xmlNode *)arg0 defaultsName:(struct _xmlNode *)arg1 toObjectDefaults:(struct _xmlNode *)arg2 drawingState:(struct _xmlNode *)arg3;
+ (struct _xmlNode *)childNamed:(struct _xmlNode *)arg0 inParent:(struct _xmlNode *)arg1 fallbackParent:(struct _xmlDoc *)arg2 drawingState:(struct _xmlNs *)arg3;

@end

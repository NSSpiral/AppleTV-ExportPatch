/* Runtime dump - OAXTextParaPropertyBag
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAXTextParaPropertyBag : NSObject

+ (void)readParagraphProperties:(struct _xmlNode *)arg0 paragraphProperties:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (void)readAlign:(id)arg0 paragraphProperties:(NSDictionary *)arg1;
+ (void)readFontAlign:(id)arg0 paragraphProperties:(NSDictionary *)arg1;
+ (OAXTextParaPropertyBag *)readSpacing:(struct _xmlNode *)arg0 drawingState:(struct _xmlNode *)arg1;
+ (void)readTabList:(struct _xmlNode *)arg0 paragraphProperties:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (int)readBulletScheme:(NSString *)arg0;

@end

/* Runtime dump - WXSection
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WXSection : NSObject

+ (void)initialize;
+ (float)scaleFromPrinterSettings:(NSDictionary *)arg0;
+ (void)readFrom:(struct _xmlNode *)arg0 to:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (void)mapHeader:(struct _xmlNode *)arg0 toSection:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (void)mapFooter:(struct _xmlNode *)arg0 toSection:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (void)mapPrinterSettings:(struct _xmlNode *)arg0 toSection:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (void)mapProperties:(struct _xmlNode *)arg0 toSection:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;

@end

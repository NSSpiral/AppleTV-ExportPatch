/* Runtime dump - CHXErrorBar
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHXErrorBar : NSObject

+ (int)chdErrorBarTypeFromXmlElement:(struct _xmlNode *)arg0;
+ (int)chdErrorBarValueTypeFromXmlElement:(struct _xmlNode *)arg0;
+ (int)chdErrorBarDirectionFromXmlElement:(struct _xmlNode *)arg0;
+ (CHXErrorBar *)chxErrorBarTypeFromEnum:(int)arg0;
+ (CHXErrorBar *)chxErrorBarValueTypeFromEnum:(int)arg0;
+ (NSObject *)chdErrorBarFromXmlErrorBarElement:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;

@end

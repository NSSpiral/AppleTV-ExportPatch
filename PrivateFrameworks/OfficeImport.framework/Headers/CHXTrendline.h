/* Runtime dump - CHXTrendline
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHXTrendline : NSObject

+ (NSObject *)chdTrendlineFromXmlTrendlineElement:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (int)chdTrendlineTypeFromXmlTrendlineTypeElement:(struct _xmlNode *)arg0;
+ (CHXTrendline *)stringFromTrendlineTypeEnum:(int)arg0;

@end

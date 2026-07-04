/* Runtime dump - CHXChart
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHXChart : NSObject

+ (NSObject *)readFromXmlDocument:(struct _xmlDoc *)arg0 chartStyleId:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (void)readDefaultTextPropertiesFromXmlNode:(struct _xmlNode *)arg0 chart:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (void)readChartFromXmlNode:(struct _xmlNode *)arg0 chart:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (NSObject *)readFromXmlDocument:(struct _xmlDoc *)arg0 state:(struct _xmlNode *)arg1;
+ (int)chdDisplayBlanksAsEnumFromXmlElement:(struct _xmlNode *)arg0;

@end

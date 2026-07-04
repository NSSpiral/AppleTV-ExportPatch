/* Runtime dump - CHXDataLabel
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHXDataLabel : NSObject

+ (NSObject *)chdDataLabelFromXmlDataLabelElement:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (Class)chdDataValuePropertiesClassWithState:(NSObject *)arg0;
+ (int)chdDataLabelPositionFromXmlDataLabelElement:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (NSObject *)stringFromDataLabelPosition:(int)arg0;
+ (void)readFrom:(struct _xmlNode *)arg0 dataValuePropertiesCollection:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;

@end

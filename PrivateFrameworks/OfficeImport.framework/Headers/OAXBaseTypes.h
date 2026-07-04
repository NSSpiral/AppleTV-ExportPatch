/* Runtime dump - OAXBaseTypes
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAXBaseTypes : NSObject

+ (long)readRequiredLongFromXmlNode:(struct _xmlNode *)arg0 name:(struct _xmlNode *)arg1 desiredOutputUnit:(struct _xmlNode *)arg2;
+ (long)readOptionalLongFromXmlNode:(struct _xmlNode *)arg0 name:(struct _xmlNode *)arg1 desiredOutputUnit:(struct _xmlNode *)arg2;
+ (long)readRequiredLongFromXmlNode:(struct _xmlNode *)arg0 name:(struct _xmlNode *)arg1;
+ (long)readOptionalLongFromXmlNode:(struct _xmlNode *)arg0 name:(struct _xmlNode *)arg1;
+ (NSObject *)rectAlignmentEnumMap;
+ (struct CGPoint)readPoint2DFromXmlNode:(struct _xmlNode *)arg0;
+ (struct CGSize)readSize2DFromXmlNode:(struct _xmlNode *)arg0;
+ (OAXBaseTypes *)stringForRectAlignment:(int)arg0;
+ (void)writeRelativeRect:(NSObject *)arg0 to:(NSObject *)arg1;
+ (void)writeRectAlignment:(int)arg0 to:(NSObject *)arg1;
+ (float)readOptionalFractionFromXmlNode:(struct _xmlNode *)arg0 name:(struct _xmlNode *)arg1;
+ (float)readRequiredFractionFromXmlNode:(struct _xmlNode *)arg0 name:(struct _xmlNode *)arg1;
+ (double)readRequiredAngleFromXmlNode:(struct _xmlNode *)arg0 name:(struct _xmlNode *)arg1;
+ (NSObject *)readRelativeRectFromXmlNode:(struct _xmlNode *)arg0;
+ (float)readOptionalLengthFromXmlNode:(struct _xmlNode *)arg0 name:(struct _xmlNode *)arg1;
+ (int)readRectAlignmentFromXmlNode:(struct _xmlNode *)arg0 name:(struct _xmlNode *)arg1;
+ (NSObject *)readRotation3DFromXmlNode:(struct _xmlNode *)arg0;
+ (NSObject *)readPoint3DFromXmlNode:(struct _xmlNode *)arg0;
+ (NSObject *)readVector3DFromXmlNode:(struct _xmlNode *)arg0;
+ (float)readRequiredLengthFromXmlNode:(struct _xmlNode *)arg0 name:(struct _xmlNode *)arg1;
+ (double)readOptionalAngleFromXmlNode:(struct _xmlNode *)arg0 name:(struct _xmlNode *)arg1;

@end

/* Runtime dump - OAVShape
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAVShape : NSObject

+ (OAVShape *)readFromShape:(struct _xmlNode *)arg0 inNamespace:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (unsigned short)typeWithShape:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (OAVShape *)managerWithShape:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (void)readBoundsAndGeometryOfPolylineFromManager:(NSObject *)arg0 toShape:(struct _xmlNode *)arg1 state:(NSObject *)arg2;

@end

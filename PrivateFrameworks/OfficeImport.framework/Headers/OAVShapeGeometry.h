/* Runtime dump - OAVShapeGeometry
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAVShapeGeometry : NSObject

+ (struct OADAdjustCoord)readAdjustCoord:(id)arg0;
+ (void)readAdjustValuesFromManager:(NSObject *)arg0 toGeometry:(NSObject *)arg1;
+ (void)readLimoFromManager:(NSObject *)arg0 toGeometry:(NSObject *)arg1;
+ (void)readTextBodyRectsFromManager:(NSObject *)arg0 toGeometry:(NSObject *)arg1;
+ (NSObject *)readFromManager:(NSObject *)arg0;

@end

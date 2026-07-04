/* Runtime dump - CHXUserShapes
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHXUserShapes : NSObject

+ (void)readFromCharSpaceNode:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (float)readRealCoordinate:(struct _xmlNode *)arg0;
+ (struct CGPoint)readRealPoint:(struct _xmlNode *)arg0;
+ (CHXUserShapes *)readDrawable:(struct _xmlNode *)arg0 anchor:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (CHXUserShapes *)readRelativeSizeAnchor:(struct _xmlNode *)arg0 drawingState:(struct _xmlNode *)arg1;
+ (CHXUserShapes *)readAbsoluteSizeAnchor:(struct _xmlNode *)arg0 drawingState:(struct _xmlNode *)arg1;

@end

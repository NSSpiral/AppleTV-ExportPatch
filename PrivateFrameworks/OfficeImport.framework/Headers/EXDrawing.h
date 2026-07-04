/* Runtime dump - EXDrawing
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EXDrawing : NSObject

+ (void)initialize;
+ (void)readTwoCellAnchorNode:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (void)readOneCellAnchorNode:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (void)readAbsoluteAnchorNode:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (void)readFromPart:(id)arg0 state:(NSObject *)arg1;
+ (struct EDCellAnchorMarker)readAnchorMarkerFromNode:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (void)readDrawableNode:(struct _xmlNode *)arg0 anchor:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;

@end

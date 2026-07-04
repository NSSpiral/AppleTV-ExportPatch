/* Runtime dump - ODIDrawable
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODIDrawable : NSObject

+ (NSString *)presentationWithName:(NSString *)arg0 point:(struct CGPoint)arg1;
+ (ODIDrawable *)styleForPresentation:(id)arg0 point:(struct CGPoint)arg1 state:(NSObject *)arg2;
+ (void)mapShapeProperties:(NSDictionary *)arg0 shape:(NSString *)arg1 state:(NSObject *)arg2;
+ (void)mapShapeProperties:(NSDictionary *)arg0 shapeStyle:(TSDShapeStyle *)arg1 shape:(NSString *)arg2 state:(NSObject *)arg3;
+ (NSString *)styleForLabelName:(NSString *)arg0 styleCount:(int)arg1 styleIndex:(int)arg2 state:(NSObject *)arg3;
+ (void)addArrowHeadToShapeProperties:(NSDictionary *)arg0;
+ (NSObject *)shapeGeometryWithShapeType:(int)arg0 adjustValues:(int *)arg1;
+ (void)mapStyleForLabelName:(NSString *)arg0 shape:(NSString *)arg1 state:(NSObject *)arg2;
+ (ODIDrawable *)shapeGeometryForEllipse;
+ (void)mapStyleAndTextFromPoint:(NSObject *)arg0 shape:(NSString *)arg1 state:(NSObject *)arg2;
+ (NSString *)shapeGeometryForBezierPath:(NSString *)arg0 gSpace:(struct CGRect)arg1;
+ (void)map1dArrowStyleFromPoint:(NSObject *)arg0 shape:(NSString *)arg1 state:(NSObject *)arg2;
+ (void)map1dArrowStyleToShape:(id)arg0 state:(NSObject *)arg1;
+ (NSObject *)shapeGeometryForDoubleArrowWithControlPoint:(struct CGPoint)arg0;
+ (struct CGSize)sizeOfDiagram:(id)arg0;
+ (ODIDrawable *)shapeGeometryForRoundedRectangleWithRadius:(float)arg0;
+ (ODIDrawable *)addShapeWithBounds:(struct CGRect)arg0 rotation:(struct CGSize)arg1 geometry:(TSDInfoGeometry *)arg2 state:(float)arg3;
+ (void)mapStyleFromPoint:(NSObject *)arg0 shape:(NSString *)arg1 state:(NSObject *)arg2;
+ (NSObject *)shapeGeometryForRightArrowWithControlPoint:(struct CGPoint)arg0;
+ (void)mapStyleForPresentationName:(NSString *)arg0 point:(struct CGPoint)arg1 shape:(NSString *)arg2 state:(NSObject *)arg3;
+ (ODIDrawable *)shapeGeometryForRectangle;
+ (void)mapStyleForLabelName:(NSString *)arg0 point:(struct CGPoint)arg1 shape:(NSString *)arg2 state:(NSObject *)arg3;

@end

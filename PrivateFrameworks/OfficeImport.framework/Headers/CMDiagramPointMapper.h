/* Runtime dump - CMDiagramPointMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMDiagramPointMapper : CMMapper
{
    ODDPoint * mPoint;
    CMDrawingContext * mDrawingContext;
    OADOrientedBounds * mOrientedBounds;
    NSString * mPresentationName;
}

- (EDFill *)fill;
- (OADStroke *)stroke;
- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1;
- (OADStyleMatrix *)styleMatrix;
- (id)diagram;
- (CMDiagramPointMapper *)initWithPoint:(struct CGPoint)arg0 drawingContext:(NSObject *)arg1 orientedBounds:(OADOrientedBounds *)arg2 parent:(NSObject *)arg3;
- (NSString *)transformPresentationName;
- (NSString *)transformForPresentationWithName:(NSString *)arg0;
- (NSMutableString *)plainText;
- (float)defaultFontSize;
- (void)setPresentationName:(NSString *)arg0;
- (void)applyDiagramStyleToShapeProperties;
- (void)mapTextAt:(id)arg0 withBounds:(struct CGSize)arg1 isCentered:(char)arg2 includeChildren:(char)arg3 withState:(NSObject *)arg4;
- (void)renderShapeAsBackgroundInBounds:(id)arg0;
- (void)mapStyledRectangle:(struct CGRect)arg0 at:(struct CGSize)arg1 withState:(NSObject *)arg2;
- (void)mapChlidrenAt:(id)arg0 withState:(NSObject *)arg1;
- (NSString *)presentationName;
- (NSString *)presentationWithName:(NSString *)arg0;
- (TSDShapeStyle *)shapeStyle;
- (id)baseTextListStyleWithBounds:(id)arg0 isCentered:(char)arg1;
- (void)mapPointTextAt:(id)arg0 style:(NSObject *)arg1 level:(int)arg2 withState:(NSObject *)arg3;
- (void)mapChildrenTextAt:(id)arg0 style:(NSObject *)arg1 level:(int)arg2 withState:(NSObject *)arg3;
- (void)mapSiblingTextAt:(id)arg0 style:(NSObject *)arg1 level:(int)arg2 withState:(NSObject *)arg3;

@end

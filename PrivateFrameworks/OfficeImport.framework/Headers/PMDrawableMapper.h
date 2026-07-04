/* Runtime dump - PMDrawableMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PMDrawableMapper : CMDrawableMapper
{
    OADShape * mShape;
    CMDrawingContext * mDrawingContext;
    char mTopLevelMapper;
}

- (void)dealloc;
- (NSString *)drawingContext;
- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1;
- (void)mapOfficeArtShapeAt:(id)arg0 withState:(NSObject *)arg1;
- (void)mapOfficeArtImageAt:(id)arg0 withState:(NSObject *)arg1;
- (void)mapOfficeArtGroupAt:(id)arg0 withState:(NSObject *)arg1;
- (void)mapDiagramAt:(id)arg0 withState:(NSObject *)arg1;
- (void)mapBounds;
- (struct CGRect)transformRectToPage:(id)arg0;
- (void)mapChartAt:(id)arg0 withState:(NSObject *)arg1;
- (struct CGRect)slideRect;
- (void)setTopLevelMapper:(char)arg0;
- (void)setDrawingContext:(NSObject *)arg0;
- (char)isTopLevelMapper;
- (void)mapRectangularShapeAt:(id)arg0 withState:(NSObject *)arg1;
- (void)mapShapeAsBackgroundAt:(id)arg0 withState:(NSObject *)arg1;
- (struct CGRect)shapeTextBoxWithState:(NSObject *)arg0;
- (void)mapFreeForm:(id)arg0 orientedBounds:(OADOrientedBounds *)arg1 transformedBounds:(struct CGRect *)arg2 state:(struct CGSize)arg3;

@end

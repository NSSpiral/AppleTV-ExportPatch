/* Runtime dump - EMDrawableMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EMDrawableMapper : CMDrawableMapper
{
    double * mRowGrid;
    double * mColumnGrid;
}

+ (char)isAnchorRelative:(id)arg0;

- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1;
- (void)setBoundingBox;
- (void)mapOfficeArtShapeAt:(id)arg0 withState:(NSObject *)arg1;
- (void)mapOfficeArtGroupAt:(id)arg0 withState:(NSObject *)arg1;
- (void)mapDiagramAt:(id)arg0 withState:(NSObject *)arg1;
- (void)mapTextBoxAt:(id)arg0 withState:(NSObject *)arg1;
- (void)mapBounds;
- (EMDrawableMapper *)initWithChartDrawable:(id)arg0 box:(struct CGRect)arg1 parent:(struct CGSize)arg2;
- (NSObject *)worksheetMapper;
- (void)mapChartAt:(id)arg0 withState:(NSObject *)arg1;
- (struct CGRect)getImageRect;
- (struct CGRect)mapAnchorToRect:(NSObject *)arg0 rowGrid:(SEL)arg1 columnGrid:(double *)arg2;
- (struct CGPoint)anchorMarkerToPosition:(struct EDCellAnchorMarker)arg0 rowGrid:(double *)arg1 columnGrid:(double *)arg2 start:(char)arg3 relative:(char)arg4;
- (EMDrawableMapper *)initWithOADDrawable:(OADDrawable *)arg0 parent:(NSObject *)arg1;
- (EMDrawableMapper *)initWithOADDrawable:(OADDrawable *)arg0 rowGrid:(double *)arg1 columnGrid:(double *)arg2;
- (NSObject *)workbookMapper;

@end

/* Runtime dump - CMLineShapeBuilder
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMLineShapeBuilder : CMShapeBuilder
{
    OADStroke * _stroke;
}

- (void)dealloc;
- (void)setStroke:(OADStroke *)arg0;
- (struct CGPath *)copyShapeWithTransform:(struct CGAffineTransform)arg0;
- (void)_renderBentConnector2InPath:(struct CGPath *)arg0 withTransform:(struct CGAffineTransform)arg1 andOrientedBounds:(id)arg2 headSrc:(struct CGPoint *)arg3 headDst:(struct CGPoint *)arg4 tailSrc:(struct CGPoint *)arg5 tailDst:(struct CGPoint *)arg6;
- (void)_renderBentConnector3InPath:(struct CGPath *)arg0 withTransform:(struct CGAffineTransform)arg1 andOrientedBounds:(id)arg2 headSrc:(struct CGPoint *)arg3 headDst:(struct CGPoint *)arg4 tailSrc:(struct CGPoint *)arg5 tailDst:(struct CGPoint *)arg6;
- (void)_renderStraightConnector1InPath:(struct CGPath *)arg0 withTransform:(struct CGAffineTransform)arg1 andOrientedBounds:(id)arg2 headSrc:(struct CGPoint *)arg3 headDst:(struct CGPoint *)arg4 tailSrc:(struct CGPoint *)arg5 tailDst:(struct CGPoint *)arg6;
- (float)_getRotationFromPoint:(struct CGPoint)arg0 toPoint:(struct CGPoint)arg1 withBounds:(struct CGSize)arg2;
- (void)_renderLineEnd:(id)arg0 atPoint:(struct CGPoint)arg1 withOrientation:(float)arg2 inPath:(struct CGPath *)arg3;
- (float)_adjustedCoefAtIndex:(int)arg0;
- (struct CGRect)_boundingBoxForLineEnd:(id)arg0;

@end

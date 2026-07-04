/* Runtime dump - TSDShapeRenderingOperation
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDShapeRenderingOperation : TSDSwatchRenderingOperation
{
    int mShapeType;
    float mAngle;
}

- (struct UIEdgeInsets)swatchEdgeInsets;
- (char)needsPressedStateBackground;
- (void)doWorkWithReadLock;
- (TSDShapeRenderingOperation *)initWithPreset:(NSSet *)arg0 imageSize:(struct CGSize)arg1 imageScale:(float)arg2 swatchFrame:(struct CGRect)arg3 shapeType:(struct CGSize)arg4 angle:(struct CGSize)arg5 documentRoot:(int)arg6;
- (TSDShapeRenderingOperation *)initWithPreset:(NSSet *)arg0 imageSize:(struct CGSize)arg1 imageScale:(float)arg2 swatchFrame:(struct CGRect)arg3 shapeType:(struct CGSize)arg4 documentRoot:(struct CGSize)arg5;

@end

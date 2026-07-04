/* Runtime dump - CMFreeFormShapeBuilder
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMFreeFormShapeBuilder : CMLineShapeBuilder
{
    OADPath * _path;
    struct CGSize _space;
}

- (void)dealloc;
- (struct CGAffineTransform)affineTransform;
- (void)setPath:(OADPath *)arg0;
- (void).cxx_construct;
- (void)setSpace:(struct CGSize)arg0;
- (struct CGPath *)copyShapeWithTransform:(struct CGAffineTransform)arg0;
- (struct CGPoint)_renderPathElement:(NSObject *)arg0 withTransform:(struct CGAffineTransform)arg1 inPath:(struct CGPath *)arg2;

@end

/* Runtime dump - GQDScalarPath
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDScalarPath : GQDPath
{
    int mType;
    double mScalar;
    struct CGSize mSize;
}

- (int)readAttributesFromReader:(struct _xmlTextReader *)arg0 processor:(TSCH3DRenderProcessor *)arg1;
- (struct CGPath *)createBezierPath;
- (char)isRect;
- (struct CGSize)size;
- (int)type;
- (void).cxx_construct;
- (double)scalar;
- (char)isRectangular;

@end

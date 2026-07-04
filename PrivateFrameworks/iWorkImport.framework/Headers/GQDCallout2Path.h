/* Runtime dump - GQDCallout2Path
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDCallout2Path : GQDPath
{
    struct CGSize mSize;
    double mCornerRadius;
    struct CGPoint mTailPosition;
    double mTailSize;
    char mTailAtCenter;
}

- (int)readAttributesFromReader:(struct _xmlTextReader *)arg0 processor:(TSCH3DRenderProcessor *)arg1;
- (struct CGPath *)createBezierPath;
- (struct CGPoint)tailCenter;
- (struct CGPoint)tailPosition;
- (double)tailSize;
- (char)tailAtCenter;
- (struct CGSize)size;
- (double)cornerRadius;
- (void).cxx_construct;

@end

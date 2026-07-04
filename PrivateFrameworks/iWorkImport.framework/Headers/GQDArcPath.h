/* Runtime dump - GQDArcPath
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDArcPath : GQDPath
{
    struct CGSize mSize;
    double mHeadAngle;
    double mArcWidth;
    double mArrowWidth;
    double mArrowLength;
}

- (int)readAttributesFromReader:(struct _xmlTextReader *)arg0 processor:(TSCH3DRenderProcessor *)arg1;
- (struct CGPath *)createBezierPath;
- (double)arcWidth;
- (double)headAngle;
- (double)arrowWidth;
- (double)arrowLength;
- (struct CGSize)size;
- (void).cxx_construct;

@end

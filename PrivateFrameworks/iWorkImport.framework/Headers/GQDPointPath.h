/* Runtime dump - GQDPointPath
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDPointPath : GQDPath
{
    int mType;
    struct CGPoint mPoint;
    struct CGSize mSize;
}

- (int)readAttributesFromReader:(struct _xmlTextReader *)arg0 processor:(TSCH3DRenderProcessor *)arg1;
- (struct CGPath *)createBezierPath;
- (int)mapStrType:(struct __CFString *)arg0;
- (struct CGSize)size;
- (int)type;
- (struct CGPoint)point;
- (void).cxx_construct;

@end

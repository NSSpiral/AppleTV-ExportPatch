/* Runtime dump - GQDConnectionPath
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDConnectionPath : GQDPath
{
    struct CGPoint mPoint;
    struct CGSize mSize;
}

- (struct CGPath *)createBezierPath;
- (struct CGSize)size;
- (struct CGPoint)point;
- (void).cxx_construct;

@end

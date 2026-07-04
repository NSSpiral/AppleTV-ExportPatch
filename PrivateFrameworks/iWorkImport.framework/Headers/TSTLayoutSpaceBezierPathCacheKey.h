/* Runtime dump - TSTLayoutSpaceBezierPathCacheKey
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTLayoutSpaceBezierPathCacheKey : NSObject <NSCopying>
{
    char _reoriginToZero;
    float _inset;
    struct ? _gridRange;
    struct CGAffineTransform _transform;
}

@property (nonatomic) struct ? gridRange;
@property (nonatomic) struct CGAffineTransform transform;
@property (nonatomic) float inset;
@property (nonatomic) char reoriginToZero;

- (char)reoriginToZero;
- (struct ?)gridRange;
- (void)setGridRange:(struct ?)arg0;
- (void)setReoriginToZero:(char)arg0;
- (void)dealloc;
- (void)setInset:(float)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (TSTLayoutSpaceBezierPathCacheKey *)copyWithZone:(struct _NSZone *)arg0;
- (void)setTransform:(struct CGAffineTransform)arg0;
- (struct CGAffineTransform)transform;
- (float)inset;

@end

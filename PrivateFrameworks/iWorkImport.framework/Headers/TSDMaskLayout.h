/* Runtime dump - TSDMaskLayout
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMaskLayout : TSDLayout
{
    struct ? mMaskInvalidFlags;
    struct CGPath * mCachedPath;
    struct CGPath * mCachedPathNoScale;
    struct CGRect mCachedTightPathBounds;
    struct CGRect mCachedTightPathBoundsNoScale;
    float mPathScale;
    TSDInfoGeometry * mDynamicInfoGeometry;
    TSDPathSource * mDynamicPathSource;
    char mScalingInMaskMode;
}

@property (nonatomic) float pathScale;
@property (readonly, nonatomic) TSDImageLayout * imageLayout;

- (NSObject *)computeLayoutGeometry;
- (TSDInfoGeometry *)infoGeometry;
- (NSArray *)dependentLayouts;
- (TSDPathSource *)pathSource;
- (struct CGRect)pathBounds;
- (struct CGPath *)p_cachedPath;
- (TSDMaskInfo *)maskInfo;
- (TSDImageLayout *)imageLayout;
- (void)setPathScale:(float)arg0;
- (void)p_createDynamicCopies;
- (void)p_setDynamicInfoGeometry:(NSObject *)arg0;
- (void)p_destroyDynamicCopies;
- (struct CGRect)p_cachedTightPathBoundsNoScale;
- (struct CGRect)p_cachedTightPathBounds;
- (float)pathScale;
- (void)p_calculateCachedPathIfNecessary;
- (struct CGPath *)p_cachedPathNoScale;
- (void)p_calculateTightPathBoundsIfNecessary;
- (struct CGAffineTransform)affineTransformForTightPathBounds;
- (TSDMaskLayout *)initWithInfo:(NSDictionary *)arg0;
- (void)invalidatePath;
- (void)dealloc;
- (void)invalidate;
- (struct CGPath *)path;

@end

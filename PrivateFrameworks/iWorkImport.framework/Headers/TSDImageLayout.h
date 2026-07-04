/* Runtime dump - TSDImageLayout
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDImageLayout : TSDMediaLayout <TSDShapeControlLayout>
{
    TSDLayoutGeometry * mImageGeometry;
    TSDMaskLayout * mMaskLayout;
    struct CGPath * mPathToStroke;
    struct CGAffineTransform mLayoutToImageTransform;
    struct CGAffineTransform mLayoutToMaskTransform;
    char mMaskIntersectsImage;
    TSUBezierPath * mTracedPath;
    int mHasAlpha;
    TSDLayoutGeometry * mBaseImageLayoutGeometry;
    TSDInfoGeometry * mDynamicInfoGeometry;
    TSDInfoGeometry * mBaseInfoGeometry;
    int mMaskEditMode;
    char mScalingInMaskMode;
    char mInInstantAlphaMode;
    char mIsUpdatingImageAdjustments;
    TSDImageAdjustments * mDynamicImageAdjustments;
}

@property (readonly, nonatomic) TSDPathSource<TSDSmartPathSource> * smartPathSource;

- (NSDictionary *)layoutGeometryFromInfo;
- (void)offsetGeometryBy:(struct CGPoint)arg0;
- (NSObject *)computeLayoutGeometry;
- (struct CGRect)boundsInfluencingExteriorWrap;
- (NSString *)i_computeWrapPath;
- (void)updateChildrenFromInfo;
- (char)supportsRotation;
- (struct CGRect)pathBoundsWithoutStroke;
- (TSDPathSource<TSDSmartPathSource> *)smartPathSource;
- (NSObject *)maskLayout;
- (NSObject *)imageGeometry;
- (struct CGPath *)pathToStroke;
- (NSObject *)imageGeometryInRoot;
- (char)hasMaskingPath;
- (struct CGAffineTransform)layoutToMaskTransform;
- (struct CGAffineTransform)layoutToImageTransform;
- (struct CGAffineTransform)imageDataToVisualSizeTransform;
- (TSDImageAdjustments *)imageAdjustments;
- (NSObject *)currentInfoGeometry;
- (struct CGRect)computeAlignmentFrameInRoot:(NSObject *)arg0;
- (NSObject *)originalImageGeometry;
- (struct CGSize)sizeOfFrameRectIncludingCoverage;
- (char)isDynamicallyChangingImageAdjustments;
- (void)dynamicImageAdjustmentsChangeDidBegin;
- (void)dynamicImageAdjustmentsUpdateToValue:(id)arg0;
- (void)dynamicImageAdjustmentsChangeDidEnd;
- (void)p_createDynamicCopies;
- (void)p_setDynamicInfoGeometry:(NSObject *)arg0;
- (void)p_destroyDynamicCopies;
- (TSDImageLayout *)initWithInfo:(NSDictionary *)arg0;
- (char)hasAlpha;
- (void)dealloc;
- (NSDictionary *)imageInfo;
- (char)isInvisible;

@end

/* Runtime dump - TSDMediaRep
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMediaRep : TSDStyledRep
{
    char mIsZooming;
    CALayer * mTapToReplaceLayer;
    CAShapeLayer * mMaskLayer;
    CAShapeLayer * mStrokeLayer;
    CALayer * mFrameMaskLayer;
    TSDFrameRep * mFrameRep;
    struct CGRect mLastPictureFrameLayerRect;
}

@property (readonly, nonatomic) TSDMediaInfo * mediaInfo;
@property (readonly, nonatomic) TSDMediaLayout * mediaLayout;

- (void)i_updateFrameRep;
- (TSDMediaLayout *)mediaLayout;
- (TSDMediaInfo *)mediaInfo;
- (char)i_shouldRenderStroke:(id)arg0;
- (void)dealloc;
- (char)isPlaceholder;

@end

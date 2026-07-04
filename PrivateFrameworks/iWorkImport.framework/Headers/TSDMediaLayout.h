/* Runtime dump - TSDMediaLayout
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMediaLayout : TSDStyledLayout
{
    struct CGRect mCachedAlignmentFrame;
    struct ? mMediaInvalidFlags;
    TSDMutableStroke * mDynamicStroke;
    char mShouldRenderFrameStroke;
    struct CGRect mBoundsForStandardKnobs;
}

@property (nonatomic) struct CGRect boundsForStandardKnobs;
@property (nonatomic) char shouldRenderFrameStroke;

- (void)processChangedProperty:(int)arg0;
- (struct CGRect)alignmentFrame;
- (struct CGRect)boundsForStandardKnobs;
- (char)isStrokeBeingManipulated;
- (struct CGRect)alignmentFrameInRoot;
- (char)supportsRotation;
- (char)shouldRenderFrameStroke;
- (void)setShouldRenderFrameStroke:(char)arg0;
- (void)setBoundsForStandardKnobs:(struct CGRect)arg0;
- (void)invalidateAlignmentFrame;
- (struct CGRect)computeAlignmentFrameInRoot:(NSObject *)arg0;
- (TSDMediaInfo *)mediaInfo;
- (TSDMediaLayout *)initWithInfo:(NSDictionary *)arg0;
- (OADStroke *)stroke;
- (void)setGeometry:(TSDInfoGeometry *)arg0;

@end

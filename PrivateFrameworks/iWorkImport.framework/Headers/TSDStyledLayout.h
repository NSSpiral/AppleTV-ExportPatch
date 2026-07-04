/* Runtime dump - TSDStyledLayout
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDStyledLayout : TSDDrawableLayout
{
    char mIsUpdatingOpacity;
    float mDynamicOpacity;
}

@property (readonly, nonatomic) float opacity;

- (struct CGRect)frameForCulling;
- (struct CGRect)alignmentFrameInRoot;
- (struct CGRect)aliasedAlignmentFrameForScale:(id)arg0;
- (struct CGRect)i_baseFrame;
- (NSDictionary *)styledInfo;
- (struct CGRect)reflectionBoundsForRect:(NSObject *)arg0;
- (struct CGRect)shadowedNaturalBoundsWithoutOffset;
- (struct CGRect)reflectionFrame;
- (struct CGRect)reflectionFrameInRoot;
- (struct CGRect)reflectionFrameForSubRect:(NSObject *)arg0;
- (float)opacity;
- (char)isInvisible;

@end

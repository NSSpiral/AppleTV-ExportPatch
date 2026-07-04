/* Runtime dump - MREffectPinMap
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MREffectPinMap : MREffect
{
    NSMutableDictionary * mSprites;
    id mLocalMatrix;
    MRImageProvider * mGradientProvider;
    MRImageProvider * mPinProvider;
    MRImageProvider * mYellowPinProvider;
    MRImageProvider * mRedPinProvider;
    MRImageProvider * mTextBoxArrowProvider;
    MRImageProvider * mTextBoxMiddleProvider;
    MRImageProvider * mTextBoxCapProvider;
    MRImageProvider * mTextBoxArrowFlippedProvider;
    MRImageProvider * mTextBoxMiddleFlippedProvider;
    MRImageProvider * mTextBoxCapFlippedProvider;
    MRImageProvider * mTextBox2ArrowProvider;
    MRImageProvider * mTextBox2MiddleProvider;
    MRImageProvider * mTextBox2CapProvider;
    MRImageProvider * mTextBox2ArrowFlippedProvider;
    MRImageProvider * mTextBox2MiddleFlippedProvider;
    MRImageProvider * mTextBox2CapFlippedProvider;
    MRImageProvider * mTitleBoxLeftProvider;
    MRImageProvider * mTitleBoxMiddleProvider;
    MRImageProvider * mTitleBoxRightProvider;
    MRImageProvider * mBoxShadowSmall;
    MRImageProvider * mBoxShadowBigScaled;
    MRImageProvider * mWaterProvider;
    NSMutableArray * mTextImages;
    NSMutableArray * mTextLineCounts;
    NSMutableArray * mTextYOffsets;
    NSArray * mSortedPins;
    char mNeedsWater;
    char mHas2LineLabels;
    char mHas1LineLabels;
    char mNeedsTitle;
}

- (void)_unload;
- (void)_cleanup;
- (void)setAttributes:(NSDictionary *)arg0;
- (MREffectPinMap *)initWithEffectID:(NSString *)arg0;
- (void)setPixelSize:(struct CGSize)arg0;
- (char)isLoadedForTime:(double)arg0;
- (void)_loadForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)prerenderForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (id)patchworkAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (NSObject *)elementHitAtPoint:(struct CGPoint)arg0 withInverseMatrix:(NSSQLRelationship *)arg1 localPoint:(float)arg2;
- (char)getVerticesCoordinates:(id *)arg0 withMatrix:(struct CGPoint)arg1 forElement:(NSObject *)arg2;
- (struct CGSize)_maxSizeForTextElement:(NSObject *)arg0;
- (int)_maxLinesForTextElement:(NSObject *)arg0;
- (void)_drawArrowInContext:(NSObject *)arg0 atTime:(double)arg1 withArguments:(NSDictionary *)arg2 atPoint:(struct CGPoint)arg3 scale:(float)arg4 withTextAtIndex:(int)arg5 t:(struct CGPoint)arg6 pointDown:(char)arg7 m:(id)arg8;
- (void)_drawTitleInContext:(NSObject *)arg0 atTime:(double)arg1 withArguments:(NSDictionary *)arg2 atPoint:(struct CGPoint)arg3 scale:(float)arg4 withTextAtIndex:(int)arg5;

@end

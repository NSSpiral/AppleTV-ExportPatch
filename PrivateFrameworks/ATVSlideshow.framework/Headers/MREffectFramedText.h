/* Runtime dump - MREffectFramedText
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MREffectFramedText : MREffect
{
    MRTextRenderer * mTextRenderer;
    MRCroppingSprite * mSprite;
    MRCroppingSprite * mTextSprite;
    MRImage * mTextImage;
    float * mVertices;
    float * mFrameTextureCoordinates;
    struct CGRect mTextRect;
    struct CGRect mInnerFrameRect;
    float mHalfWidth;
    float mYPosition;
    float mScrollY;
    float mNewScrollY;
    double mFrameTime;
    double mHitOffFrameTime;
    float mVelocity;
    char mWasUpdatedSinceLastRendering;
    char mLiveAttributesWereUpdatedSinceLastRendering;
    char mHasTextRect;
    char mStretchesHorizontally;
    char mIsHit;
    char mNewIsHit;
}

+ (void)initialize;

- (void)_unload;
- (MREffectFramedText *)init;
- (char)isOpaque;
- (void)_cleanup;
- (void)setAttributes:(NSDictionary *)arg0;
- (char)isLoadedForTime:(double)arg0;
- (void)_loadForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)prerenderForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)isNative3D;
- (void)beginMorphingToAspectRatio:(float)arg0 withDuration:(double)arg1;
- (NSObject *)elementHitAtPoint:(struct CGPoint)arg0 withInverseMatrix:(NSSQLRelationship *)arg1 localPoint:(float)arg2;
- (char)getVerticesCoordinates:(id *)arg0 withMatrix:(struct CGPoint)arg1 forElement:(NSObject *)arg2;
- (struct CGSize)_maxSizeForTextElement:(NSObject *)arg0;
- (int)_maxLinesForTextElement:(NSObject *)arg0;
- (double)pzrStart:(id)arg0;
- (double)pzrUpdate:(NSDate *)arg0;
- (double)pzrEnd:(id)arg0;
- (double)pzrCancel:(id)arg0;

@end

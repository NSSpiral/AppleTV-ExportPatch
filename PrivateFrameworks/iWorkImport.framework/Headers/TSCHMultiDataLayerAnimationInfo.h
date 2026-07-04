/* Runtime dump - TSCHMultiDataLayerAnimationInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHMultiDataLayerAnimationInfo : NSObject <NSCopying>
{
    char mShouldAnimate;
    char mAboveIntercept;
    char mCrossesIntercept;
    NSArray * mKeyTimes;
    struct CGRect mInterceptRect;
    char mHorizontalChart;
    float mDuration;
    struct CGRect mChartBodyFrameInRepElementSpace;
    NSMutableArray * mLayerAnimationValues;
    CAMediaTimingFunction * mTimingFunction;
    char mElementUndefined;
    char mAtIntercept;
    char mCurrentAtIntercept;
    char mCurrentAboveIntercept;
}

@property (nonatomic) char shouldAnimate;
@property (nonatomic) char aboveIntercept;
@property (nonatomic) char crossesIntercept;
@property (copy, nonatomic) NSArray * keyTimes;
@property (nonatomic) struct CGRect interceptRect;
@property (nonatomic) char horizontalChart;
@property (nonatomic) float duration;
@property (nonatomic) struct CGRect chartBodyFrameInRepElementSpace;
@property (readonly, nonatomic) NSArray * layerAnimationValues;
@property (retain, nonatomic) CAMediaTimingFunction * timingFunction;
@property (nonatomic) char elementUndefined;
@property (nonatomic) char atIntercept;
@property (nonatomic) char currentAtIntercept;
@property (nonatomic) char currentAboveIntercept;

+ (KNAnimationInfo *)animationInfo;

- (void)addAnimationForLayer:(id)arg0 key:(NSString *)arg1 values:(NSArray *)arg2 keyTimes:(NSArray *)arg3 needPresentationLayerValues:(char)arg4;
- (void)addAnimationForLayer:(id)arg0 key:(NSString *)arg1 values:(NSArray *)arg2 keyTimes:(NSArray *)arg3;
- (void)addImageContentsAnimationForLayer:(id)arg0 fromImage:(UIImage *)arg1 toImage:(UIImage *)arg2 keyTimes:(NSArray *)arg3;
- (void)setShouldAnimate:(char)arg0;
- (char)aboveIntercept;
- (void)setAboveIntercept:(char)arg0;
- (char)crossesIntercept;
- (void)setCrossesIntercept:(char)arg0;
- (struct CGRect)interceptRect;
- (void)setInterceptRect:(struct CGRect)arg0;
- (char)horizontalChart;
- (void)setHorizontalChart:(char)arg0;
- (struct CGRect)chartBodyFrameInRepElementSpace;
- (void)setChartBodyFrameInRepElementSpace:(struct CGRect)arg0;
- (NSArray *)layerAnimationValues;
- (char)elementUndefined;
- (void)setElementUndefined:(char)arg0;
- (char)currentAtIntercept;
- (void)setCurrentAtIntercept:(char)arg0;
- (char)atIntercept;
- (void)setAtIntercept:(char)arg0;
- (char)currentAboveIntercept;
- (void)setCurrentAboveIntercept:(char)arg0;
- (void)dealloc;
- (TSCHMultiDataLayerAnimationInfo *)init;
- (float)duration;
- (void)setDuration:(float)arg0;
- (TSCHMultiDataLayerAnimationInfo *)copyWithZone:(struct _NSZone *)arg0;
- (void)setTimingFunction:(CAMediaTimingFunction *)arg0;
- (void)setKeyTimes:(NSArray *)arg0;
- (CAMediaTimingFunction *)timingFunction;
- (NSArray *)keyTimes;
- (void).cxx_construct;
- (char)shouldAnimate;

@end

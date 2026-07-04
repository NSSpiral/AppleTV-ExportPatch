/* Runtime dump - AVScrubber
 * Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVScrubber : UISlider
{
    NSArray * _loadedTimeRanges;
    AVLoadedTimeRangesView * _loadedTimeRangesMaxTrackView;
    UIImageView * _thumbView;
    float _touchLocationOffsetFromThumbViewCenter;
    float _beginTouchLocationInViewY;
    int _scrubbingSpeed;
}

@property (retain, nonatomic) NSArray * loadedTimeRanges;
@property (readonly, nonatomic) char preciseScrubbingFeasible;
@property (readonly, nonatomic) NSString * localizedScrubbingSpeedName;
@property (nonatomic) int scrubbingSpeed;

+ (AVScrubber *)keyPathsForValuesAffectingPreciseScrubbingFeasible;
+ (NSString *)keyPathsForValuesAffectingLocalizedScrubbingSpeedName;

- (NSString *)localizedScrubbingSpeedName;
- (char)isPreciseScrubbingFeasible;
- (int)scrubbingSpeed;
- (void)setScrubbingSpeed:(int)arg0;
- (AVScrubber *)initWithFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (char)beginTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (char)continueTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (void)endTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (NSObject *)createThumbView;
- (void)_layoutSubviewsForBoundsChange:(char)arg0;
- (void)_initSubviews;
- (void).cxx_destruct;
- (void)setLoadedTimeRanges:(NSArray *)arg0;
- (NSArray *)loadedTimeRanges;

@end

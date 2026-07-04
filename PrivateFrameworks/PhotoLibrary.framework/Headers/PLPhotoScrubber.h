/* Runtime dump - PLPhotoScrubber
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPhotoScrubber : UIControl
{
    <PLPhotoScrubberDataSource> * _dataSource;
    unsigned int _displayedImageIndex;
    int _prospectiveImageIndex;
    double _timeOfLastTouch;
    double _lastUpdate;
    UIView * _thumbnailTrackView;
    struct CGRect _thumbnailBounds;
    float _imagesPerViewRatio;
    NSMutableArray * _thumbnailViews;
    UIImageView * _loupeView;
    int _loupeIndex;
    unsigned int _imageCount;
    char _scrubbing;
    char _deferImageLoading;
    char _loadImagesSynchronously;
    <PLPhotoScrubberSpeedDelegate> * _speedDelegate;
    float __scrubbingSpeed;
    int __lastSpeedRegime;
    NSTimer * __timeoutTimer;
    double __lastTime;
}

@property (nonatomic) <PLPhotoScrubberDataSource> * dataSource;
@property (nonatomic) <PLPhotoScrubberSpeedDelegate> * speedDelegate;
@property (nonatomic) float _scrubbingSpeed;
@property (nonatomic) int _lastSpeedRegime;
@property (nonatomic) double _lastTime;
@property (retain, nonatomic) NSTimer * _timeoutTimer;

- (void)_rescheduleTimer;
- (char)isScrubbing;
- (void)dealloc;
- (void)setDataSource:(<PLPhotoScrubberDataSource> *)arg0;
- (void)reloadData;
- (PLPhotoScrubber *)init;
- (void)setFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect)arg0;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (char)beginTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (char)continueTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (void)endTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (void)willRotate;
- (void)didRotate;
- (void)setDataSource:(<PLPhotoScrubberDataSource> *)arg0 reloadData:(char)arg1;
- (void)setSpeedDelegate:(<PLPhotoScrubberSpeedDelegate> *)arg0;
- (void)setDeferImageLoading:(char)arg0;
- (void)reloadDataWithNewDisplayedIndex:(unsigned int)arg0;
- (void)reloadImageAtIndex:(int)arg0;
- (int)displayedImageIndex;
- (void)setImage:(UIImage *)arg0 atIndex:(int)arg1;
- (void)setLoupeImage:(UIImage *)arg0;
- (char)isFastScrubbing;
- (void)setDisplayedImageIndex:(int)arg0;
- (void)_setScrubbingSpeed:(float)arg0;
- (void)_setLastSpeedRegime:(int)arg0;
- (void)_updateLoupe:(char)arg0 force:(char)arg1;
- (unsigned int)_imageIndexFromLocation:(struct CGPoint)arg0;
- (void)_setDisplayedImageIndex:(int)arg0 immediately:(char)arg1;
- (int)_lastSpeedRegime;
- (void)_setIsScrubbing:(char)arg0;
- (void)_setLastTime:(double)arg0;
- (unsigned int)_thumbnailIndexFromLocation:(struct CGPoint)arg0;
- (void)_setDisplayedImageIndex:(NSObject *)arg0;
- (void)_updateLoupeWithTouch:(UITouch *)arg0 forceUpdate:(char)arg1;
- (struct CGPoint)_centerForImageAtIndex:(int)arg0;
- (double)_lastTime;
- (float)_scrubbingSpeed;
- (void)_setSpeedRegime:(int)arg0;
- (NSTimer *)_timeoutTimer;
- (void)_handleTimeoutTimer:(NSObject *)arg0;
- (void)_setTimeoutTimer:(NSObject *)arg0;
- (void)_performSpeedUpdate;
- (void)ppt_setIsScrubbing:(char)arg0;
- (void)ppt_scrubToAbsoluteIndex:(int)arg0 immediately:(char)arg1;
- (<PLPhotoScrubberSpeedDelegate> *)speedDelegate;

@end

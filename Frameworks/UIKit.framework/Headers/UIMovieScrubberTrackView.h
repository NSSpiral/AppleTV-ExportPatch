/* Runtime dump - UIMovieScrubberTrackView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMovieScrubberTrackView : UIView
{
    <UIMovieScrubberTrackViewDataSource> * _dataSource;
    <UIMovieScrubberTrackViewDelegate> * _delegate;
    NSArray * _summaryThumbnailViews;
    NSArray * _summaryThumbnailTimestamps;
    NSArray * _summaryThumbnailChildTimestamps;
    NSDictionary * _thumbnailStartXValues;
    NSDictionary * _childThumbnailViews;
    NSMutableDictionary * _thumbnailViews;
    NSArray * _timestamps;
    UIMovieScrubberTrackOverlayView * _overlayView;
    UIView * _maskContainerView;
    struct CGSize _thumbnailSize;
    float _zoomOriginXDelta;
    float _zoomWidthDelta;
    float _unclampedZoomWidthDelta;
    float _zoomAnimationDuration;
    double _duration;
    double _value;
    double _startValue;
    double _endValue;
    struct ? _trackFlags;
}

@property (nonatomic) <UIMovieScrubberTrackViewDataSource> * dataSource;
@property (nonatomic) <UIMovieScrubberTrackViewDelegate> * delegate;

- (UIMovieScrubberTrackView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setDataSource:(<UIMovieScrubberTrackViewDataSource> *)arg0;
- (void)setDelegate:(<UIMovieScrubberTrackViewDelegate> *)arg0;
- (void)reloadData;
- (void)layoutSubviews;
- (<UIMovieScrubberTrackViewDataSource> *)dataSource;
- (<UIMovieScrubberTrackViewDelegate> *)delegate;
- (void)setValue:(double)arg0;
- (void)setEditing:(char)arg0;
- (void)animateFillFramesAway;
- (void)setStartValue:(double)arg0;
- (void)setEndValue:(double)arg0;
- (void)clear;
- (NSDate *)_createImageViewForTimestamp:(NSDate *)arg0 isSummaryThumbnail:(char)arg1;
- (void)_reallyReloadData;
- (void)_zoomAnimation:(NSObject *)arg0 didFinish:(char)arg1 context:(NSObject *)arg2;
- (void)_setOverlayViewIsZoomed:(char)arg0 minValue:(float)arg1 maxValue:(float)arg2;
- (void)_unzoomAnimation:(NSObject *)arg0 didFinish:(char)arg1 context:(NSObject *)arg2;
- (void)setThumbnailImage:(struct CGImage *)arg0 forTimestamp:(NSDate *)arg1;
- (void)setZoomAnimationDuration:(double)arg0;
- (double)zoomAnimationDuration;
- (char)zoomAtPoint:(struct CGPoint)arg0;
- (void)unzoom;

@end

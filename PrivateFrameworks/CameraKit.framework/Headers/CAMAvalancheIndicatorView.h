/* Runtime dump - CAMAvalancheIndicatorView
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMAvalancheIndicatorView : UIView
{
    char _showsWhenStarted;
    UIView * __backgroundView;
    UILabel * __countLabel;
    int __numberOfPhotos;
}

@property (nonatomic) char showsWhenStarted;
@property (readonly, nonatomic) UIView * _backgroundView;
@property (readonly, nonatomic) UILabel * _countLabel;
@property (readonly, nonatomic) int _numberOfPhotos;

- (CAMAvalancheIndicatorView *)initWithFrame:(struct CGRect)arg0;
- (CAMAvalancheIndicatorView *)initWithCoder:(NSCoder *)arg0;
- (void)layoutSubviews;
- (UIView *)_backgroundView;
- (void)reset;
- (struct CGSize)intrinsicContentSize;
- (void).cxx_destruct;
- (int)_numberOfPhotos;
- (void)_updateCountLabelWithNumberOfPhotos;
- (void)_commonCAMAvalancheIndicatorViewInitialization;
- (void)_performCaptureAnimation;
- (char)showsWhenStarted;
- (void)finishIncrementingWithCompletionHandler:(id /* block */)arg0;
- (void)incrementWithCaptureAnimation:(char)arg0;
- (void)setShowsWhenStarted:(char)arg0;
- (UILabel *)_countLabel;

@end

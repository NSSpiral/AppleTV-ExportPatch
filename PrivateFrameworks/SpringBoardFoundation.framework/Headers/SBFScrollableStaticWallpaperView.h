/* Runtime dump - SBFScrollableStaticWallpaperView
 * Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFScrollableStaticWallpaperView : SBFStaticWallpaperView <UIScrollViewDelegate>
{
    UIImageView * _imageView;
    UIImageView * _gradientView;
    UIScrollView * _scrollView;
    SBFLockScreenWallpaperParallaxSettings * _parallaxSettings;
    SBFSubject * _scrollViewObserver;
    <SBFCancelable> * _colorBoxCancelToken;
    <SBFCancelable> * _parallaxCancelToken;
    float _minimumZoomScaleForParallax;
    float _minimumZoomScale;
    char _parallaxCanBeEnabledAutomatically;
    UIColor * _averageColor;
}

@property (readonly) UIColor * averageColor;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)_shouldScaleForParallax;

- (void)dealloc;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(UIScrollView *)arg0 willDecelerate:(char)arg1;
- (void)scrollViewDidEndDecelerating:(UIScrollView *)arg0;
- (NSObject *)viewForZoomingInScrollView:(NSObject *)arg0;
- (void)scrollViewDidEndZooming:(UIScrollView *)arg0 withView:(UIView *)arg1 atScale:(float)arg2;
- (struct CGSize)_imageSize;
- (struct CGRect)cropRect;
- (float)parallaxFactor;
- (char)supportsCropping;
- (struct CGRect)_cropRect;
- (void)legibilitySettingsDidChange;
- (void)setCropRect:(struct CGRect)arg0 zoomScale:(struct CGSize)arg1;
- (float)cropZoomScale;
- (void)setParallaxEnabled:(char)arg0;
- (SBFScrollableStaticWallpaperView *)initWithFrame:(struct CGRect)arg0 wallpaperImage:(struct CGSize)arg1 variant:(struct CGSize)arg2;
- (struct CGPoint)_boundedContentOffsetForOverhang;
- (float)_parallaxFactorWithZoomScale:(float)arg0 contentOffset:(struct CGPoint)arg1;
- (float)_scrollViewParallaxFactor;
- (struct CGPoint)_minimumContentOffsetForOverhang;
- (struct CGPoint)_maximumContentOffsetForOverhang;
- (void)_setupScrollView;
- (void)_setupScrollViewObserver;
- (void)_setupColorBoxObserver;
- (void)_setupParallaxObserver;
- (float)_throttleDuration;
- (void)_updateParallaxForScroll;
- (void)_updateScrollViewZoomScales;
- (void)_setupSampleImage:(UIImage *)arg0 treated:(char)arg1;
- (void)_setupContentView;
- (void)_cacheImagesIfNeededTreated:(char)arg0;
- (id)_wallpaperImageForAnalysis;
- (UIColor *)averageColor;

@end

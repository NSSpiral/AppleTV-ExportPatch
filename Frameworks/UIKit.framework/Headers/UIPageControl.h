/* Runtime dump - UIPageControl
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPageControl : UIControl
{
    NSMutableArray * _indicators;
    int _currentPage;
    int _displayedPage;
    struct ? _pageControlFlags;
    UIImage * _currentPageImage;
    UIImage * _pageImage;
    int _lastUserInterfaceIdiom;
    UIColor * _currentPageIndicatorTintColor;
    UIColor * _pageIndicatorTintColor;
    _UILegibilitySettings * _legibilitySettings;
}

@property (nonatomic) int numberOfPages;
@property (nonatomic) int currentPage;
@property (nonatomic) char hidesForSinglePage;
@property (nonatomic) char defersCurrentPageDisplay;
@property (retain, nonatomic) UIColor * pageIndicatorTintColor;
@property (retain, nonatomic) UIColor * currentPageIndicatorTintColor;
@property (nonatomic) int legibilityStyle;
@property (nonatomic) _UILegibilitySettings * legibilitySettings;

- (UIPageControl *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (UIPageControl *)initWithCoder:(NSCoder *)arg0;
- (void)_populateArchivedSubviews:(NSMutableArray *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)layoutSubviews;
- (char)_contentHuggingDefault_isUsuallyFixedHeight;
- (char)_contentHuggingDefault_isUsuallyFixedWidth;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (char)gestureRecognizerShouldBegin:(UIGestureRecognizer *)arg0;
- (struct CGSize)intrinsicContentSize;
- (void)_didChangeFromIdiom:(int)arg0 onScreen:(NSObject *)arg1 traverseHierarchy:(char)arg2;
- (void)endTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (void)_commonPageControlInit;
- (void)setNumberOfPages:(int)arg0;
- (void)setCurrentPage:(int)arg0;
- (void)setCurrentPageIndicatorTintColor:(UIColor *)arg0;
- (void)setPageIndicatorTintColor:(UIColor *)arg0;
- (int)numberOfPages;
- (void)_invalidateIndicators;
- (UIImage *)_activePageIndicatorImage;
- (id)_pageIndicatorImageForPage:(int)arg0;
- (id)_pageIndicatorCurrentImageForPage:(int)arg0;
- (id)_customPageIndicatorCurrentImageForPage:(int)arg0;
- (id)_customPageIndicatorImageForPage:(int)arg0;
- (UIImage *)_pageIndicatorImage;
- (id)_indicatorViewEnabled:(char)arg0 index:(int)arg1;
- (void)_setCurrentPage:(int)arg0;
- (void)_setDisplayedPage:(int)arg0;
- (void)_updateCurrentPageDisplay;
- (float)_indicatorSpacing;
- (struct CGRect)_indicatorFrameAtIndex:(NSObject *)arg0;
- (struct CGRect)_modernBounds;
- (char)_hasCustomImageForPage:(int)arg0 enabled:(char)arg1;
- (void)_transitionIndicator:(id)arg0 toEnabled:(char)arg1 index:(int)arg2;
- (id)_correctIdiomaticNameForImageNamed:(id)arg0;
- (void)_modernTransitionIndicator:(id)arg0 toEnabled:(char)arg1 index:(int)arg2 legible:(char)arg3;
- (char)_shouldDrawLegibly;
- (void)_transitionIndicator:(id)arg0 toEnabled:(char)arg1 index:(int)arg2 legible:(char)arg3;
- (id)_indicatorViewEnabled:(char)arg0 index:(int)arg1 legible:(char)arg2;
- (void)_drawModernIndicatorInView:(NSObject *)arg0 enabled:(char)arg1;
- (id)_modernIndicatorImageEnabled:(char)arg0;
- (void)_setLegibilitySettings:(NSDictionary *)arg0;
- (id)_modernColorEnabled:(char)arg0;
- (float)_modernCornerRadius;
- (NSObject *)_createModernIndicatorImageFromView:(NSObject *)arg0;
- (int)currentPage;
- (void)setHidesForSinglePage:(char)arg0;
- (char)hidesForSinglePage;
- (void)setDefersCurrentPageDisplay:(char)arg0;
- (char)defersCurrentPageDisplay;
- (void)updateCurrentPageDisplay;
- (struct CGSize)sizeForNumberOfPages:(int)arg0;
- (int)_displayedPage;
- (void)_setLegibilityStyle:(int)arg0;
- (int)_legibilityStyle;
- (UIColor *)currentPageIndicatorTintColor;
- (UIColor *)pageIndicatorTintColor;
- (NSDictionary *)_legibilitySettings;
- (char)isElementAccessibilityExposedToInterfaceBuilder;

@end

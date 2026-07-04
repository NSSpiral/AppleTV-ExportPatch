/* Runtime dump - UIMultiColumnsNavigationTransitionView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMultiColumnsNavigationTransitionView : UIView <NSCoding>
{
    id _delegate;
    int _transition;
    UIView * _firstResponderViewToRestore;
    id _isTransitioning;
    float _columnWidth;
    int _columnCount;
    NSArray * _fromViews;
    NSArray * _toViews;
    NSArray * _viewsToRemove;
    NSArray * _viewsToAdd;
    NSArray * _displayedViews;
    struct __CFDictionary * _dividerViews;
    struct __CFDictionary * _containerViews;
    UIColor * _dividersColor;
    float _dividersWidth;
}

@property (nonatomic) id delegate;
@property (nonatomic) float columnWidth;
@property (nonatomic) int columnCount;

+ (double)defaultDurationForTransition:(int)arg0;

- (UIMultiColumnsNavigationTransitionView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (UIMultiColumnsNavigationTransitionView *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setDelegate:(NSObject *)arg0;
- (NSObject *)delegate;
- (char)isTransitioning;
- (char)_isTransitioningFromView:(NSObject *)arg0;
- (void)_navigationTransitionDidStop;
- (char)transition:(int)arg0 fromViews:(NSArray *)arg1 toViews:(NSArray *)arg2;
- (NSObject *)_dividerViewForView:(NSObject *)arg0;
- (void)_removeDividerViewForView:(NSObject *)arg0;
- (char)transition:(int)arg0 toViews:(NSArray *)arg1;
- (NSObject *)_containerViewForView:(NSObject *)arg0;
- (void)_removeContainerViewForView:(NSObject *)arg0;
- (float)columnWidth;
- (void)setColumnWidth:(float)arg0;
- (int)columnCount;
- (void)setColumnCount:(int)arg0;

@end

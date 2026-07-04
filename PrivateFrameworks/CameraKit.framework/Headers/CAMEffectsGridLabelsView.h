/* Runtime dump - CAMEffectsGridLabelsView
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMEffectsGridLabelsView : UIView <_UIBackdropViewObserver>
{
    char _disableLayoutForLabels;
    CAMEffectsGridView * _gridView;
    int _orientation;
    NSArray * _filterLabelViews;
    NSArray * _filterIndices;
    _UIBackdropView * __backdropView;
    _UILegibilitySettingsProvider * __legibilitySettingsProvider;
}

@property (retain, nonatomic) CAMEffectsGridView * gridView;
@property (nonatomic) char disableLayoutForLabels;
@property (nonatomic) int orientation;
@property (retain, nonatomic) NSArray * filterLabelViews;
@property (retain, nonatomic) NSArray * filterIndices;
@property (retain, nonatomic) _UIBackdropView * _backdropView;
@property (retain, nonatomic) _UILegibilitySettingsProvider * _legibilitySettingsProvider;

- (CAMEffectsGridLabelsView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setOrientation:(int)arg0 animated:(char)arg1;
- (int)orientation;
- (void)setOrientation:(int)arg0;
- (void).cxx_destruct;
- (void)backdropViewDidChange:(_UIBackdropView *)arg0;
- (void)updateFilterLabels;
- (NSArray *)filterLabelViews;
- (NSArray *)filterIndices;
- (struct CGRect)frameForLabelView:(NSObject *)arg0 withinGridFrame:(SEL)arg1;
- (void)updateToContentSize:(NSObject *)arg0;
- (void)_replaceLabelViews:(char)arg0;
- (void)_rebuildLabelViews;
- (CAMEffectsGridView *)gridView;
- (void)_setFilterIndices:(id)arg0;
- (void)_setFilterLabelViews:(id)arg0;
- (struct CGAffineTransform)_transformForOrientation:(int)arg0;
- (char)isDisabledLayoutForLabels;
- (void)setGridView:(CAMEffectsGridView *)arg0;
- (void)setDisableLayoutForLabels:(char)arg0;
- (_UIBackdropView *)_backdropView;
- (void)set_backdropView:(_UIBackdropView *)arg0;
- (_UILegibilitySettingsProvider *)_legibilitySettingsProvider;
- (void)set_legibilitySettingsProvider:(_UILegibilitySettingsProvider *)arg0;

@end

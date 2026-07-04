/* Runtime dump - UISegment
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISegment : UIImageView
{
    UIView * _info;
    _UISegmentedControlAppearanceStorage * _appearanceStorage;
    float _width;
    struct CGSize _contentOffset;
    int _barStyle;
    unsigned int _rightSegmentState;
    NSString * _badgeValue;
    _UIBadgeView * _badgeView;
    id _objectValue;
    struct ? _segmentFlags;
    NSArray * _infoConstraints;
    float _requestedScaleFactor;
}

@property (copy, nonatomic) NSArray * _infoConstraints;
@property char selected;
@property char momentary;
@property int controlSize;
@property (copy, nonatomic) NSString * badgeValue;
@property (readonly) UIView * badgeView;
@property (nonatomic) float requestedScaleFactor;

+ (UISegment *)_backgroundImageWithStorage:(id)arg0 style:(int)arg1 mini:(char)arg2 state:(unsigned int)arg3 position:(unsigned int)arg4 drawMode:(int *)arg5 defaultBlock:(id /* block */)arg6;

- (void)dealloc;
- (UISegment *)initWithCoder:(NSCoder *)arg0;
- (void)_populateArchivedSubviews:(NSMutableArray *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSObject *)hitTest:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (void)setFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect)arg0;
- (struct CGSize)contentSize;
- (void)setEnabled:(char)arg0;
- (void)setContentOffset:(struct CGSize)arg0;
- (void)setPosition:(unsigned int)arg0;
- (char)useBlockyMagnificationInClassic;
- (NSString *)_tintColorArchivingKey;
- (void)setTintColor:(UIColor *)arg0;
- (void)tintColorDidChange;
- (NSObject *)hitTest:(struct CGPoint)arg0 forEvent:(struct __GSEvent *)arg1;
- (void)setHighlighted:(char)arg0;
- (void)setControlSize:(int)arg0;
- (void)setBarStyle:(int)arg0;
- (char)isHighlighted;
- (int)controlSize;
- (char)isSelected;
- (void)setSelected:(char)arg0;
- (NSString *)label;
- (void)updateConstraints;
- (void)setBadgeValue:(NSString *)arg0;
- (NSString *)badgeValue;
- (void)insertDividerView;
- (void)_updateTextColors;
- (void)setObjectValue:(<NSObject> *)arg0;
- (void)_commonSegmentInit;
- (<NSObject> *)objectValue;
- (char)_isInMiniBar;
- (unsigned int)_segmentState;
- (char)_shouldUsePadMomentaryAppearance;
- (void)setNeedsBackgroundAndContentViewUpdate;
- (id)_dividerImageIsCustom:(char *)arg0;
- (UIImage *)_dividerImage;
- (void)_updateBackgroundAndContentViews;
- (void)updateDividerViewForChangedSegment:(id)arg0;
- (void)_positionInfo;
- (char)isMomentary;
- (char)_hasSelectedColor;
- (void)updateMasking;
- (NSObject *)_attributedTextForState:(unsigned int)arg0 selected:(char)arg1;
- (UIColor *)disabledTextColor;
- (UIColor *)_currentOptionsStyleTextColor;
- (UIColor *)_currentOptionsStyleTextShadowColor;
- (void)_setEnabledAppearance:(char)arg0;
- (void)_invalidateInfoConstraints;
- (struct UIEdgeInsets)_paddingInsets;
- (struct CGRect)_contentRectForBounds:(id)arg0;
- (struct CGSize)_maximumTextSize;
- (float)_barHeight;
- (void)_setInfoConstraints:(NSArray *)arg0;
- (struct CGRect)contentRect;
- (void)_updateBackgroundAndContentViewsIfNeeded;
- (UISegment *)initWithInfo:(UIView *)arg0 style:(int)arg1 size:(int)arg2 barStyle:(int)arg3 tintColor:(UIColor *)arg4 appearanceStorage:(_UISegmentedControlAppearanceStorage *)arg5 position:(unsigned int)arg6 autosizeText:(char)arg7;
- (void)updateForAppearance:(NSObject *)arg0 style:(int)arg1;
- (void)setWasSelected:(char)arg0;
- (void)setAutosizeText:(char)arg0;
- (UIView *)badgeView;
- (void)setMomentary:(char)arg0;
- (char)showDivider;
- (void)setShowDivider:(char)arg0;
- (void)animateAdd:(char)arg0;
- (void)animateRemoveForWidth:(float)arg0;
- (void)_positionInfoWithoutAnimation;
- (void)setRequestedScaleFactor:(float)arg0;
- (void)_forceInfoDisplay;
- (NSString *)infoName;
- (float)_idealWidth;
- (NSObject *)viewForBaselineLayout;
- (NSArray *)_infoConstraints;
- (float)requestedScaleFactor;

@end

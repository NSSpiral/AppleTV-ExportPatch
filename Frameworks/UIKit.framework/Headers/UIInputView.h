/* Runtime dump - UIInputView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputView : UIView <UISplittableInputView>
{
    int _style;
    UIKBRenderConfig * _renderConfig;
    char _suppressBackgroundStyling;
    char _disableSplitSupport;
    _UIInputViewContent * _leftContentView;
    _UIInputViewContent * _rightContentView;
    float _contentRatio;
    struct CGSize _leftContentSize;
    struct CGSize _rightContentSize;
    struct CGSize _defaultSize;
    float _gapWidth;
    float _leftOffset;
    char _isTransitioning;
    float _transitionGap;
    float _transitionLeftOffset;
    float _transitionRatio;
    UIImage * _mergedImage;
    UIImage * _splitImage;
    NSMutableDictionary * _mergedSliceMap;
    NSMutableDictionary * _splitSliceMap;
    NSArray * _visibleLayers;
    CALayer * _transitionLayer;
}

@property (readonly, nonatomic) int inputViewStyle;
@property (readonly, nonatomic) UIView * leftContentView;
@property (readonly, nonatomic) UIView * rightContentView;
@property (nonatomic) float contentRatio;
@property (nonatomic) struct CGSize leftContentViewSize;
@property (nonatomic) struct CGSize rightContentViewSize;
@property (retain, nonatomic) UIImage * _mergedImage;
@property (retain, nonatomic) UIImage * _splitImage;
@property (retain, nonatomic) NSMutableDictionary * _mergedSliceMap;
@property (retain, nonatomic) NSMutableDictionary * _splitSliceMap;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)_setupAppearanceIfNecessary;

- (UIInputView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (char)pointInside:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (void)setFrame:(struct CGRect)arg0;
- (void)setBounds:(struct CGRect)arg0;
- (char)_isTransitioning;
- (UIColor *)tintColor;
- (void)_setRenderConfig:(NSObject *)arg0;
- (int)_clipCornersOfView:(NSObject *)arg0;
- (void)_beginSplitTransitionIfNeeded:(float)arg0 gapWidth:(float)arg1;
- (void)_endSplitTransitionIfNeeded:(char)arg0;
- (char)_isSplit;
- (struct CGSize)leftContentViewSize;
- (struct CGSize)rightContentViewSize;
- (char)_supportsSplit;
- (void)layoutMergedSubviews;
- (void)updateMergedSubviewConstraints;
- (void)layoutSplitSubviewsWithLeftContentSize:(struct CGSize)arg0 rightContentSize:(struct CGSize)arg1;
- (void)updateSplitSubviewContraintsWithLeftContentSize:(struct CGSize)arg0 rightContentSize:(struct CGSize)arg1;
- (void)willBeginSplitTransition;
- (void)didEndSplitTransition;
- (void)_setLeftOffset:(float)arg0 gapWidth:(float)arg1;
- (char)_isToolbars;
- (void)_setProgress:(float)arg0 boundedBy:(float)arg1;
- (void)setContentRatio:(float)arg0;
- (UIView *)leftContentView;
- (UIView *)rightContentView;
- (UIInputView *)initWithFrame:(struct CGRect)arg0 inputViewStyle:(struct CGSize)arg1;
- (void)_setDisableSplitSupport:(char)arg0;
- (void)_setNeedsContentSizeUpdate;
- (float)_additionalClipHeight;
- (void)_updateClipCorners;
- (float)contentRatio;
- (struct CGSize)_defaultSize;
- (void)_updateWithSize:(struct CGSize)arg0;
- (id)_splitBorderedBackgroundWithCorners:(unsigned int)arg0;
- (id)_toolbarBorderedBackground;
- (char)_suppressBackgroundStyling;
- (void)_setSuppressBackgroundStyling:(char)arg0;
- (char)_disableSplitSupport;
- (void)setInputViewStyle:(int)arg0;
- (int)inputViewStyle;
- (void)setLeftContentViewSize:(struct CGSize)arg0;
- (void)setRightContentViewSize:(struct CGSize)arg0;
- (UIImage *)_mergedImage;
- (void)set_mergedImage:(UIImage *)arg0;
- (UIImage *)_splitImage;
- (void)set_splitImage:(UIImage *)arg0;
- (NSMutableDictionary *)_mergedSliceMap;
- (void)set_mergedSliceMap:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)_splitSliceMap;
- (void)set_splitSliceMap:(NSMutableDictionary *)arg0;

@end

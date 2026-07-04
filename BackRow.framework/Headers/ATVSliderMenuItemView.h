/* Runtime dump - ATVSliderMenuItemView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRAutoScrollingTextControl, BREvent, BRImageControl, BRWaitSpinnerControl;
@interface ATVSliderMenuItemView : BRControl
{
    NSAttributedString * _attributedText;
    char _dimmed;
    char _showSlider;
    float _sliderValue;
    id _sliderValueChangedBlock;
    BRAutoScrollingTextControl * _textControl;
    BRImageControl * _rightAccessory;
    BRImageControl * _leftAccessory;
    BRImageControl * _leadingImageItem;
    BRImageControl * _leftArrow;
    BRImageControl * _rightArrow;
    BRImageControl * _sliderGutter;
    BRImageControl * _sliderBar;
    BRWaitSpinnerControl * _spinner;
}

@property (retain, nonatomic) NSString * text;
@property (nonatomic) char showSlider;
@property (nonatomic) float sliderValue;
@property (copy, nonatomic) id sliderValueChangedBlock;
@property (nonatomic) char dimmed;
@property (retain, nonatomic) BRAutoScrollingTextControl * textControl;
@property (retain, nonatomic) BRImageControl * rightAccessory;
@property (retain, nonatomic) BRImageControl * leftAccessory;
@property (retain, nonatomic) BRImageControl * leadingImageItem;
@property (retain, nonatomic) BRImageControl * leftArrow;
@property (retain, nonatomic) BRImageControl * rightArrow;
@property (retain, nonatomic) BRImageControl * sliderGutter;
@property (retain, nonatomic) BRImageControl * sliderBar;
@property (retain, nonatomic) BRWaitSpinnerControl * spinner;

- (char)brEventAction:(BREvent *)arg0;
- (void)layoutSubcontrols;
- (BRAutoScrollingTextControl *)textControl;
- (void)setTextControl:(BRAutoScrollingTextControl *)arg0;
- (void)controlWasFocused;
- (void)controlWasUnfocused;
- (void)addAccessoryOfType:(int)arg0;
- (void)setLeftArrow:(BRImageControl *)arg0;
- (void)setRightArrow:(BRImageControl *)arg0;
- (void)setSpinner:(BRWaitSpinnerControl *)arg0;
- (NSArray *)accessibilityTraitsList;
- (void)setRightAccessory:(BRImageControl *)arg0;
- (BRImageControl *)rightAccessory;
- (void)setLeftAccessory:(BRImageControl *)arg0;
- (BRImageControl *)leftAccessory;
- (void)setLeadingImageItem:(BRImageControl *)arg0;
- (BRImageControl *)leadingImageItem;
- (void)setSliderGutter:(BRImageControl *)arg0;
- (BRImageControl *)sliderGutter;
- (void)setSliderBar:(BRImageControl *)arg0;
- (BRImageControl *)sliderBar;
- (char)showSlider;
- (float)sliderValue;
- (void)setSliderValue:(float)arg0;
- (NSString *)_sliderAccessibilityLabel;
- (id /* block */)sliderValueChangedBlock;
- (char)hasAccessoryOfType:(int)arg0;
- (NSObject *)_imageProxyForAccessoryType:(int)arg0;
- (void)setShowSlider:(char)arg0;
- (NSObject *)_destinationForAccessoryType:(int)arg0;
- (NSObject *)_identiferForAccessoryType:(int)arg0;
- (void)setSliderValueChangedBlock:(id /* block */)arg0;
- (BRImageControl *)leftArrow;
- (BRImageControl *)rightArrow;
- (ATVSliderMenuItemView *)initWithFrame:(struct CGRect)arg0;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (NSString *)accessibilityLabel;
- (void)prepareForReuse;
- (char)isAccessibilityElement;
- (void).cxx_destruct;
- (BRWaitSpinnerControl *)spinner;
- (void)setDimmed:(char)arg0;
- (char)dimmed;

@end

/* Runtime dump - PTSSliderRowTableViewCell
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSSliderRowTableViewCell : PTSRowTableViewCell
{
    UISlider * _slider;
}

+ (float)cellHeightForRow:(id)arg0;

- (void)layoutSubviews;
- (PTSSliderRowTableViewCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (void).cxx_destruct;
- (void)updateCellCharacteristics;
- (void)_valueChanged:(NSNotification *)arg0;
- (void)updateDisplayedValue;

@end

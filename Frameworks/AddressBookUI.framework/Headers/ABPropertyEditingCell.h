/* Runtime dump - ABPropertyEditingCell
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPropertyEditingCell : ABPropertyCell <ABPickerControllerDelegate>
{
    float _labelWidth;
    UIButton * _labelButton;
    ABRepeatingGradientSeparatorView * _vseparator;
}

@property (readonly, nonatomic) UIButton * labelButton;
@property (retain, nonatomic) ABRepeatingGradientSeparatorView * vseparator;
@property (readonly, nonatomic) float leftValueMargin;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)wantsChevron;
+ (char)wantsStandardConstraints;
+ (ABPropertyEditingCell *)keyPathsForValuesAffectingEffectiveLabelWidth;

- (UIView<ABText> *)labelView;
- (float)minCellHeight;
- (NSArray *)constantConstraints;
- (void)setValueTextAttributes:(NSDictionary *)arg0;
- (void)updateWithPropertyItem:(ABPropertyGroupItem *)arg0;
- (void)pickerDidCancel:(id)arg0;
- (void)picker:(SAUIDomainObjectPicker *)arg0 didPickItem:(NSObject *)arg1;
- (UIButton *)labelButton;
- (NSString *)valueString;
- (void)labelButtonClicked:(id)arg0;
- (ABRepeatingGradientSeparatorView *)vseparator;
- (float)leftValueMargin;
- (float)effectiveLabelWidth;
- (void)setVseparator:(ABRepeatingGradientSeparatorView *)arg0;
- (void)dealloc;
- (ABPropertyEditingCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;

@end

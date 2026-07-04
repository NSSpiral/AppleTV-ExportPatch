/* Runtime dump - ABMultiCellContentView_Simple
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABMultiCellContentView_Simple : ABMultiCellContentView <UITextFieldDelegate>
{
    ABHighlightingTextField * _textField;
    NSString * _previousValue;
}

@property (readonly, nonatomic) NSString * text;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (struct CGSize)layoutSubviewsForView:(NSObject *)arg0 usingSize:(struct CGSize)arg1 propertyGroup:(ABAbstractPropertyGroup *)arg2 info:(NSDictionary *)arg3 styleProvider:(NSObject *)arg4 whenEditing:(char)arg5;

- (void)reloadFromModel;
- (void)setAbCellStyle:(int)arg0;
- (char)isValidValue:(id)arg0;
- (char)wantsLabelDivider;
- (char)canHandleProperty:(int)arg0;
- (void)updateSubviewsForNewStateAnimated:(char)arg0;
- (NSObject *)viewForFirstResponder;
- (UIView *)pickerView;
- (NSArray *)hitTestForTouches:(NSArray *)arg0 withEvent:(Event *)arg1;
- (char)shouldSendTouchesToSuperviewForHitView:(NSObject *)arg0;
- (char)tabToNextResponder:(char)arg0 fromView:(UIView *)arg1;
- (void)setPropertyGroup:(ABAbstractPropertyGroup *)arg0 andInfo:(NSDictionary *)arg1;
- (void)textFieldTextDidChange:(NSDictionary *)arg0;
- (void)dealloc;
- (void)reload;
- (NSString *)text;
- (char)textFieldShouldBeginEditing:(UITextField *)arg0;
- (void)textFieldDidBeginEditing:(UITextField *)arg0;
- (char)textFieldShouldEndEditing:(UITextField *)arg0;
- (void)textFieldDidEndEditing:(UITextField *)arg0;
- (char)textField:(ABHighlightingTextField *)arg0 shouldChangeCharactersInRange:(struct _NSRange)arg1 replacementString:(NSString *)arg2;
- (char)textFieldShouldClear:(UITextField *)arg0;
- (char)textFieldShouldReturn:(UITextField *)arg0;
- (struct ?)suggestionsForString:(NSString *)arg0 inputIndex:(unsigned int)arg1;

@end

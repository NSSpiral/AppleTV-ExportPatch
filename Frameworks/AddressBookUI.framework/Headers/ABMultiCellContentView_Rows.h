/* Runtime dump - ABMultiCellContentView_Rows
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABMultiCellContentView_Rows : ABMultiCellContentView <UITextFieldDelegate>
{
    NSMutableArray * _entryFields;
    NSMutableArray * _horizontalDividers;
    char _isAttemptingFirstResponder;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (struct CGSize)layoutSubviewsForView:(NSObject *)arg0 usingSize:(struct CGSize)arg1 propertyGroup:(ABAbstractPropertyGroup *)arg2 info:(NSDictionary *)arg3 styleProvider:(NSObject *)arg4 whenEditing:(char)arg5;
+ (struct CGSize)layoutSubviewsForView:(NSObject *)arg0 usingSize:(struct CGSize)arg1 propertyGroup:(ABAbstractPropertyGroup *)arg2 info:(NSDictionary *)arg3 styleProvider:(NSObject *)arg4 whenEditing:(char)arg5 includeRows:(char)arg6;
+ (struct CGRect)zerothHorizontalDividerFrameForValueViewRect:(NSObject *)arg0;
+ (unsigned int)rowsForPropertyGroup:(NSObject *)arg0 info:(NSDictionary *)arg1;

- (void)reloadFromModel;
- (void)setAbCellStyle:(int)arg0;
- (void)entryFieldBeginAttemptBecomeFirstResponder:(NSObject *)arg0;
- (void)entryFieldEndAttemptBecomeFirstResponder:(NSObject *)arg0;
- (void)updateSubviewsForNewStateAnimated:(char)arg0;
- (struct CGRect)rectForView:(NSObject *)arg0;
- (NSObject *)viewForFirstResponder;
- (struct CGRect)backgroundRectForView:(NSObject *)arg0;
- (NSArray *)hitTestForTouches:(NSArray *)arg0 withEvent:(Event *)arg1;
- (char)tabToNextResponder:(char)arg0 fromView:(UIView *)arg1;
- (void)entryField:(SBUIPasscodeEntryField *)arg0 didEndEditingForKey:(NSString *)arg1;
- (NSString *)keyboardSettingsForKey:(NSString *)arg0;
- (void)textFieldTextDidChange:(NSDictionary *)arg0;
- (void)reloadFromModelIncludingRows:(char)arg0;
- (void)reloadIncludingRows:(char)arg0;
- (id)entryFieldForRow:(unsigned int)arg0;
- (void)dealloc;
- (void)reload;
- (char)textFieldShouldBeginEditing:(UITextField *)arg0;
- (void)textFieldDidBeginEditing:(UITextField *)arg0;
- (char)textFieldShouldEndEditing:(UITextField *)arg0;
- (void)textFieldDidEndEditing:(UITextField *)arg0;
- (char)textFieldShouldReturn:(UITextField *)arg0;

@end

/* Runtime dump - ABMultiCellContentView_Note
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABMultiCellContentView_Note : ABMultiCellContentView <ABSwellTextViewDelegate>
{
    ABSwellTextView * _textView;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (struct CGSize)layoutSubviewsForView:(NSObject *)arg0 usingSize:(struct CGSize)arg1 propertyGroup:(ABAbstractPropertyGroup *)arg2 info:(NSDictionary *)arg3 styleProvider:(NSObject *)arg4 whenEditing:(char)arg5;
+ (void)setupTextView:(NSObject *)arg0 withStyleProvider:(NSObject *)arg1 whenEditing:(char)arg2;
+ (ABMultiCellContentView_Note *)swellTextViewForReuse;
+ (NSObject *)labelTextForPropertyGroup:(NSObject *)arg0 info:(NSDictionary *)arg1 styleProvider:(NSObject *)arg2;

- (void)reloadFromModel;
- (void)setAbCellStyle:(int)arg0;
- (void)updateSubviewsForNewStateAnimated:(char)arg0;
- (void)setLabelText:(NSString *)arg0;
- (NSObject *)viewForFirstResponder;
- (char)canBeginEditingAnytime;
- (char)tabToNextResponder:(char)arg0 fromView:(UIView *)arg1;
- (struct CGRect)focusRectForView:(NSObject *)arg0;
- (char)shouldUseTwoLineLabels;
- (char)swellTextViewShouldBeginEditing:(id)arg0;
- (char)swellTextViewShouldEndEditing:(id)arg0;
- (void)swellTextViewDidBeginEditing:(id)arg0;
- (void)swellTextViewDidEndEditing:(id)arg0;
- (void)swellTextViewTextDidChange:(NSDictionary *)arg0;
- (void)swellTextView:(NSObject *)arg0 didChangeSize:(struct CGSize)arg1;
- (struct CGRect)frameForLabel;
- (void)dealloc;
- (void)reload;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;

@end

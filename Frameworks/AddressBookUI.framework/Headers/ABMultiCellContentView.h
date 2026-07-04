/* Runtime dump - ABMultiCellContentView
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABMultiCellContentView : ABPersonCellContentView <ABResponderDelegate>
{
    UITableViewCell * _cell;
    char _usesCustomPropertyCell;
    UIView * _labelDivider;
    char _isImportant;
    char _isEmphasized;
    char _isHighlighted;
    char _allowsEditing;
    char _isEditing;
    char _shouldIgnoreEndEditing;
    int _property;
    ABAbstractPropertyGroup * _pg;
    id _pgInfo;
    char _needsReload;
    UIView * _touchedView;
    <ABMultiCellContentViewUpdateDelegate> * _updateDelegate;
    int _abCellStyle;
}

@property (nonatomic) UITableViewCell * cell;
@property (nonatomic) char usesCustomPropertyCell;
@property (readonly, nonatomic) ABAbstractPropertyGroup * propertyGroup;
@property (retain, nonatomic) id propertyGroupInfo;
@property (nonatomic) char editing;
@property (nonatomic) char allowsEditing;
@property (nonatomic) char shouldIgnoreEndEditing;
@property (nonatomic) char important;
@property (nonatomic) char emphasized;
@property (nonatomic) <ABMultiCellContentViewUpdateDelegate> * updateDelegate;
@property (nonatomic) int abCellStyle;

+ (Class)classForProperty:(int)arg0;
+ (struct CGSize)layoutSubviewsForView:(NSObject *)arg0 usingSize:(struct CGSize)arg1 propertyGroup:(ABAbstractPropertyGroup *)arg2 info:(NSDictionary *)arg3 styleProvider:(NSObject *)arg4 whenEditing:(char)arg5;
+ (struct CGSize)sizeThatFits:(struct CGSize)arg0 forPropertyGroup:(NSObject *)arg1 info:(NSDictionary *)arg2 styleProvider:(NSObject *)arg3 whenEditing:(char)arg4;
+ (void)setupTextField:(id)arg0 withStyleProvider:(NSObject *)arg1;
+ (NSObject *)reuseIdentifierForPropertyGroup:(NSObject *)arg0 info:(NSDictionary *)arg1;

- (void)reloadFromModel;
- (void)setAbCellStyle:(int)arg0;
- (int)abCellStyle;
- (char)isValidValue:(id)arg0;
- (void)entryFieldBeginAttemptBecomeFirstResponder:(NSObject *)arg0;
- (void)entryFieldEndAttemptBecomeFirstResponder:(NSObject *)arg0;
- (char)ABTabToNextResponder:(char)arg0 fromView:(UIView *)arg1;
- (char)wantsLabelDivider;
- (ABMultiCellContentView *)initWithFrame:(struct CGRect)arg0 property:(struct CGSize)arg1;
- (ABMultiCellContentView *)initCommonWithFrame:(struct CGRect)arg0 property:(struct CGSize)arg1;
- (char)canHandleProperty:(int)arg0;
- (void)setPropertyGroupInfo:(NSDictionary *)arg0;
- (void)updateSubviewsForNewStateAnimated:(char)arg0;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0 forPropertyGroup:(NSObject *)arg1 info:(NSDictionary *)arg2 styleProvider:(NSObject *)arg3 whenEditing:(char)arg4;
- (char)usesCustomPropertyCell;
- (void)setLabelText:(NSString *)arg0;
- (id)labelTextColorWhenEditing:(char)arg0;
- (UIColor *)displayTextColor;
- (UIColor *)displayHighlightedTextColor;
- (void)setKeyboardSettings:(NSDictionary *)arg0 onTextField:(UITextField *)arg1;
- (void)layoutLabel;
- (struct CGRect)frameForLabelDivider;
- (id)badgeIconWhenEditing:(char)arg0;
- (void)reloadLabelFromModel;
- (struct CGRect)rectForView:(NSObject *)arg0;
- (NSObject *)viewForFirstResponder;
- (UIView *)pickerView;
- (struct CGRect)backgroundRectForView:(NSObject *)arg0;
- (char)canBeginEditingAnytime;
- (NSArray *)hitTestForTouches:(NSArray *)arg0 withEvent:(Event *)arg1;
- (char)shouldSendTouchesToSuperviewForHitView:(NSObject *)arg0;
- (char)tabToNextResponder:(char)arg0 fromView:(UIView *)arg1;
- (void)setPropertyGroup:(ABAbstractPropertyGroup *)arg0 andInfo:(NSDictionary *)arg1;
- (void)clearTextFieldDelegates:(id)arg0;
- (NSObject *)newTextFieldWithFrame:(struct CGRect)arg0 tag:(struct CGSize)arg1 keyboardSettings:(NSDictionary *)arg2 delegate:(int)arg3;
- (void)reloadIfNeeded:(char)arg0 reloadFromModel:(char)arg1;
- (struct CGRect)focusRectForView:(NSObject *)arg0;
- (void)setEmphasized:(char)arg0;
- (void)setImportant:(char)arg0;
- (char)entryFieldShouldBeginEditing:(id)arg0;
- (char)entryFieldShouldEndEditing:(id)arg0;
- (void)entryFieldDidBeginEditing:(id)arg0;
- (void)entryField:(SBUIPasscodeEntryField *)arg0 valueDidChange:(NSDictionary *)arg1 forKey:(NSString *)arg2;
- (void)entryField:(SBUIPasscodeEntryField *)arg0 didEndEditingForKey:(NSString *)arg1;
- (char)entryFieldShouldReturn:(id)arg0;
- (ABAbstractPropertyGroup *)propertyGroup;
- (NSDictionary *)propertyGroupInfo;
- (char)isImportant;
- (char)isEmphasized;
- (<ABMultiCellContentViewUpdateDelegate> *)updateDelegate;
- (void)setUpdateDelegate:(<ABMultiCellContentViewUpdateDelegate> *)arg0;
- (void)setUsesCustomPropertyCell:(char)arg0;
- (char)shouldIgnoreEndEditing;
- (void)setShouldIgnoreEndEditing:(char)arg0;
- (ABMultiCellContentView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (ABMultiCellContentView *)init;
- (void)layoutSubviews;
- (void)reload;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (char)resignFirstResponder;
- (char)becomeFirstResponder;
- (char)canBecomeFirstResponder;
- (void)setHighlighted:(char)arg0;
- (char)isHighlighted;
- (char)isEditing;
- (void)setEditing:(char)arg0 animated:(char)arg1;
- (void)setEditing:(char)arg0;
- (char)canResignFirstResponder;
- (char)allowsEditing;
- (void)setAllowsEditing:(char)arg0;
- (UITableViewCell *)cell;
- (void)setCell:(UITableViewCell *)arg0;

@end

/* Runtime dump - ABMultiCellContentView_Address
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABMultiCellContentView_Address : ABMultiCellContentView_DisplayAlternate
{
    NSArray * _lineInfos;
    NSMutableArray * _lineSubviews;
    struct _NSRange _streetRange;
    unsigned int _entryFieldIndexOfFirstStreetField;
    NSMutableArray * _verticalDividers;
}

+ (struct CGSize)layoutSubviewsForView:(NSObject *)arg0 usingSize:(struct CGSize)arg1 propertyGroup:(ABAbstractPropertyGroup *)arg2 info:(NSDictionary *)arg3 styleProvider:(NSObject *)arg4 whenEditing:(char)arg5;
+ (NSObject *)lineInfosForPropertyGroup:(NSObject *)arg0 info:(NSDictionary *)arg1;
+ (NSObject *)streetTextForPropertyGroup:(NSObject *)arg0 info:(NSDictionary *)arg1;
+ (int)calculateStreetRowsForText:(NSString *)arg0;
+ (unsigned int)rowsForPropertyGroup:(NSObject *)arg0 info:(NSDictionary *)arg1;

- (void)reloadFromModel;
- (void)setPropertyGroupInfo:(NSDictionary *)arg0;
- (UIView *)pickerView;
- (int)tagForPropertyKey:(NSString *)arg0;
- (void)textFieldTextDidChange:(NSDictionary *)arg0;
- (void)removeTextFieldAnimationDidStop:(id)arg0 finished:(id /* block */)arg1 context:(void *)arg2;
- (NSString *)propertyKeyForTag:(int)arg0;
- (unsigned int)lineIndexOfStreetField:(id)arg0;
- (NSObject *)streetFieldAtLineIndex:(unsigned int)arg0;
- (void)addStreetFieldAnimated:(char)arg0;
- (void)removeStreetFieldAtIndex:(unsigned int)arg0 animated:(char)arg1;
- (void)dealloc;
- (void)reload;
- (void)setEditing:(char)arg0 animated:(char)arg1;
- (void)textFieldDidEndEditing:(UITextField *)arg0;

@end

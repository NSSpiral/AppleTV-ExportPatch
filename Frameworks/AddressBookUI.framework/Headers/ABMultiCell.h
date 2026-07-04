/* Runtime dump - ABMultiCell
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABMultiCell : ABChameleonCell
{
    ABMultiCellContentView * _abMultiCellContentView;
    char _editingDisabled;
}

@property (nonatomic) char editingDisabled;
@property (retain, nonatomic) ABMultiCellContentView * multiCellContentView;

- (void)setAbCellStyle:(int)arg0;
- (void)_addMultiCellContentViewIfNeeded;
- (char)_shouldSwallowTouches:(NSArray *)arg0 withEvent:(Event *)arg1;
- (ABMultiCellContentView *)multiCellContentView;
- (void)setMultiCellContentView:(ABMultiCellContentView *)arg0;
- (char)isEditingDisabled;
- (void)setEditingDisabled:(char)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)setEditing:(char)arg0 animated:(char)arg1;

@end

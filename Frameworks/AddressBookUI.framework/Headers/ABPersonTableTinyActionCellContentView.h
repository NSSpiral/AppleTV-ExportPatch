/* Runtime dump - ABPersonTableTinyActionCellContentView
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPersonTableTinyActionCellContentView : UIView
{
    NSMutableArray * _actions;
    NSMutableArray * _buttons;
    UIButton * _highlightedButton;
    ABPersonTableTinyActionCell * _cell;
}

@property (nonatomic) ABPersonTableTinyActionCell * cell;
@property (readonly, nonatomic) NSArray * actions;

- (void)unhighlight;
- (void)refreshActions;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSArray *)actions;
- (ABPersonTableTinyActionCell *)cell;
- (void)setCell:(ABPersonTableTinyActionCell *)arg0;

@end

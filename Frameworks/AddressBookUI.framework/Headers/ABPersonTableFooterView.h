/* Runtime dump - ABPersonTableFooterView
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPersonTableFooterView : UIView <ABPersonTableActionDelegate>
{
    char _editing;
    ABPersonTableAction * _deleteAction;
    UIView * _deleteView;
    UIView * _accessoryView;
    UIButton * _attributionButton;
    <ABStyleProvider> * _styleProvider;
}

@property (retain, nonatomic) <ABStyleProvider> * styleProvider;
@property (nonatomic) char tableEditing;
@property (readonly, nonatomic) NSString * attribution;
@property (readonly, nonatomic) char attributionEnabled;
@property (retain, nonatomic) UIView * accessoryView;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (<ABStyleProvider> *)styleProvider;
- (void)setStyleProvider:(<ABStyleProvider> *)arg0;
- (struct CGRect)attributionFrame;
- (struct CGRect)deleteViewFrame;
- (void)removeDeleteAction;
- (void)setAttribution:(NSString *)arg0 enabled:(char)arg1 target:(NSObject *)arg2 action:(SEL)arg3;
- (char)isAttributionEnabled;
- (void)setDeleteActionWithTitle:(NSString *)arg0 target:(NSObject *)arg1 selector:(SEL)arg2 animated:(char)arg3;
- (void)setTableEditing:(char)arg0;
- (ABPersonTableFooterView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (char)isEditing;
- (void)setEditing:(char)arg0 animated:(char)arg1;
- (void)setEditing:(char)arg0;
- (void)setAccessoryView:(UIView *)arg0;
- (UIView *)accessoryView;
- (NSString *)attribution;

@end

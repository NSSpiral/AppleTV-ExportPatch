/* Runtime dump - ABPersonTableAction
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPersonTableAction : NSObject <ABStyleProviding>
{
    NSString * _title;
    NSString * _shortTitle;
    char _displaysShortTitle;
    char _indicatesFaceTimeHistory;
    NSString * _detailText;
    NSString * _differentiationSheetTitle;
    char _allowDifferentiationSheet;
    id _target;
    SEL _selector;
    int _style;
    int _property;
    struct __CFArray * _properties;
    int _grouping;
    int _ordering;
    UIButton * _button;
    UIButton * _FMFButton;
    UIView * _customContentView;
    <ABPersonTableActionDelegate> * _delegate;
}

@property (nonatomic) <ABPersonTableActionDelegate> * delegate;
@property (nonatomic) int grouping;
@property (nonatomic) int ordering;
@property (readonly, nonatomic) UIButton * button;
@property (readonly, nonatomic) UIButton * existingButton;
@property (readonly, nonatomic) NSString * title;
@property (readonly, nonatomic) NSString * shortTitle;
@property (nonatomic) char displaysShortTitle;
@property (readonly, nonatomic) NSString * detailText;
@property (readonly, nonatomic) int style;
@property (readonly, nonatomic) id target;
@property (readonly, nonatomic) SEL selector;
@property (readonly, nonatomic) int property;
@property (nonatomic) struct __CFArray * properties;
@property (copy, nonatomic) NSString * differentiationSheetTitle;
@property (nonatomic) char allowDifferentiationSheet;
@property (nonatomic) char indicatesFaceTimeHistory;
@property (retain, nonatomic) UIView * actionContentView;

- (<ABStyleProvider> *)styleProvider;
- (void)setFMFActionButton:(id)arg0;
- (ABPersonTableAction *)initWithTitle:(NSString *)arg0 shortTitle:(NSString *)arg1 detailText:(NSString *)arg2 style:(int)arg3 target:(NSObject *)arg4 selector:(SEL)arg5 property:(int)arg6;
- (ABPersonTableAction *)initWithTitle:(NSString *)arg0 detailText:(NSString *)arg1 style:(int)arg2 target:(NSObject *)arg3 selector:(SEL)arg4;
- (void)setActionContentView:(UIView *)arg0;
- (void)buttonClicked:(id)arg0;
- (int)ordering;
- (void)setDisplaysShortTitle:(char)arg0;
- (void)performWithSender:(NSObject *)arg0 person:(void *)arg1 property:(int)arg2 identifier:(int)arg3;
- (ABPersonTableAction *)initWithTitle:(NSString *)arg0 style:(int)arg1 target:(NSObject *)arg2 selector:(SEL)arg3;
- (ABPersonTableAction *)initWithTitle:(NSString *)arg0 shortTitle:(NSString *)arg1 target:(NSObject *)arg2 selector:(SEL)arg3 property:(int)arg4;
- (int)compareOrderingToAction:(NSObject *)arg0;
- (void)modifyDetailText:(NSString *)arg0;
- (void)setIndicatesFaceTimeHistory:(char)arg0;
- (void)prepareButton:(id)arg0 forValueAtIndex:(int)arg1 inPropertyGroup:(NSObject *)arg2;
- (char)indicatesFaceTimeHistory;
- (NSString *)differentiationSheetTitle;
- (void)setDifferentiationSheetTitle:(NSString *)arg0;
- (char)allowDifferentiationSheet;
- (void)setAllowDifferentiationSheet:(char)arg0;
- (NSString *)shortTitle;
- (char)displaysShortTitle;
- (NSString *)detailText;
- (UIButton *)existingButton;
- (void)setOrdering:(int)arg0;
- (UIView *)actionContentView;
- (UIButton *)button;
- (void)dealloc;
- (void)setDelegate:(<ABPersonTableActionDelegate> *)arg0;
- (NSString *)description;
- (<ABPersonTableActionDelegate> *)delegate;
- (NSString *)title;
- (int)style;
- (NSObject *)target;
- (SEL)selector;
- (void)setProperties:(struct __CFArray *)arg0;
- (struct __CFArray *)properties;
- (int)property;
- (void)setGrouping:(int)arg0;
- (int)grouping;

@end

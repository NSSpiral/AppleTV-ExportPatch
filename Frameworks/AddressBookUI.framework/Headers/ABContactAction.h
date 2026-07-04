/* Runtime dump - ABContactAction
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABContactAction : NSObject
{
    char _destructive;
    <ABContactActionDelegate> * _delegate;
    CNContact * _contact;
    NSString * _title;
    id _target;
    SEL _selector;
    UIColor * _color;
    int _transportType;
    CNContactStyle * _contactStyle;
}

@property (nonatomic) <ABContactActionDelegate> * delegate;
@property (retain, nonatomic) CNContact * contact;
@property (readonly, copy, nonatomic) NSString * title;
@property (readonly, retain, nonatomic) id target;
@property (readonly, nonatomic) SEL selector;
@property (nonatomic) char destructive;
@property (retain, nonatomic) UIColor * color;
@property (nonatomic) int transportType;
@property (retain, nonatomic) CNContactStyle * contactStyle;

+ (ABContactAction *)contactActionWithTitle:(NSString *)arg0 target:(NSObject *)arg1 selector:(SEL)arg2 destructive:(char)arg3;
+ (ABContactAction *)contactActionWithTitle:(NSString *)arg0 target:(NSObject *)arg1 selector:(SEL)arg2;

- (ABContactAction *)initWithContact:(CNContact *)arg0;
- (void)performActionWithSender:(NSObject *)arg0;
- (CNContact *)contact;
- (void)setContact:(CNContact *)arg0;
- (ABContactAction *)initWithTitle:(NSString *)arg0 target:(NSObject *)arg1 selector:(SEL)arg2 destructive:(char)arg3;
- (void)setContactStyle:(CNContactStyle *)arg0;
- (CNContactStyle *)contactStyle;
- (void)dealloc;
- (void)setDelegate:(<ABContactActionDelegate> *)arg0;
- (NSString *)description;
- (<ABContactActionDelegate> *)delegate;
- (NSString *)title;
- (NSObject *)target;
- (SEL)selector;
- (UIColor *)color;
- (void)setColor:(UIColor *)arg0;
- (char)isDestructive;
- (void)setDestructive:(char)arg0;
- (void)setTransportType:(int)arg0;
- (int)transportType;

@end

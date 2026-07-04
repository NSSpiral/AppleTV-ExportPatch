/* Runtime dump - ABPostalNameGroupItem
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPostalNameGroupItem : ABCardGroupItem
{
    CNMutableContact * _contact;
    SEL _setter;
    NSString * _value;
    NSString * _property;
    NSString * _placeholder;
}

@property (copy, nonatomic) CNMutableContact * contact;
@property (nonatomic) SEL setter;
@property (copy, nonatomic) NSString * value;
@property (copy, nonatomic) NSString * property;
@property (copy, nonatomic) NSString * placeholder;

- (CNMutableContact *)contact;
- (void)setContact:(CNMutableContact *)arg0;
- (SEL)setter;
- (void)setSetter:(SEL)arg0;
- (NSString *)value;
- (void)setValue:(NSString *)arg0;
- (void)setPlaceholder:(NSString *)arg0;
- (NSString *)placeholder;
- (NSString *)property;
- (void)setProperty:(NSString *)arg0;

@end

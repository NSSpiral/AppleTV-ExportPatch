/* Runtime dump - ABPropertyPlaceholderItem
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPropertyPlaceholderItem : ABCardGroupItem
{
    NSString * _property;
}

@property (retain, nonatomic) NSString * property;
@property (readonly, nonatomic) NSString * title;

- (NSString *)title;
- (NSString *)property;
- (ABPropertyPlaceholderItem *)initWithProperty:(NSString *)arg0;
- (void)setProperty:(NSString *)arg0;

@end

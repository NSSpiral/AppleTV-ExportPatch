/* Runtime dump - ABCardLinkedCardsGroup
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABCardLinkedCardsGroup : ABCardGroup
{
    NSArray * _linkedContacts;
}

@property (retain, nonatomic) NSArray * linkedContacts;

- (NSArray *)displayItems;
- (NSArray *)editingItems;
- (NSArray *)linkedContacts;
- (void)setLinkedContacts:(NSArray *)arg0;
- (void)dealloc;
- (NSString *)title;

@end

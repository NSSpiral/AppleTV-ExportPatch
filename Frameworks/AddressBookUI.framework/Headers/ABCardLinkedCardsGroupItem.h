/* Runtime dump - ABCardLinkedCardsGroupItem
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABCardLinkedCardsGroupItem : ABCardGroupItem
{
    CNContact * _contact;
}

@property (retain, nonatomic) CNContact * contact;

- (ABCardLinkedCardsGroupItem *)initWithContact:(CNContact *)arg0;
- (CNContact *)contact;
- (void)setContact:(CNContact *)arg0;

@end

/* Runtime dump - ABMemberCell
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABMemberCell : UITableViewCell
{
    ABStyleProvider * _styleProvider;
    char _isMeCard;
    ABUIPerson * _person;
}

@property (readonly, nonatomic) <ABStyleProvider> * styleProvider;
@property (retain, nonatomic) ABUIPerson * person;
@property (nonatomic) char isMeCard;

- (<ABStyleProvider> *)styleProvider;
- (NSArray *)_attributedNameWithNameComponents:(NSArray *)arg0 delimiter:(id)arg1 highlightedIndex:(int)arg2 romanName:(char)arg3;
- (NSDictionary *)_cachedPlaceholderTextAttributes;
- (NSDictionary *)_cachedBoldTextAttributes;
- (UIFont *)_cachedMemberNameRegularFont;
- (NSDictionary *)_cachedRegularTextAttributes;
- (ABMemberCell *)initWithStyleProvider:(<ABStyleProvider> *)arg0 reuseIdentifier:(NSString *)arg1;
- (void)setIsMeCard:(char)arg0;
- (char)isMeCard;
- (void)setUserInteractionEnabled:(char)arg0;
- (void)dealloc;
- (ABUIPerson *)person;
- (void)setPerson:(ABUIPerson *)arg0;

@end

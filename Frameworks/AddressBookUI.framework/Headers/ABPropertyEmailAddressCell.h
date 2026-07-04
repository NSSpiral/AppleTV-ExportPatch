/* Runtime dump - ABPropertyEmailAddressCell
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPropertyEmailAddressCell : ABPropertySimpleTransportCell
{
    char _VIP;
}

@property (nonatomic) char VIP;

- (char)shouldPerformDefaultAction;
- (void)setVIP:(char)arg0;
- (char)shouldShowStar;
- (void)updateTransportButtons;
- (char)isVIP;

@end

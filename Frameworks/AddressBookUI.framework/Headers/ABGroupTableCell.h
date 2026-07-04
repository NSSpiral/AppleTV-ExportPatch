/* Runtime dump - ABGroupTableCell
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABGroupTableCell : UITableViewCell <ABGroupWrapperDelegate>
{
    ABGroupWrapper * _groupWrapper;
    ABStyleProvider * _styleProvider;
}

@property (retain, nonatomic) ABGroupWrapper * groupWrapper;
@property (retain, nonatomic) ABStyleProvider * styleProvider;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (ABStyleProvider *)styleProvider;
- (void)setStyleProvider:(ABStyleProvider *)arg0;
- (void)setGroupWrapper:(ABGroupWrapper *)arg0;
- (ABGroupWrapper *)groupWrapper;
- (void)updateFromGroupWrapper;
- (void)groupWrapper:(ABGroupWrapper *)arg0 didBecomeSelected:(char)arg1;
- (void)dealloc;
- (void)tintColorDidChange;

@end

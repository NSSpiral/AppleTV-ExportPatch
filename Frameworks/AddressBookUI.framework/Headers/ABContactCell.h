/* Runtime dump - ABContactCell
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABContactCell : UITableViewCell
{
    char _addedConstantsConstraints;
    NSArray * _variableConstraints;
    char _hasBeenDisplayed;
    ABCardGroupItem * _cardGroupItem;
    float _leftContentMargin;
    float _rightContentMargin;
    CNContactStyle * _contactStyle;
}

@property (nonatomic) char showSeparator;
@property (retain, nonatomic) ABCardGroupItem * cardGroupItem;
@property (nonatomic) float leftContentMargin;
@property (nonatomic) float rightContentMargin;
@property (nonatomic) char hasBeenDisplayed;
@property (retain, nonatomic) CNContactStyle * contactStyle;

- (void)performDefaultAction;
- (void)setContactStyle:(CNContactStyle *)arg0;
- (CNContactStyle *)contactStyle;
- (ABCardGroupItem *)cardGroupItem;
- (void)setCardGroupItem:(ABCardGroupItem *)arg0;
- (NSArray *)variableConstraints;
- (float)minCellHeight;
- (char)shouldPerformDefaultAction;
- (NSArray *)constantConstraints;
- (char)shouldPerformAccessoryAction;
- (void)performAccessoryAction;
- (void)setShowSeparator:(char)arg0;
- (char)showSeparator;
- (float)leftContentMargin;
- (void)setLeftContentMargin:(float)arg0;
- (float)rightContentMargin;
- (void)setRightContentMargin:(float)arg0;
- (char)hasBeenDisplayed;
- (void)setHasBeenDisplayed:(char)arg0;
- (void)dealloc;
- (ABContactCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (void)prepareForReuse;
- (void)updateConstraints;

@end

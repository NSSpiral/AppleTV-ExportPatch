/* Runtime dump - WKSelectTableViewController
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKSelectTableViewController : UITableViewController <UIKeyInput>
{
    unsigned int _singleSelectionIndex;
    unsigned int _singleSelectionSection;
    int _numberOfSections;
    char _allowsMultipleSelection;
    float _fontSize;
    float _maximumTextWidth;
    int _textAlignment;
    WKSelectPopover * _popover;
    WKContentView * _contentView;
}

@property (nonatomic) WKSelectPopover * popover;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) int autocapitalizationType;
@property (nonatomic) int autocorrectionType;
@property (nonatomic) int spellCheckingType;
@property (nonatomic) int keyboardType;
@property (nonatomic) int keyboardAppearance;
@property (nonatomic) int returnKeyType;
@property (nonatomic) char enablesReturnKeyAutomatically;
@property (nonatomic) char secureTextEntry;

- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (NSString *)tableView:(UITableView *)arg0 titleForHeaderInSection:(int)arg1;
- (char)hasText;
- (void)insertText:(NSString *)arg0;
- (void)deleteBackward;
- (void)viewWillAppear:(char)arg0;
- (int)findItemIndexAt:(id)arg0;
- (struct OptionItem *)findItemAt:(BOOL)arg0;
- (void)populateCell:(NSObject *)arg0 withItem:(struct OptionItem *)arg1;
- (WKSelectTableViewController *)initWithView:(WKContentView *)arg0 hasGroups:(char)arg1;
- (WKSelectPopover *)popover;
- (void)setPopover:(WKSelectPopover *)arg0;

@end

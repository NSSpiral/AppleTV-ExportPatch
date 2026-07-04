/* Runtime dump - UIWebSelectTableViewController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebSelectTableViewController : UITableViewController <UIKeyInput>
{
    DOMHTMLSelectElement * _selectionNode;
    NSArray * _cachedItems;
    NSArray * _groupsAndOptions;
    unsigned int _singleSelectionIndex;
    unsigned int _singleSelectionSection;
    char _allowsMultipleSelection;
    float _fontSize;
    float _maximumTextWidth;
    int _textAlignment;
    UIWebSelectPopover * _popover;
}

@property (retain, nonatomic) DOMHTMLSelectElement * _selectionNode;
@property (retain, nonatomic) NSArray * _groupsAndOptions;
@property (retain, nonatomic) NSArray * _cachedItems;
@property (nonatomic) UIWebSelectPopover * _popover;
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

- (void)dealloc;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (NSString *)tableView:(UITableView *)arg0 titleForHeaderInSection:(int)arg1;
- (char)hasText;
- (void)insertText:(NSString *)arg0;
- (void)deleteBackward;
- (void)viewWillAppear:(char)arg0;
- (void)set_selectionNode:(DOMHTMLSelectElement *)arg0;
- (void)set_cachedItems:(NSArray *)arg0;
- (DOMHTMLSelectElement *)_selectionNode;
- (NSArray *)_cachedItems;
- (void)set_groupsAndOptions:(NSArray *)arg0;
- (void)_setupGroupsAndOptions;
- (char)_isEmpty;
- (id)_optionsForSection:(int)arg0;
- (UIWebSelectTableViewController *)initWithDOMHTMLSelectNode:(NSObject *)arg0 cachedItems:(NSArray *)arg1 singleSelectionIndex:(unsigned int)arg2 multipleSelection:(char)arg3;
- (NSArray *)_groupsAndOptions;
- (UIWebSelectPopover *)_popover;
- (void)set_popover:(UIWebSelectPopover *)arg0;

@end

/* Runtime dump - PLSlideshowTransitionsViewController
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLSlideshowTransitionsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    UIView * _containerView;
    UITableView * _table;
    NSMutableArray * _tableCells;
    NSArray * _transitionKeys;
    NSArray * _alternateLocalizations;
    NSString * _selectedTransition;
}

@property (retain, nonatomic) NSString * selectedTransition;
@property (retain, nonatomic) NSArray * alternateLocalizations;
@property (retain, nonatomic) NSArray * transitionKeys;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (void)loadView;
- (struct CGSize)contentSizeForViewInPopoverView;
- (void)viewDidUnload;
- (void)setSelectedTransition:(NSString *)arg0;
- (NSString *)selectedTransition;
- (void)setTransitionKeys:(NSArray *)arg0 alternateLocalizations:(NSArray *)arg1;
- (PLSlideshowTransitionsViewController *)initWithTransitions:(NSMutableArray *)arg0 alternateTransitionLocalizations:(NSArray *)arg1;
- (void)setTransitionKeys:(NSArray *)arg0;
- (void)setAlternateLocalizations:(NSArray *)arg0;
- (void)_configureTableCells;
- (NSArray *)transitionKeys;
- (NSArray *)alternateLocalizations;

@end

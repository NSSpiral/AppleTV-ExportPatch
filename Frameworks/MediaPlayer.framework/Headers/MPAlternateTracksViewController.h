/* Runtime dump - MPAlternateTracksViewController
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAlternateTracksViewController : MPAbstractAlternateTracksViewController <UITableViewDataSource, UITableViewDelegate>
{
    UIView * _backgroundView;
    UINavigationBar * _navigationBar;
    UITableView * _table;
    UIProgressIndicator * _progressIndicator;
    UITextLabel * _loadingLabel;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)willChangeToInterfaceOrientation:(int)arg0;
- (void)didChangeToInterfaceOrientation:(int)arg0;
- (void)_cancelButtonAction:(NSObject *)arg0;
- (void)_doneButtonAction:(NSObject *)arg0;
- (void)_exitAnimated:(char)arg0;
- (void)_setCell:(NSObject *)arg0 isChecked:(char)arg1;
- (void)addLoadingUI;
- (void)removeLoadingUI;
- (void)dealloc;
- (void)reloadData;
- (void)tableView:(UITableView *)arg0 willDisplayCell:(UITableViewCell *)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (float)tableView:(UITableView *)arg0 heightForHeaderInSection:(int)arg1;
- (NSObject *)tableView:(UITableView *)arg0 viewForHeaderInSection:(int)arg1;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (void)loadView;
- (void)viewWillAppear:(char)arg0;
- (void).cxx_destruct;

@end

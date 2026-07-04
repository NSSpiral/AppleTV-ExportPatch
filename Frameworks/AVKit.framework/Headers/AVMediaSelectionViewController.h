/* Runtime dump - AVMediaSelectionViewController
 * Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVMediaSelectionViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView * _tableView;
    AVMediaSelectionOption * _selectedAudioMediaSelectionOption;
    AVMediaSelectionOption * _selectedLegibleMediaSelectionOption;
    AVPlayerController * _playerController;
    id _doneButtonHandler;
}

@property (retain, nonatomic) AVPlayerController * playerController;
@property (copy, nonatomic) id doneButtonHandler;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setDoneButtonHandler:(id /* block */)arg0;
- (id /* block */)doneButtonHandler;
- (char)_isSelectedOrCurrentAudioMediaSelectionOption:(id)arg0;
- (char)_isSelectedOrCurrentLegibleMediaSelectionOption:(id)arg0;
- (void)_doneButtonTapped:(id)arg0;
- (void)tableView:(UITableView *)arg0 willDisplayCell:(UITableViewCell *)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg0 willDisplayHeaderView:(UIView *)arg1 forSection:(int)arg2;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (NSString *)tableView:(UITableView *)arg0 titleForHeaderInSection:(int)arg1;
- (char)prefersStatusBarHidden;
- (void)loadView;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidAppear:(char)arg0;
- (void).cxx_destruct;
- (AVPlayerController *)playerController;
- (void)setPlayerController:(AVPlayerController *)arg0;

@end

/* Runtime dump - FMFActiveDeviceSelectionViewController
 * Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

@interface FMFActiveDeviceSelectionViewController : PSListController <FMFSessionDelegate, UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray * _deviceList;
    FMFDevice * _currentActiveDevice;
    FMFDevice * _nowActiveDevice;
    FMFSession * _fmfSession;
    int _specifierStartIndex;
}

@property (retain, nonatomic) NSMutableArray * deviceList;
@property (retain, nonatomic) FMFDevice * currentActiveDevice;
@property (retain, nonatomic) FMFDevice * nowActiveDevice;
@property (retain, nonatomic) FMFSession * fmfSession;
@property (nonatomic) int specifierStartIndex;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 editingStyleForRowAtIndexPath:(NSIndexPath *)arg1;
- (char)tableView:(UITableView *)arg0 canEditRowAtIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 commitEditingStyle:(int)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(char)arg0;
- (void).cxx_destruct;
- (FMFActiveDeviceSelectionViewController *)initWithSession:(NSObject *)arg0;
- (void)didChangeActiveLocationSharingDevice:(FMFDevice *)arg0;
- (void)didUpdateActiveDeviceList:(NSSet *)arg0;
- (void)reloadSpecifiersOnMainQueue;
- (FMFSession *)fmfSession;
- (void)setFmfSession:(FMFSession *)arg0;
- (void)sortDevicesList;
- (void)setSpecifierStartIndex:(int)arg0;
- (FMFDevice *)nowActiveDevice;
- (int)specifierStartIndex;
- (NSObject *)_specifierForRowIndex:(int)arg0;
- (char)_hasActiveDeviceAtIndex:(unsigned int)arg0;
- (char)_hasThisDeviceAtIndex:(unsigned int)arg0;
- (void)setNowActiveDevice:(FMFDevice *)arg0;
- (void)saveActiveDeviceSelection;
- (void)cancelActiveDeviceSelection;
- (FMFDevice *)currentActiveDevice;
- (void)setCurrentActiveDevice:(FMFDevice *)arg0;
- (NSMutableArray *)deviceList;
- (void)setDeviceList:(NSMutableArray *)arg0;
- (NSArray *)specifiers;

@end

/* Runtime dump - MCBrowserViewController
 * Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

@interface MCBrowserViewController : UIViewController <MCSessionPrivateDelegate, UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate, UINavigationBarDelegate, MCNearbyServiceBrowserDelegate>
{
    <MCBrowserViewControllerDelegate> * _delegate;
    MCNearbyServiceBrowser * _browser;
    MCSession * _session;
    unsigned int _minimumNumberOfPeers;
    unsigned int _maximumNumberOfPeers;
    MCPeerID * _myPeerID;
    UITableView * _tableView;
    NSMutableArray * _nearbyPeersSection;
    NSMutableArray * _invitedPeersSection;
    NSMutableDictionary * _invitedPeersState;
    NSMutableArray * _foundPeers;
    UIBarButtonItem * _doneButton;
    UIBarButtonItem * _cancelButton;
    UINavigationBar * _navigationBar;
    NSBundle * _frameworkBundle;
    unsigned int _declinedPeersCount;
}

@property (weak, nonatomic) <MCBrowserViewControllerDelegate> * delegate;
@property (retain, nonatomic) MCNearbyServiceBrowser * browser;
@property (retain, nonatomic) MCSession * session;
@property (nonatomic) unsigned int minimumNumberOfPeers;
@property (nonatomic) unsigned int maximumNumberOfPeers;
@property (copy, nonatomic) MCPeerID * myPeerID;
@property (retain, nonatomic) UITableView * tableView;
@property (retain, nonatomic) NSMutableArray * nearbyPeersSection;
@property (retain, nonatomic) NSMutableArray * invitedPeersSection;
@property (retain, nonatomic) NSMutableDictionary * invitedPeersState;
@property (retain, nonatomic) NSMutableArray * foundPeers;
@property (retain, nonatomic) UIBarButtonItem * doneButton;
@property (retain, nonatomic) UIBarButtonItem * cancelButton;
@property (retain, nonatomic) UINavigationBar * navigationBar;
@property (retain, nonatomic) NSBundle * frameworkBundle;
@property (nonatomic) unsigned int declinedPeersCount;
@property (readonly, nonatomic) char maximumNumberOfPeersReached;
@property (readonly, nonatomic) char minimumNumberOfPeersReached;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (MCPeerID *)myPeerID;
- (void)session:(MCSession *)arg0 didFinishReceivingResourceWithName:(NSString *)arg1 fromPeer:(MCPeerID *)arg2 atURL:(NSURL *)arg3 withError:(NSError *)arg4 propagate:(char *)arg5;
- (void)session:(MCSession *)arg0 peer:(MCPeerID *)arg1 didChangeState:(int)arg2 propagate:(char *)arg3;
- (void)session:(MCSession *)arg0 didReceiveData:(NSData *)arg1 fromPeer:(MCPeerID *)arg2 propagate:(char *)arg3;
- (void)session:(MCSession *)arg0 didStartReceivingResourceWithName:(NSString *)arg1 fromPeer:(MCPeerID *)arg2 withProgress:(NSProgress *)arg3 propagate:(char *)arg4;
- (void)session:(MCSession *)arg0 didReceiveStream:(NSInputStream *)arg1 withName:(NSString *)arg2 fromPeer:(MCPeerID *)arg3 propagate:(char *)arg4;
- (MCBrowserViewController *)initWithBrowser:(MCNearbyServiceBrowser *)arg0 session:(MCSession *)arg1;
- (unsigned int)minimumNumberOfPeers;
- (unsigned int)maximumNumberOfPeers;
- (NSMutableArray *)nearbyPeersSection;
- (NSMutableArray *)invitedPeersSection;
- (NSMutableDictionary *)invitedPeersState;
- (NSMutableArray *)foundPeers;
- (void)setDeclinedPeersCount:(unsigned int)arg0;
- (UIBarButtonItem *)doneButton;
- (void)peer:(NSString *)arg0 changedStateTo:(int)arg1;
- (unsigned int)declinedPeersCount;
- (void)peerJoinedSession;
- (char)minimumNumberOfPeersReached;
- (char)maximumNumberOfPeersReached;
- (NSString *)nearbySectionTitle;
- (NSObject *)detailStringForPeerState:(int)arg0;
- (void)verifyPeerIsAccountedFor:(id)arg0;
- (void)browser:(MCNearbyServiceBrowser *)arg0 foundPeer:(MCPeerID *)arg1 withDiscoveryInfo:(NSDictionary *)arg2;
- (void)browser:(MCNearbyServiceBrowser *)arg0 lostPeer:(MCPeerID *)arg1;
- (MCBrowserViewController *)initWithServiceType:(NSString *)arg0 session:(MCSession *)arg1;
- (void)setMinimumNumberOfPeers:(unsigned int)arg0;
- (void)setMaximumNumberOfPeers:(unsigned int)arg0;
- (void)doneTapped:(id)arg0;
- (void)cancelTapped:(id)arg0;
- (void)setMyPeerID:(MCPeerID *)arg0;
- (void)setNearbyPeersSection:(NSMutableArray *)arg0;
- (void)setInvitedPeersSection:(NSMutableArray *)arg0;
- (void)setInvitedPeersState:(NSMutableDictionary *)arg0;
- (void)setFoundPeers:(NSMutableArray *)arg0;
- (void)setDoneButton:(UIBarButtonItem *)arg0;
- (NSBundle *)frameworkBundle;
- (void)setFrameworkBundle:(NSBundle *)arg0;
- (void)dealloc;
- (void)setDelegate:(<MCBrowserViewControllerDelegate> *)arg0;
- (MCBrowserViewController *)init;
- (float)tableView:(UITableView *)arg0 heightForHeaderInSection:(int)arg1;
- (UIView *)tableView:(UITableView *)arg0 viewForHeaderInSection:(int)arg1;
- (char)tableView:(UITableView *)arg0 shouldHighlightRowAtIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (NSString *)description;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (NSString *)tableView:(UITableView *)arg0 titleForHeaderInSection:(int)arg1;
- (<MCBrowserViewControllerDelegate> *)delegate;
- (UINavigationBar *)navigationBar;
- (void)didReceiveMemoryWarning;
- (void)setNavigationBar:(UINavigationBar *)arg0;
- (int)positionForBar:(id)arg0;
- (void)setTableView:(UITableView *)arg0;
- (MCBrowserViewController *)initWithNibName:(NSString *)arg0 bundle:(NSObject *)arg1;
- (UIBarButtonItem *)cancelButton;
- (void)setCancelButton:(UIBarButtonItem *)arg0;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidLoad;
- (void)viewDidDisappear:(char)arg0;
- (UITableView *)tableView;
- (MCSession *)session;
- (void)setSession:(MCSession *)arg0;
- (MCNearbyServiceBrowser *)browser;
- (void)setBrowser:(MCNearbyServiceBrowser *)arg0;

@end

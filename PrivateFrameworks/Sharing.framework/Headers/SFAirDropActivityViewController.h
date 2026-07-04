/* Runtime dump - SFAirDropActivityViewController
 * Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFAirDropActivityViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, SFAirDropBrowserDelegate, SFPersonCollectionViewCellDelegate, SFWirelessSettingsControllerDelegate>
{
    int _attachmentCount;
    NSString * _sessionID;
    int _sharedItemsRequestID;
    UILabel * _titleLabel;
    SFAirDropIconView * _airDropIconView;
    NSLayoutConstraint * _airDropIconLeftConstraint;
    UILabel * _noWifiLabel;
    NSLayoutConstraint * _noWifiRightConstraint;
    SFAirDropActiveIconView * _airDropActiveIconView;
    NSLayoutConstraint * _airDropActiveIconLeftConstraint;
    UILabel * _instructionsLabel;
    NSLayoutConstraint * _instructionsRightConstraint;
    SFAirDropActiveIconView * _airDropInactiveIconView;
    NSLayoutConstraint * _airDropInactiveIconLeftConstraint;
    UILabel * _wirelessAccessPointLabel;
    NSLayoutConstraint * _wirelessAccessPointRightConstraint;
    UICollectionView * _collectionView;
    SFCollectionViewFlowLayout * _flowLayout;
    SFAirDropBrowser * _browser;
    id _progressToken;
    NSMutableDictionary * _personToProgress;
    NSMutableDictionary * _personToStoredTransferFinalState;
    NSMutableDictionary * _personToSharedItemsRequestID;
    NSMutableDictionary * _sharedItemsRequestIDToPreviewPhoto;
    SFWirelessSettingsController * _wirelessSettings;
    NSMutableSet * _cachedSharedItems;
    char _itemsRequested;
    char _itemsReady;
    NSOperationQueue * _operationQueue;
    NSMutableArray * _objectChanges;
    ALAssetsLibrary * _assetsLibrary;
    int _generatedPreviews;
    char _sharedItemsAvailable;
    char _otherActivityViewPresented;
    char _darkStyleOnLegacyApp;
    NSObject<SFAirDropActivityViewControllerDelegate> * _delegate;
}

@property (weak, nonatomic) NSObject<SFAirDropActivityViewControllerDelegate> * delegate;
@property (readonly, nonatomic) struct CGSize suggestedThumbnailSize;
@property (nonatomic) char sharedItemsAvailable;
@property (nonatomic) char otherActivityViewPresented;
@property (nonatomic) char darkStyleOnLegacyApp;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)isAirDropAvailable;
+ (char)airDropActivityCanPerformActivityWithItems:(NSArray *)arg0;
+ (NSObject *)classesForItem:(NSObject *)arg0;

- (char)isWifiEnabled;
- (void)dealloc;
- (void)setDelegate:(NSObject<SFAirDropActivityViewControllerDelegate> *)arg0;
- (NSObject<SFAirDropActivityViewControllerDelegate> *)delegate;
- (int)collectionView:(UICollectionView *)arg0 numberOfItemsInSection:(int)arg1;
- (UICollectionViewCell *)collectionView:(UICollectionView *)arg0 cellForItemAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInCollectionView:(NSObject *)arg0;
- (char)collectionView:(UICollectionView *)arg0 shouldSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)collectionView:(UICollectionView *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)collectionView:(UICollectionView *)arg0 didDeselectItemAtIndexPath:(NSIndexPath *)arg1;
- (struct UIEdgeInsets)collectionView:(UICollectionView *)arg0 layout:(NSObject *)arg1 insetForSectionAtIndex:(int)arg2;
- (float)collectionView:(UICollectionView *)arg0 layout:(NSObject *)arg1 minimumLineSpacingForSectionAtIndex:(int)arg2;
- (SFAirDropActivityViewController *)initWithNibName:(NSString *)arg0 bundle:(NSObject *)arg1;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidLoad;
- (void)viewDidDisappear:(char)arg0;
- (void)willRotateToInterfaceOrientation:(int)arg0 duration:(double)arg1;
- (char)darkStyleOnLegacyApp;
- (void)setDarkStyleOnLegacyApp:(char)arg0;
- (void).cxx_destruct;
- (void)didEnterBackground:(id)arg0;
- (void)willEnterForeground:(id)arg0;
- (char)addString:(NSString *)arg0 withAttachmentName:(NSString *)arg1 description:(NSString *)arg2 previewImage:(UIImage *)arg3;
- (char)addAttributedString:(NSString *)arg0 withAttachmentName:(NSString *)arg1 description:(NSString *)arg2 previewImage:(UIImage *)arg3;
- (char)addURL:(NSURL *)arg0 withAttachmentName:(NSString *)arg1 description:(NSString *)arg2 previewImage:(UIImage *)arg3;
- (char)addImage:(UIImage *)arg0 withAttachmentName:(NSString *)arg1 description:(NSString *)arg2 previewImage:(UIImage *)arg3;
- (char)addData:(NSData *)arg0 ofType:(NSString *)arg1 withAttachmentName:(NSString *)arg2 description:(NSString *)arg3 previewImage:(UIImage *)arg4;
- (struct CGSize)suggestedThumbnailSize;
- (void)setNeedsRequestingSharedItems;
- (void)setSharedItemsAvailable:(char)arg0;
- (void)setOtherActivityViewPresented:(char)arg0;
- (void)stopBrowsing;
- (void)browserWillChangePeople:(id)arg0;
- (void)browser:(SFAirDropBrowser *)arg0 didDeletePersonAtIndex:(unsigned int)arg1;
- (void)browser:(SFAirDropBrowser *)arg0 didInsertPersonAtIndex:(unsigned int)arg1;
- (void)browserDidChangePeople:(id)arg0;
- (void)wirelessSettingsDidChange:(NSDictionary *)arg0;
- (char)isBluetoothEnabled;
- (void)personCollectionViewCellDidStartTransfer:(id)arg0;
- (void)personCollectionViewCellDidTerminateTransfer:(id)arg0;
- (void)personCollectionViewCellDidFinishTransfer:(id)arg0;
- (void)subscribeToProgresses;
- (void)unsubscribeToProgresses;
- (void)startBrowsing;
- (void)updateContentAreaAnimated:(char)arg0;
- (void)adjustViewsToInterfaceOrientation:(int)arg0;
- (void)enableAirDropRequiredFeatures;
- (NSString *)wifiBtHelpTextLocalizedStringKey;
- (NSString *)attributedStringWithTitle:(NSString *)arg0 content:(char *)arg1;
- (char)isTetheredModeEnabled;
- (void)startTransferForPeople:(id)arg0;
- (void)generateSpecialPreviewPhotoForRequestID:(int)arg0;
- (void)subscribedProgress:(id)arg0 forPersonWithRealName:(NSString *)arg1;
- (void)unpublishedProgressForPersonWithRealName:(NSString *)arg0;
- (char)isValidPayload:(NSData *)arg0 toPerson:(NSString *)arg1 invalidMessage:(id *)arg2;
- (NSObject *)cellForPerson:(NSObject *)arg0;
- (char)createURLPayloadForData:(NSData *)arg0 ofType:(NSString *)arg1 withAttachmentName:(NSString *)arg2 description:(NSString *)arg3 previewImage:(UIImage *)arg4 completion:(id /* block */)arg5;
- (char)sharedItemsAvailable;
- (char)otherActivityViewPresented;

@end

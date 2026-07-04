/* Runtime dump - ATVMusicStoreAcquisitionController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRController.h>

@protocol ATVVideoCacheManagerDelegate;
@protocol BRSecureResource;

@class BRAuthenticator, BRMediaPlayerWaitControl, BRWaitPromptControl;
@interface ATVMusicStoreAcquisitionController : BRController <ATVVideoCacheManagerDelegate, BRSecureResource>
{
    char _initiatePlaybackOnCompletion;
    char _shouldRemovePlayerOnPop;
    <ATVMusicStoreAcquisitionControllerDelegate> * _delegate;
    NSDictionary * _offer;
    BRMediaPlayerWaitControl * _loadingControl;
    BRWaitPromptControl * _waitPrompt;
}

@property (weak, nonatomic) <ATVMusicStoreAcquisitionControllerDelegate> * delegate;
@property (retain, nonatomic) NSDictionary * offer;
@property (retain, nonatomic) BRMediaPlayerWaitControl * loadingControl;
@property (retain, nonatomic) BRWaitPromptControl * waitPrompt;
@property (nonatomic) char initiatePlaybackOnCompletion;
@property (nonatomic) char shouldRemovePlayerOnPop;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)_acquireWithOffer:(NSDictionary *)arg0 initiatePlaybackOnCompletion:(char)arg1;

- (BRAuthenticator *)secureResourceAuthenticator;
- (void)wasPushed;
- (void)wasPopped;
- (void)setWaitPrompt:(BRWaitPromptControl *)arg0;
- (void)_purchaseAcquired:(id)arg0;
- (ATVMusicStoreAcquisitionController *)initWithOffer:(NSDictionary *)arg0 initiatePlaybackOnCompletion:(char)arg1;
- (void)setInitiatePlaybackOnCompletion:(char)arg0;
- (char)initiatePlaybackOnCompletion;
- (ATVMusicStoreAcquisitionController *)initWithOffer:(NSDictionary *)arg0;
- (void)_acquire;
- (char)shouldRemovePlayerOnPop;
- (char)_attemptPlaybackInsteadOfAcquistion;
- (void)_enablePrompt:(NSString *)arg0;
- (void)_rentalAcquired:(id)arg0;
- (void)_acquisitionFailed:(id)arg0;
- (void)_redownloadAcquired:(id)arg0;
- (BRWaitPromptControl *)waitPrompt;
- (void)_attemptPlaybackOfPurchase:(id)arg0 ignoreParentalControlSettings:(char)arg1;
- (void)_presentExtrasForStoreItem:(NSObject *)arg0;
- (void)setShouldRemovePlayerOnPop:(char)arg0;
- (void)_mediaPlayerControllerActivated:(id)arg0;
- (void)_presentMediaAsset:(NSSet *)arg0 options:(NSDictionary *)arg1;
- (void)_dismissAfterPlayerIsActivated;
- (char)handleAssetReadyToPlay:(id /* <BRMediaAsset> */)arg0;
- (char)handleAssetFailedToLoad:(id /* <BRMediaAsset> */)arg0;
- (void)setOffer:(NSDictionary *)arg0;
- (BRMediaPlayerWaitControl *)loadingControl;
- (void)setLoadingControl:(BRMediaPlayerWaitControl *)arg0;
- (void)dealloc;
- (void)setDelegate:(<ATVMusicStoreAcquisitionControllerDelegate> *)arg0;
- (<ATVMusicStoreAcquisitionControllerDelegate> *)delegate;
- (NSString *)accessibilityLabel;
- (void).cxx_destruct;
- (void)_dismiss:(_UIInputViewSetPlacementDragToDismiss *)arg0;
- (NSDictionary *)offer;

@end

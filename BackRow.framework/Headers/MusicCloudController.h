/* Runtime dump - MusicCloudController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@protocol BRSecureResource;

@class BRAuthenticator;
@interface MusicCloudController : BRViewController <BRSecureResource>
{
    char _shouldAskToTurnOnCloud;
}

@property (nonatomic) char shouldAskToTurnOnCloud;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)musicCloudMainController;

- (void)layoutSubcontrols;
- (BRAuthenticator *)secureResourceAuthenticator;
- (void)wasPushed;
- (void)_handleConnectedStatus;
- (void)_handleFailedStatus;
- (id)MusicSyncStatusBinding;
- (void)updateBoundMusicSyncStatus;
- (void)bindMusicSyncStatusBindingToObject:(NSObject *)arg0 withKeyPath:(NSString *)arg1 options:(NSDictionary *)arg2;
- (char)shouldAskToTurnOnCloud;
- (void)setShouldAskToTurnOnCloud:(char)arg0;
- (MusicCloudController *)init;
- (NSString *)accessibilityLabel;
- (char)isAccessibilityElement;
- (void)_dataClientConnectionHandler:(id /* block */)arg0;

@end

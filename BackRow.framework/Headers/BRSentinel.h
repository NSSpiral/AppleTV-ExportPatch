/* Runtime dump - BRSentinel
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>

@class MEYTSigningAgent;
@interface BRSentinel : BRSingleton
{
    <BRMusicStoreImageDecryptionAgent> * _musicStoreImageDecryptionAgent;
    <BRMusicStoreImageDecryptionAgent> * _musicStoreTrickPlayImageDecryptionAgent;
    <BRSyncProgressAgent> * _syncProgressAgent;
    <BRYTSigningAgent> * _signingAgent;
    <BRDAAPListenerEnabler> * _daapListenerEnabler;
}

+ (BRSentinel *)singleton;
+ (void)setSingleton:(NSObject *)arg0;

- (void)setMusicStoreImageDecryptionAgent:(<BRMusicStoreImageDecryptionAgent> *)arg0;
- (void)setMusicStoreTrickPlayImageDecryptionAgent:(<BRMusicStoreImageDecryptionAgent> *)arg0;
- (void)setYTSigningAgent:(MEYTSigningAgent *)arg0;
- (<BRMusicStoreImageDecryptionAgent> *)musicStoreImageDecryptionAgent;
- (<BRMusicStoreImageDecryptionAgent> *)musicStoreTrickPlayImageDecryptionAgent;
- (void)setSyncProgressAgent:(<BRSyncProgressAgent> *)arg0;
- (<BRSyncProgressAgent> *)syncProgressAgent;
- (id)YTSigningAgent;
- (void)setDAAPListenerEnabler:(id)arg0;
- (<BRDAAPListenerEnabler> *)daapListenerEnabler;
- (id)urlBagFromStoreBag:(id)arg0;
- (void)dealloc;

@end

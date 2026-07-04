/* Runtime dump - SettingsTouchRemotePINEntryController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVPINController.h>
@interface SettingsTouchRemotePINEntryController : ATVPINController
{
    NSDictionary * _remoteInfo;
}

- (void)_pairingSucceeded:(id)arg0;
- (void)_pairingFailed:(id)arg0;
- (void)_pairingCanceled:(id)arg0;
- (SettingsTouchRemotePINEntryController *)initWithTouchRemoteInfo:(NSDictionary *)arg0;
- (void)dealloc;
- (void).cxx_destruct;

@end

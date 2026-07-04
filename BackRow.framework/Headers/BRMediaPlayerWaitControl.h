/* Runtime dump - BRMediaPlayerWaitControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl, BRDescriptionOverlayControl, BRTextControl, BRTransportControl, BRWaitSpinnerControl;
@interface BRMediaPlayerWaitControl : BRControl
{
    <BRMediaAsset> * _asset;
    NSDictionary * _offer;
    BRDescriptionOverlayControl * _descriptionControl;
    BRTextControl * _loadingControl;
    BRWaitSpinnerControl * _loadingSpinner;
    BRTextControl * _readyToPlayInNMinsControl;
    BRWaitSpinnerControl * _readyToPlayInNMinsSpinner;
    BRTextControl * _bandwidthHintControl;
    BRTextControl * _readyToPlayControl;
    BRTextControl * _authorizingControl;
    BRWaitSpinnerControl * _authorizingSpinner;
    BRTransportControl * _transport;
}

- (void)layoutSubcontrols;
- (BRMediaPlayerWaitControl *)initWithOffer:(NSDictionary *)arg0;
- (void)setReadyToPlay;
- (void)setReadyForPlayInNMins:(int)arg0;
- (void)setBandwidthHintForPreview:(char)arg0;
- (void)setAuthorizing;
- (void)_addFadeAnimationToControl:(BRControl *)arg0;
- (NSData *)_itemId;
- (void)_cacheManagerItemStateChanged:(NSNotification *)arg0;
- (void)dealloc;
- (NSString *)accessibilityLabel;
- (BRMediaPlayerWaitControl *)initWithAsset:(<BRMediaAsset> *)arg0;
- (void)_setup;

@end

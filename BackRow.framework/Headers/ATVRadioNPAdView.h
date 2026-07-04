/* Runtime dump - ATVRadioNPAdView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class ATVRoundProgressView, BRImageControl, BRMediaPlayer, BRURLImageProxy;
@interface ATVRadioNPAdView : BRControl
{
    BRMediaPlayer * _player;
    BRURLImageProxy * _adImageProxy;
    BRImageControl * _adImageView;
    NSString * _adImageID;
    ATVRoundProgressView * _progressView;
}

@property (weak, nonatomic) BRMediaPlayer * player;
@property (retain, nonatomic) BRURLImageProxy * adImageProxy;
@property (retain, nonatomic) BRImageControl * adImageView;
@property (retain, nonatomic) NSString * adImageID;
@property (retain, nonatomic) ATVRoundProgressView * progressView;

- (void)layoutSubcontrols;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (void)_playerStateChanged:(NSNotification *)arg0;
- (void)_playerCurrentAssetChanged:(NSNotification *)arg0;
- (void)_playbackProgressChanged:(NSNotification *)arg0;
- (void)setAdImageView:(BRImageControl *)arg0;
- (BRImageControl *)adImageView;
- (void)_registerPlayerNotifications;
- (void)_updateProgressView;
- (void)setAdImageProxy:(BRURLImageProxy *)arg0;
- (void)setAdImageID:(NSString *)arg0;
- (void)_imageUpdated:(id)arg0;
- (void)_imageUnavailable:(id)arg0;
- (NSString *)adImageID;
- (BRURLImageProxy *)adImageProxy;
- (void)dealloc;
- (ATVRadioNPAdView *)init;
- (void)_updateImageView;
- (void)setProgressView:(ATVRoundProgressView *)arg0;
- (ATVRoundProgressView *)progressView;
- (void).cxx_destruct;
- (void)setPlayer:(BRMediaPlayer *)arg0;
- (BRMediaPlayer *)player;

@end

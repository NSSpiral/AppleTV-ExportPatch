/* Runtime dump - ATVRadioScreenSaverInterstitials
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVScreenSaverInterstitials;

@class BRControl, BRMediaPlayer;
@interface ATVRadioScreenSaverInterstitials : NSObject <ATVScreenSaverInterstitials>
{
    BRMediaPlayer * _player;
}

@property (retain, nonatomic) BRMediaPlayer * player;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) char isPlayingInterstitial;

- (char)isPlayingInterstitial;
- (BRControl *)makeVisuals;
- (ATVRadioScreenSaverInterstitials *)initWithPlayer:(BRMediaPlayer *)arg0;
- (void).cxx_destruct;
- (void)setPlayer:(BRMediaPlayer *)arg0;
- (BRMediaPlayer *)player;

@end

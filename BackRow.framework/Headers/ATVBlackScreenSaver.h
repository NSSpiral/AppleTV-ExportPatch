/* Runtime dump - ATVBlackScreenSaver
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVScreenSaverPluginProtocol;

@class BRControl;
@interface ATVBlackScreenSaver : NSObject <ATVScreenSaverPluginProtocol>
{
    BRControl * _blackShroudOfDeath;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (BRControl *)screenSaverControl;
- (void)setScreenSaverAutoFired:(char)arg0;
- (char)usesVideoPlayback;
- (void)dealloc;
- (ATVBlackScreenSaver *)init;

@end

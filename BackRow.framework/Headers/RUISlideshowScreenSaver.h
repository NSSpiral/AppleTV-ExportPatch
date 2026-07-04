/* Runtime dump - RUISlideshowScreenSaver
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVScreenSaverPluginProtocol;

@class BRControl, RUISlideShowControl;
@interface RUISlideshowScreenSaver : NSObject <ATVScreenSaverPluginProtocol>
{
    RUISlideShowControl * _control;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (BRControl *)screenSaverControl;
- (void)setScreenSaverAutoFired:(char)arg0;
- (char)usesVideoPlayback;
- (RUISlideshowScreenSaver *)init;
- (void).cxx_destruct;

@end

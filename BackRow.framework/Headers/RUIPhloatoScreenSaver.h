/* Runtime dump - RUIPhloatoScreenSaver
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVScreenSaverPluginProtocol;

@class BRControl, RUIPhloatoControl;
@interface RUIPhloatoScreenSaver : NSObject <ATVScreenSaverPluginProtocol>
{
    RUIPhloatoControl * _control;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (BRControl *)screenSaverControl;
- (void)setScreenSaverAutoFired:(char)arg0;
- (char)usesVideoPlayback;
- (RUIPhloatoScreenSaver *)init;
- (void).cxx_destruct;
- (void)setProvider:(NSObject *)arg0;

@end

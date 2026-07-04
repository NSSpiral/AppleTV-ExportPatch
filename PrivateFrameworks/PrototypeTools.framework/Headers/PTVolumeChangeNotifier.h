/* Runtime dump - PTVolumeChangeNotifier
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTVolumeChangeNotifier : NSObject
{
    NSMutableSet * ringerVolumeChangedHandlers;
    NSMutableSet * ringerSilentChangedHandlers;
}

+ (PTVolumeChangeNotifier *)sharedInstance;

- (PTVolumeChangeNotifier *)init;
- (void).cxx_destruct;
- (void)ringerVolumeChanged:(NSNotification *)arg0;
- (void)addRingerSwitchChangedHandler:(id /* block */)arg0;
- (void)addVolumeChangedHandler:(id /* block */)arg0;
- (void)ringerSilentChanged;

@end

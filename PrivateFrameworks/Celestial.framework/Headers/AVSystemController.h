/* Runtime dump - AVSystemController
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVSystemController : NSObject
{
    struct AVSystemControllerPrivate * _priv;
}

+ (void)initialize;
+ (AVSystemController *)sharedAVSystemController;

- (char)allowUserToExceedEUVolumeLimit;
- (NSString *)volumeCategoryForAudioCategory:(NSString *)arg0;
- (char)getVolume:(float *)arg0 forCategory:(NSString *)arg1;
- (char)setVolumeTo:(float)arg0 forCategory:(NSString *)arg1;
- (char)didCancelRoutePicking:(id)arg0;
- (void)dealloc;
- (AVSystemController *)init;
- (char)setAttribute:(char *)arg0 forKey:(NSString *)arg1 error:(id *)arg2;
- (char)okToNotifyFromThisThread;
- (void)makeError:(id *)arg0 withDescription:(NSString *)arg1 code:(long)arg2;
- (char)setPickedRouteWithPassword:(NSString *)arg0 withPassword:(NSString *)arg1;
- (char)changeActiveCategoryVolumeBy:(float)arg0 fallbackCategory:(NSString *)arg1 resultVolume:(float *)arg2 affectedCategory:(id *)arg3;
- (char)setActiveCategoryVolumeTo:(float)arg0 fallbackCategory:(NSString *)arg1 resultVolume:(float *)arg2 affectedCategory:(id *)arg3;
- (char)getActiveCategoryVolume:(float *)arg0 andName:(id *)arg1 fallbackCategory:(NSString *)arg2;
- (char)setVibeIntensityTo:(float)arg0;
- (char)getVibeIntensity:(float *)arg0;
- (char)changeActiveCategoryVolumeBy:(float)arg0;
- (char)setActiveCategoryVolumeTo:(float)arg0;
- (char)changeActiveCategoryVolumeBy:(float)arg0 forRoute:(ATVRoute *)arg1 andDeviceIdentifier:(NSString *)arg2;
- (char)setActiveCategoryVolumeTo:(float)arg0 forRoute:(ATVRoute *)arg1 andDeviceIdentifier:(NSString *)arg2;
- (char)getActiveCategoryVolume:(float *)arg0 andName:(id *)arg1 forRoute:(ATVRoute *)arg2 andDeviceIdentifier:(NSString *)arg3;
- (char)changeVolumeForAccessoryBy:(float)arg0 forCategory:(NSString *)arg1 accessoryRoute:(id)arg2 andAccessoryDeviceIdentifier:(NSString *)arg3;
- (char)setVolumeForAccessoryTo:(float)arg0 forCategory:(NSString *)arg1 accessoryRoute:(id)arg2 andAccessoryDeviceIdentifier:(NSString *)arg3;
- (char)getVolumeForAccessory:(float *)arg0 forCategory:(NSString *)arg1 accessoryRoute:(id)arg2 andAccessoryDeviceIdentifier:(NSString *)arg3;
- (char)toggleActiveCategoryMuted;
- (char)toggleActiveCategoryMutedForRoute:(id)arg0 andDeviceIdentifier:(NSString *)arg1;
- (char)getActiveCategoryMuted:(char *)arg0;
- (char)getActiveCategoryMuted:(char *)arg0 forRoute:(ATVRoute *)arg1 andDeviceIdentifier:(NSString *)arg2;
- (char)changeVolumeBy:(float)arg0 forCategory:(NSString *)arg1;
- (char)setBTHFPRoute:(id)arg0 availableForVoicePrompts:(char)arg1;
- (char)willStartRoutePicking:(id)arg0;
- (char)getPortDiscoveryEnabled;
- (char)enablePortDiscovery:(char)arg0;
- (NSString *)routeForCategory:(NSString *)arg0;
- (NSString *)pickableRoutesForCategory:(NSString *)arg0 andMode:(id)arg1;
- (NSString *)pickableRoutesForCategory:(NSString *)arg0;
- (char)currentRouteHasVolumeControl;
- (void)handleServerDied;
- (void)postFullMuteDidChangeNotification:(void *)arg0;
- (void)postEffectiveVolumeNotification:(void *)arg0;
- (NSString *)attributeForKey:(NSString *)arg0;
- (char)getActiveCategoryVolume:(float *)arg0 andName:(id *)arg1;

@end

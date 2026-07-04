/* Runtime dump - CoreCECDeviceClient
 * Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreCECDeviceClient : CoreCECDevice

+ (char)supportsSecureCoding;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (CoreCECDeviceClient *)copyWithZone:(struct _NSZone *)arg0;
- (Class)classForCoder;
- (void)activeSourceStatusUpdated:(char)arg0;
- (char)refreshProperties:(NSDictionary *)arg0 ofDevice:(NSObject *)arg1 error:(id *)arg2;
- (char)deckControlSetDeckStatus:(unsigned int)arg0 error:(id *)arg1;
- (char)deckControlCommandWithMode:(unsigned int)arg0 target:(NSObject *)arg1 error:(id *)arg2;
- (char)deckControlPlayWithMode:(unsigned int)arg0 target:(NSObject *)arg1 error:(id *)arg2;
- (char)deckControlRefreshStatus:(id)arg0 requestType:(unsigned int)arg1 error:(id *)arg2;
- (char)makeActiveSourceWithTVMenus:(char)arg0 error:(id *)arg1;
- (char)performStandbyWithTargetDevice:(NSObject *)arg0 error:(id *)arg1;
- (char)refreshDevices:(id *)arg0;
- (char)requestActiveSource:(id *)arg0;
- (char)resignActiveSource:(id *)arg0;
- (char)setSystemAudioControlEnabled:(char)arg0 error:(id *)arg1;
- (char)systemAudioModeRequest:(unsigned int)arg0 error:(id *)arg1;

@end

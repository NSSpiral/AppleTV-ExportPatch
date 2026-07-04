/* Runtime dump - VCBitrateArbiter
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface VCBitrateArbiter : NSObject
{
    unsigned int _maxAllowedBitrate;
    unsigned int _maxAllowedBitrate2G;
    unsigned int _maxAllowedBitrate3G;
    unsigned int _maxAllowedBitrateLTE;
    unsigned int _maxAllowedBitrateWifi;
    unsigned int _maxAllowedAudioOnlyBitrate2G;
    unsigned int _maxAllowedAudioOnlyBitrate3G;
    unsigned int _maxAllowedAudioOnlyBitrateLTE;
    unsigned int _maxAllowedAudioOnlyBitrateWifi;
    NSMutableArray * supportedBitrateRules;
}

@property (readonly) unsigned int maxAllowedBitrate;
@property (readonly) unsigned int maxAllowedBitrate2G;
@property (readonly) unsigned int maxAllowedBitrate3G;
@property (readonly) unsigned int maxAllowedBitrateLTE;
@property (readonly) unsigned int maxAllowedBitrateWifi;

- (void)dealloc;
- (VCBitrateArbiter *)initWithDeviceRole:(int)arg0;
- (unsigned int)maxAllowedBitrateForConnection:(int)arg0 operatingMode:(int)arg1;
- (unsigned int)maxAllowedAudioOnlyBitrateForConnection:(int)arg0;
- (unsigned int)maxAllowedBitrate;
- (NSURLConnection *)maxAllowedBitrateRuleForConnection:(int)arg0;
- (unsigned int)maxAllowedCellularBitrate;
- (void)readHardwareValues;
- (void)readStoreBagValues;
- (void)readCarrierBundleValues;
- (void)createSupportedBitrateRuleSets;
- (unsigned int)maxAllowedBitrateForConnection:(int)arg0;
- (unsigned int)maxAllowedBitrate2G;
- (unsigned int)maxAllowedBitrate3G;
- (unsigned int)maxAllowedBitrateLTE;
- (unsigned int)maxAllowedBitrateWifi;

@end

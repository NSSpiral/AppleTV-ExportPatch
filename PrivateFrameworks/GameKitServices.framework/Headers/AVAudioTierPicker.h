/* Runtime dump - AVAudioTierPicker
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface AVAudioTierPicker : NSObject
{
    NSMutableArray * audioTiers;
    char isUsingCellular;
    AVAudioTier * defaultTier;
    AVAudioTier * fallbackTier;
    int mode;
}

@property (readonly) AVAudioTier * defaultTier;
@property (readonly) AVAudioTier * fallbackTier;

+ (char)shouldFilterTierForPayload:(NSData *)arg0 bitRate:(unsigned long)arg1 packetsPerBundle:(unsigned long)arg2 cellular:(char)arg3 operatingMode:(int)arg4;

- (void)dealloc;
- (AVAudioTierPicker *)initWithOperatingMode:(int)arg0 payloads:(NSArray *)arg1 sampleRate:(unsigned long)arg2 packetsPerBundle:(NSObject *)arg3 headerSize:(unsigned long)arg4 usingCellular:(char)arg5 defaultMaxCap:(unsigned long)arg6;
- (AVAudioTier *)defaultTier;
- (id)tierForNetworkBitrate:(unsigned long)arg0 duplication:(unsigned long)arg1;
- (NSData *)createTierForPayload:(NSData *)arg0 bitrate:(unsigned long)arg1 sampleRate:(unsigned long)arg2 packetsPerBundle:(unsigned long)arg3 headerSize:(unsigned long)arg4;
- (unsigned int)LargestCapTier:(unsigned long)arg0;
- (id)AudioTier:(unsigned long)arg0;
- (AVAudioTier *)fallbackTier;

@end

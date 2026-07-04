/* Runtime dump - AVAudioTier
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface AVAudioTier : NSObject
{
    unsigned long networkBitrate;
    unsigned long audioBitrate;
    unsigned long packetsPerBundle;
    AVAudioPayload * payload;
}

@property (readonly) unsigned long networkBitrate;
@property (readonly) unsigned long audioBitrate;
@property (readonly) unsigned long packetsPerBundle;
@property (readonly) AVAudioPayload * payload;

- (AVAudioPayload *)payload;
- (unsigned long)networkBitrate;
- (unsigned long)audioBitrate;
- (unsigned long)packetsPerBundle;
- (AVAudioTier *)initWithNetworkBitrate:(unsigned long)arg0 audioBitrate:(unsigned long)arg1 packetsPerBundle:(unsigned long)arg2 payload:(AVAudioPayload *)arg3;

@end

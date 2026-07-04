/* Runtime dump - VCCapabilities
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface VCCapabilities : NSObject <NSCoding>
{
    char isAudioEnabled;
    char isAudioPausedToStart;
    char isVideoEnabled;
    char isVideoPausedToStart;
    char isDuplexVideoOnly;
    char isDuplexAudioOnly;
    char isKeyExchangeEnabled;
    char isRelayEnabled;
    char isRelayForced;
    char requiresWifi;
    char isDTLSEnabled;
    unsigned int preferredAudioCodec;
    unsigned int actualAudioCodec;
    unsigned int preferredVideoCodec;
    unsigned int actualVideoCodec;
    int deviceRole;
}

@property char isAudioEnabled;
@property char isAudioPausedToStart;
@property char isVideoEnabled;
@property char isVideoPausedToStart;
@property char isDuplexVideoOnly;
@property char isDuplexAudioOnly;
@property char isKeyExchangeEnabled;
@property char isRelayEnabled;
@property char isRelayForced;
@property char requiresWifi;
@property char isDTLSEnabled;
@property unsigned int preferredAudioCodec;
@property unsigned int actualAudioCodec;
@property unsigned int preferredVideoCodec;
@property unsigned int actualVideoCodec;
@property int deviceRole;

+ (VCCapabilities *)AudioOnlyVCCapabilities;
+ (VCCapabilities *)VideoOnlyVCCapabilities;

- (VCCapabilities *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (VCCapabilities *)init;
- (NSString *)description;
- (char)isRelayEnabled;
- (NSDictionary *)newEncodedDictionary;
- (void)setDeviceRole:(int)arg0;
- (char)requiresWifi;
- (void)setRequiresWifi:(char)arg0;
- (VCCapabilities *)initWithEncodedDictionary:(NSDictionary *)arg0;
- (char)isDuplexAudioOnly;
- (char)isVideoEnabled;
- (int)deviceRole;
- (char)isAudioEnabled;
- (unsigned int)preferredAudioCodec;
- (void)setPreferredAudioCodec:(unsigned int)arg0;
- (char)isDTLSEnabled;
- (char)isKeyExchangeEnabled;
- (void)setIsDTLSEnabled:(char)arg0;
- (char)isAudioPausedToStart;
- (char)isVideoPausedToStart;
- (char)isRelayForced;
- (void)setActualAudioCodec:(unsigned int)arg0;
- (char)isDuplexVideoOnly;
- (void)setActualVideoCodec:(unsigned int)arg0;
- (unsigned int)actualVideoCodec;
- (void)setIsDuplexAudioOnly:(char)arg0;
- (void)setIsVideoEnabled:(char)arg0;
- (void)setIsVideoPausedToStart:(char)arg0;
- (void)setIsDuplexVideoOnly:(char)arg0;
- (void)decodeFromNSDictionary:(NSDictionary *)arg0;
- (void)setIsAudioEnabled:(char)arg0;
- (void)setIsKeyExchangeEnabled:(char)arg0;
- (unsigned int)actualAudioCodec;
- (unsigned int)preferredVideoCodec;
- (void)setPreferredVideoCodec:(unsigned int)arg0;
- (void)setIsAudioPausedToStart:(char)arg0;
- (void)setIsRelayEnabled:(char)arg0;
- (void)setIsRelayForced:(char)arg0;

@end

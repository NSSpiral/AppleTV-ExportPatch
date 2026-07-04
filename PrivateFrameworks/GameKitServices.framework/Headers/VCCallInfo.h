/* Runtime dump - VCCallInfo
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface VCCallInfo : NSObject
{
    unsigned long callID;
    NSData * connectionData;
    NSData * relayConnectionData;
    NSString * participantID;
    NSDictionary * relayRequest;
    NSMutableDictionary * relayRequestResponse;
    NSDictionary * relayUpdate;
    unsigned long auNumber;
    unsigned long maxBandwidth;
    unsigned long cellBandwith;
    int cellTech;
    char videoIsPaused;
    char isVideoQualityDegraded;
    double lastGoodVideoQualityTime;
    double lastBadVideoQualityTime;
    double lastVideoQualityDegradedSwitchTime;
    NSString * sdpString;
    SDPMini * sdp;
    char is4x;
    char isIOS;
    char usesInitialFECImplementation;
    char supportsDynamicMaxBitrate;
    char supportsSpecialAACBundle;
    char supportsSKEOptimization;
    unsigned long visibleRectCropping;
    char useNewPLCalc;
    double firstDegradedMeasure;
    double videoDegradedThreshold;
    unsigned char u8Version;
}

@property unsigned long callID;
@property (retain) NSData * connectionData;
@property (retain) NSData * relayConnectionData;
@property (retain) NSDictionary * relayRequest;
@property (retain) NSMutableDictionary * relayRequestResponse;
@property (retain) NSDictionary * relayUpdate;
@property (nonatomic) unsigned long auNumber;
@property (nonatomic) unsigned long maxBandwidth;
@property (nonatomic) unsigned long cellBandwith;
@property (copy, nonatomic) NSString * participantID;
@property (nonatomic) int cellTech;
@property (nonatomic) char isVideoQualityDegraded;
@property (nonatomic) char videoIsPaused;
@property (retain, nonatomic) NSString * sdpString;
@property (retain, nonatomic) SDPMini * sdp;
@property (readonly, nonatomic) char requiresImplicitFeatureString;
@property (readonly, nonatomic) char isIOS;
@property (readonly, nonatomic) char usesInitialFECImplementation;
@property (nonatomic) char supportsDynamicMaxBitrate;
@property (nonatomic) char supportsSKEOptimization;
@property (readonly, nonatomic) char supportsSpecialAACBundle;
@property (nonatomic) unsigned long visibleRectCropping;
@property (readonly, nonatomic) char useNewPLCalc;
@property (nonatomic) unsigned char u8Version;
@property (readonly) char supportsDynamicContentsRectWithAspectPreservation;

- (void)dealloc;
- (VCCallInfo *)init;
- (NSString *)participantID;
- (void)setParticipantID:(NSString *)arg0;
- (unsigned long)callID;
- (void)setCallID:(unsigned long)arg0;
- (unsigned long)maxBandwidth;
- (void)setMaxBandwidth:(unsigned long)arg0;
- (void)setSupportsSKEOptimization:(char)arg0;
- (char)videoIsPaused;
- (char)updateWithCurrentFramerate:(double)arg0 bitrate:(double)arg1 packetLossRate:(float)arg2 time:(double)arg3;
- (char)isVideoQualityDegraded;
- (char)supportsDynamicMaxBitrate;
- (void)setCellTech:(int)arg0;
- (void)setCellBandwith:(unsigned long)arg0;
- (unsigned long)cellBandwith;
- (void)resetLastGoodVideoQualityTime:(double)arg0;
- (char)supportSDPCompression;
- (NSData *)connectionData;
- (struct VoiceIOFarEndVersionInfo)audioVersionInfo:(char)arg0;
- (void)setVideoIsPaused:(char)arg0;
- (void)setRelayRequestResponse:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)relayRequestResponse;
- (void)setRelayUpdate:(NSDictionary *)arg0;
- (NSDictionary *)relayUpdate;
- (void)setRelayConnectionData:(NSData *)arg0;
- (NSData *)relayConnectionData;
- (char)supportsSKEOptimization;
- (unsigned char)u8Version;
- (void)setUserAgent:(NSString *)arg0;
- (char)usesInitialFECImplementation;
- (void)setConnectionData:(NSData *)arg0;
- (void)setU8Version:(unsigned char)arg0;
- (SDPMini *)sdp;
- (void)setSdp:(SDPMini *)arg0;
- (void)setSdpString:(NSString *)arg0;
- (NSString *)sdpString;
- (void)setSupportsDynamicMaxBitrate:(char)arg0;
- (void)setAuNumber:(unsigned long)arg0;
- (char)supportsSpecialAACBundle;
- (char)useNewPLCalc;
- (char)isIOS;
- (char)requiresImplicitFeatureString;
- (unsigned long)auNumber;
- (char)supportsDynamicContentsRectWithAspectPreservation;
- (NSDictionary *)relayRequest;
- (void)setRelayRequest:(NSDictionary *)arg0;
- (int)cellTech;
- (void)setIsVideoQualityDegraded:(char)arg0;
- (unsigned long)visibleRectCropping;
- (void)setVisibleRectCropping:(unsigned long)arg0;

@end

/* Runtime dump - PLAudioAgent
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLAudioAgent : PLAgent
{
    char _speakerIsPlayingAudio;
    NSMutableArray * _nsOutputNotifications;
    NSMutableArray * _nsRoutingNotifications;
    PLXPCListenerOperatorComposition * _audioAppXPCListener;
    PLXPCListenerOperatorComposition * _speakerAmpXPCListener;
    PLEntry * _entryRoutingOld;
    PLEntry * _entrySpeakerPowerOld;
    NSString * _audioHardware;
    NSDictionary * _audioPowerModel;
}

@property (readonly) NSMutableArray * nsOutputNotifications;
@property (readonly) NSMutableArray * nsRoutingNotifications;
@property (retain) PLXPCListenerOperatorComposition * audioAppXPCListener;
@property (retain) PLXPCListenerOperatorComposition * speakerAmpXPCListener;
@property (retain) PLEntry * entryRoutingOld;
@property char speakerIsPlayingAudio;
@property (retain) PLEntry * entrySpeakerPowerOld;
@property (readonly) NSString * audioHardware;
@property (readonly) NSDictionary * audioPowerModel;

+ (void)load;
+ (NSArray *)railDefinitions;
+ (NSArray *)accountingGroupDefinitions;
+ (NSArray *)entryEventPointDefinitions;
+ (NSArray *)entryEventForwardDefinitions;
+ (NSArray *)entryEventBackwardDefinitions;
+ (NSArray *)entryEventNoneDefinitions;
+ (PLAudioAgent *)entryEventPointDefinitionAudioApp;
+ (PLAudioAgent *)entryEventPointDefinitionSpeakerAmp;
+ (NSObject *)entryEventForwardDefinitionOutput;
+ (PLAudioAgent *)entryEventForwardDefinitionRouting;

- (PLAudioAgent *)init;
- (char)active;
- (void)log;
- (void).cxx_destruct;
- (void)initOperatorDependancies;
- (void)setupAVSystemController;
- (NSMutableArray *)nsOutputNotifications;
- (void)logEventForwardOutput;
- (void)logEventForwardRouting;
- (NSString *)returnVolumeOrOutPutCategory:(int)arg0;
- (NSString *)audioHardware;
- (void)logEventPointAudioApp:(id)arg0;
- (void)setAudioAppXPCListener:(PLXPCListenerOperatorComposition *)arg0;
- (void)logEventPointSpeakerAmp:(id)arg0;
- (void)setSpeakerAmpXPCListener:(PLXPCListenerOperatorComposition *)arg0;
- (void)createAudioAccountingEvents:(id)arg0;
- (void)createAirPlayAccountingEvents:(id)arg0;
- (void)createCarPlayAccountingEvents:(id)arg0;
- (void)createBluetoothAccountingEvents:(id)arg0;
- (void)modelAudioPowerSpeaker:(id)arg0;
- (char)muted;
- (void)modelAudioPower;
- (int)nowPlayingAppPID;
- (id)activeRoute;
- (NSString *)outputCategory;
- (char)headphonesConnected;
- (char)headsetHasInput;
- (PLEntry *)entryRoutingOld;
- (void)setEntryRoutingOld:(PLEntry *)arg0;
- (double)audioPowerForRoute:(id)arg0 forVolume:(double)arg1;
- (double)modelAudioPowerForK94:(double)arg0;
- (void)setSpeakerIsPlayingAudio:(char)arg0;
- (NSDictionary *)audioPowerModel;
- (void)setEntrySpeakerPowerOld:(PLEntry *)arg0;
- (PLEntry *)entrySpeakerPowerOld;
- (char)speakerIsPlayingAudio;
- (double)convertSpeakerProtectionModeledPowerToTotalSpeakerPower:(double)arg0;
- (NSMutableArray *)nsRoutingNotifications;
- (PLXPCListenerOperatorComposition *)audioAppXPCListener;
- (PLXPCListenerOperatorComposition *)speakerAmpXPCListener;
- (NSNumber *)volume;

@end

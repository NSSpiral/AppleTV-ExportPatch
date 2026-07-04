/* Runtime dump - VCHardwareRules
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface VCHardwareRules : NSObject
{
    NSMutableDictionary * supportedEncodingRules;
    NSMutableDictionary * supportedDecodingRules;
    int encodeScore;
    int decodeScore;
    char encodeHiDef;
    char decodeHiDef;
    NSString * machineName;
    NSMutableArray * supportedPayloads;
}

@property (readonly) int encodeScore;
@property (readonly) int decodeScore;
@property (readonly) char encodeHiDef;
@property (readonly) char decodeHiDef;
@property (readonly) NSString * machineName;
@property (readonly) NSMutableArray * supportedPayloads;
@property (readonly) NSMutableDictionary * supportedEncodingRules;
@property (readonly) NSMutableDictionary * supportedDecodingRules;

+ (VCHardwareRules *)VCHardwareRulesSingleton;

- (void)dealloc;
- (VCHardwareRules *)init;
- (NSMutableArray *)supportedPayloads;
- (NSMutableDictionary *)supportedEncodingRules;
- (NSMutableDictionary *)supportedDecodingRules;
- (id)supportedEncodingSizesForBitrate:(id)arg0 andPayload:(int)arg1;
- (id)supportedDecodingSizesForBitrate:(id)arg0 andPayload:(int)arg1;
- (id)supportedEncodingRulesForBitrate:(id)arg0 andPayload:(int)arg1;
- (id)supportedDecodingRulesForBitrate:(id)arg0 andPayload:(int)arg1;
- (void)createSupportedPayloads;
- (void)createSupportedRuleSets;
- (void)setPreferredVideoRules;
- (char)canDoHiDefEncoding;
- (int)getHardwareScore;
- (char)canDoHiDefDecoding;
- (char)getBestFrameWidth:(int *)arg0 frameHeight:(int *)arg1 frameRate:(float *)arg2 isEncoding:(char)arg3 forAspectRatio:(double)arg4;
- (NSData *)supportedEncodingRulesFromDictionaryForPayload:(int)arg0;
- (NSData *)supportedDecodingRulesFromDictionaryForPayload:(int)arg0;
- (char)getBestFrameWidth:(int *)arg0 frameHeight:(int *)arg1 frameRate:(float *)arg2 isEncoding:(char)arg3 forAspectRatio:(double)arg4 forPayload:(int)arg5;
- (float)getBestFramerateForFrameWidth:(int)arg0 frameHeight:(int)arg1 isEncoding:(char)arg2 forPayload:(int)arg3;
- (void)getBestEncodingFrameWidth:(int *)arg0 frameHeight:(int *)arg1 frameRate:(float *)arg2;
- (NSData *)supportedEncodingSizesFromDictionaryForPayload:(int)arg0;
- (NSArray *)filterRules:(id)arg0 byBitrateRule:(NSObject *)arg1;
- (NSData *)supportedDecodingSizesFromDictionaryForPayload:(int)arg0;
- (void)getBestFrameWidth:(int *)arg0 frameHeight:(int *)arg1 frameRate:(float *)arg2 isEncoding:(char)arg3;
- (float)getBestFramerateForFrameWidth:(int)arg0 frameHeight:(int)arg1 isEncoding:(char)arg2;
- (void)calculateEncodingScore;
- (void)calculateDecodingScore;
- (NSObject *)getCPUTypeStringForMachineType:(int)arg0;
- (int)getScoreFromHardwareInfo:(NSDictionary *)arg0 cpuFamily:(int)arg1 frequency:(int)arg2 numProcs:(int)arg3;
- (char)isGVAEncoderAvailable;
- (int)getCPUFamilyType;
- (char)isMacBookAirModel;
- (char)isMachineNewerThanSandybridge:(int)arg0;
- (char)isHiDefCapapable;
- (char)useSoftFramerateSwitching;
- (void)getBestPreviewFrameWidth:(int *)arg0 frameHeight:(int *)arg1 frameRate:(float *)arg2;
- (void)getBestDecodingFrameWidth:(int *)arg0 frameHeight:(int *)arg1 frameRate:(float *)arg2;
- (float)getBestEncodingFrameRateForFrameWidth:(int)arg0 frameHeight:(int)arg1;
- (float)getBestDecodingFrameRateForFrameWidth:(int)arg0 frameHeight:(int)arg1;
- (void)resetEncodingRulesForCamera:(unsigned int)arg0;
- (int)encodeScore;
- (int)decodeScore;
- (char)encodeHiDef;
- (char)decodeHiDef;
- (NSString *)machineName;

@end

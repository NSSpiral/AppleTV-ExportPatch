/* Runtime dump - AVAudioSettingsValueConstrainer
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAudioSettingsValueConstrainer : NSObject
{
    struct AudioStreamBasicDescription _inputASBD;
    struct AudioStreamBasicDescription _outputASBD;
    struct OpaqueAudioConverter * _audioConverter;
    unsigned long _outputDataRate;
    char _needNewConverter;
    char _needAvailableSampleRates;
    char _needApplicableParameters;
    NSArray * _availableOutputSampleRates;
    NSMutableArray * _availableOutputDataRates;
    NSMutableArray * _applicableOutputSampleRatesForDataRate;
    NSMutableArray * _applicableOutputDataRatesForSampleRate;
}

@property (nonatomic) float outputSampleRate;
@property (nonatomic) unsigned long outputFormat;
@property (nonatomic) unsigned long outputFormatFlags;
@property (nonatomic) unsigned long outputBitsPerChannel;
@property (nonatomic) unsigned long outputChannelCount;
@property (nonatomic) unsigned long outputDataRate;

- (void)setInputPropertiesFromASBD:(struct AudioStreamBasicDescription)arg0;
- (void)setOutputFormatFlags:(unsigned long)arg0;
- (void)setOutputBitsPerChannel:(unsigned long)arg0;
- (void)setOutputSampleRate:(float)arg0;
- (void)setOutputChannelCount:(unsigned long)arg0;
- (void)setOutputDataRate:(unsigned long)arg0;
- (unsigned long)availableOutputChannelCountForDesiredChannelCount:(unsigned long)arg0 rounding:(int)arg1;
- (float)applicableOutputSampleRateForDesiredSampleRate:(float)arg0 rounding:(int)arg1;
- (void)_buildAudioConverter;
- (id)_fetchApplicableOutputDataRates;
- (void)_buildAvailableSampleRates;
- (void)_buildApplicableDataRatesForSampleRates;
- (void)_bringUpToDate;
- (unsigned long)outputDataRate;
- (float)_getAvailableOutputSampleRateFor:(float)arg0 rounding:(int)arg1;
- (float)outputSampleRate;
- (unsigned long)outputFormatFlags;
- (unsigned long)outputBitsPerChannel;
- (unsigned long)outputChannelCount;
- (unsigned long)outputFormat;
- (void)setOutputFormat:(unsigned long)arg0;
- (void)dealloc;
- (AVAudioSettingsValueConstrainer *)init;
- (void)finalize;

@end

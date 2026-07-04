/* Runtime dump - AVAudioUnitSampler
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioUnitSampler : AVAudioUnitMIDIInstrument

@property (nonatomic) float stereoPan;
@property (nonatomic) float masterGain;
@property (nonatomic) float globalTuning;

- (AVAudioUnitSampler *)initWithAudioComponentDescription:(struct AudioComponentDescription)arg0;
- (char)loadInstrumentAtURL:(NSURL *)arg0 error:(id *)arg1;
- (char)loadSoundBankInstrumentAtURL:(NSURL *)arg0 program:(unsigned char)arg1 bankMSB:(unsigned char)arg2 bankLSB:(unsigned char)arg3 error:(id *)arg4;
- (char)loadAudioFilesAtURLs:(id)arg0 error:(id *)arg1;
- (float)stereoPan;
- (float)masterGain;
- (float)globalTuning;
- (void)setStereoPan:(float)arg0;
- (void)setMasterGain:(float)arg0;
- (void)setGlobalTuning:(float)arg0;
- (AVAudioUnitSampler *)init;

@end

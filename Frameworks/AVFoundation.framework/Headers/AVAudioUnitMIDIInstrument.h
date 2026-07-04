/* Runtime dump - AVAudioUnitMIDIInstrument
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioUnitMIDIInstrument : AVAudioUnit

- (AVAudioUnitMIDIInstrument *)initWithAudioComponentDescription:(struct AudioComponentDescription)arg0;
- (void)startNote:(unsigned char)arg0 withVelocity:(unsigned char)arg1 onChannel:(unsigned char)arg2;
- (void)stopNote:(unsigned char)arg0 onChannel:(unsigned char)arg1;
- (void)sendController:(unsigned char)arg0 withValue:(unsigned char)arg1 onChannel:(unsigned char)arg2;
- (void)sendPitchBend:(unsigned short)arg0 onChannel:(unsigned char)arg1;
- (void)sendPressure:(unsigned char)arg0 onChannel:(unsigned char)arg1;
- (void)sendPressureForKey:(unsigned char)arg0 withValue:(unsigned char)arg1 onChannel:(unsigned char)arg2;
- (void)sendProgramChange:(unsigned char)arg0 onChannel:(unsigned char)arg1;
- (void)sendProgramChange:(unsigned char)arg0 bankMSB:(unsigned char)arg1 bankLSB:(unsigned char)arg2 onChannel:(unsigned char)arg3;
- (void)sendMIDIEvent:(unsigned char)arg0 data1:(unsigned char)arg1 data2:(unsigned char)arg2;
- (void)sendMIDIEvent:(unsigned char)arg0 data1:(unsigned char)arg1;
- (void)sendMIDISysExEvent:(NSObject *)arg0;

@end

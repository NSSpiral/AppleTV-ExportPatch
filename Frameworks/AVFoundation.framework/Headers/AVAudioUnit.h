/* Runtime dump - AVAudioUnit
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioUnit : AVAudioNode

@property (readonly, nonatomic) struct AudioComponentDescription audioComponentDescription;
@property (readonly, nonatomic) struct OpaqueAudioComponentInstance * audioUnit;
@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) NSString * manufacturerName;
@property (readonly, nonatomic) unsigned int version;

- (AVAudioUnit *)initWithAudioComponentDescription:(struct AudioComponentDescription)arg0;
- (float)valueForParam:(unsigned long)arg0;
- (BOOL)setValue:(float)arg0 forParam:(unsigned long)arg1;
- (struct OpaqueAudioComponentInstance *)audioUnit;
- (char)loadAudioUnitPresetAtURL:(NSURL *)arg0 error:(id *)arg1;
- (struct AudioComponentDescription)audioComponentDescription;
- (NSString *)name;
- (unsigned int)version;
- (NSString *)manufacturerName;

@end

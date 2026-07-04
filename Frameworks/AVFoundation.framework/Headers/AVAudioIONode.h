/* Runtime dump - AVAudioIONode
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioIONode : AVAudioNode

@property (readonly, nonatomic) double presentationLatency;
@property (readonly, nonatomic) struct OpaqueAudioComponentInstance * audioUnit;

- (double)presentationLatency;
- (struct OpaqueAudioComponentInstance *)audioUnit;

@end

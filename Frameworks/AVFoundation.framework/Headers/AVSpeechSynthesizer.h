/* Runtime dump - AVSpeechSynthesizer
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVSpeechSynthesizer : NSObject
{
    char speaking;
    char paused;
    <AVSpeechSynthesizerDelegate> * delegate;
}

@property (nonatomic) <AVSpeechSynthesizerDelegate> * delegate;
@property (readonly, nonatomic) char speaking;
@property (readonly, nonatomic) char paused;

+ (void)initialize;

- (void)setDelegate:(<AVSpeechSynthesizerDelegate> *)arg0;
- (<AVSpeechSynthesizerDelegate> *)delegate;
- (char)isSpeaking;
- (char)isPaused;
- (void)speakUtterance:(id)arg0;
- (char)pauseSpeakingAtBoundary:(int)arg0;
- (char)continueSpeaking;
- (char)stopSpeakingAtBoundary:(int)arg0;

@end

/* Runtime dump - AXHALiveListenController
 * Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXHALiveListenController : NSObject
{
    char isListening;
    char _didInitializeAudioUnit;
    struct OpaqueAudioComponentInstance * rioUnit;
    struct OpaqueAudioComponentInstance * mixerUnit;
}

@property (readonly, nonatomic) struct OpaqueAudioComponentInstance * rioUnit;
@property (readonly, nonatomic) struct OpaqueAudioComponentInstance * mixerUnit;
@property (nonatomic) char isListening;
@property (nonatomic) char didInitializeAudioUnit;

- (void)dealloc;
- (AXHALiveListenController *)init;
- (float)audioLevel;
- (void)audioSessionWasInterrupted:(id)arg0;
- (void)mediaServicesWereReset:(NSSet *)arg0;
- (void)audioRouteDidChange:(NSDictionary *)arg0;
- (char)stopListeningWithError:(id *)arg0;
- (char)isListening;
- (char)startListeningWithError:(id *)arg0;
- (char)didInitializeAudioUnit;
- (void)setDidInitializeAudioUnit:(char)arg0;
- (void)setIsListening:(char)arg0;
- (struct OpaqueAudioComponentInstance *)rioUnit;
- (struct OpaqueAudioComponentInstance *)mixerUnit;

@end

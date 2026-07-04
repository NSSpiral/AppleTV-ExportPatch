/* Runtime dump - AirPlayReceiverContext
 * Image: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

@interface AirPlayReceiverContext : NSObject
{
    struct AirPlayReceiverSessionPrivate * _session;
    unsigned char _receiverUIStarted;
    unsigned int _receiverUISessionID;
    unsigned char _audioSessionActive;
    unsigned char _sessionStarted;
    struct ? _mainAudioCtx;
    struct ? _altAudioCtx;
    struct IONotificationPort * _hidNotifier;
    unsigned int _hidIterator;
    NSMutableSet * _hidDevices;
    unsigned int _powerAssertion;
}

- (void)_handleAudioInterruption:(id)arg0;
- (void)_handleMediaServicesWereReset:(NSSet *)arg0;

@end

/* Runtime dump - FigCaptureClientSessionMonitor
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureClientSessionMonitor : NSObject
{
    id _applicationStateHandler;
    id _interruptionHandler;
    struct opaqueCMSession * _session;
    int _pid;
    struct OpaqueFigSimpleMutex * _stateChangeLock;
    int _applicationState;
    int _interruptionState;
    id _applicationStateChangeNotificationToken;
    id _interruptionStateChangeNotificationToken;
    char _invalid;
    char _haveExternalCMSession;
    char _stateChangeCallbacksEnabled;
    int _clientType;
}

@property (readonly) struct opaqueCMSession * session;

+ (void)initialize;
+ (void)startPrewarmingMonitor;
+ (NSObject *)_stringForCMSessionState:(unsigned int)arg0;
+ (void)stopPrewarmingMonitor;

- (void)dealloc;
- (FigCaptureClientSessionMonitor *)init;
- (void)invalidate;
- (long)observeSession:(struct opaqueCMSession *)arg0;
- (FigCaptureClientSessionMonitor *)initWithPID:(int)arg0 applicationStateHandler:(id /* block */)arg1 interruptionHandler:(/* block */ id)arg2;
- (int)_queryClientType;
- (long)_createAndObserveCMSession;
- (void)_deregisterAndReleaseCMSession;
- (long)_registerCMSessionForObservation;
- (void)_handleCMSessionManagerNofification:(id)arg0;
- (long)_updateApplicationState;
- (void)_handleApplicationStateChange:(unsigned int)arg0;
- (void)_handleAudioInterruptionChange:(int)arg0;
- (struct opaqueCMSession *)session;

@end

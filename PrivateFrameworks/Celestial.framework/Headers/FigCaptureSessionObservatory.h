/* Runtime dump - FigCaptureSessionObservatory
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureSessionObservatory : NSObject
{
    NSMapTable * _captureSessionsStorage;
    NSHashTable * _registeredObservers;
    NSObject<OS_dispatch_queue> * _queue;
    long long _lastRunningIdentifier;
}

+ (void)initialize;
+ (FigCaptureSessionObservatory *)sharedObservatory;

- (void)dealloc;
- (FigCaptureSessionObservatory *)init;
- (void)captureSessionWasCreated:(void *)arg0;
- (void)registerObserver:(NSObject *)arg0;
- (void)unregisterObserver:(NSObject *)arg0;
- (void)_registerObserver:(NSObject *)arg0;
- (void)_setRunning:(char)arg0 forCaptureSession:(struct OpaqueFigCaptureSession *)arg1;

@end

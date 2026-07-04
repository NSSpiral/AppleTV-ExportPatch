/* Runtime dump - PTXParallaxController
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTXParallaxController : NSObject <_UISettingsKeyObserver>
{
    NSHashTable * _observers;
    CMMotionManager * _motionManager;
    CADisplayLink * _displayLink;
    PTXParallaxEngineSettings * _settings;
    PTXParallaxReferenceFrame * _referenceFrame;
    double _startUpdatesTimestamp;
    char _generatingUpdates;
    NSMutableSet * _suspendReasons;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (PTXParallaxController *)init;
- (void)stop;
- (void)removeObserver:(NSObject *)arg0;
- (void)start;
- (void)settings:(PTXParallaxEngineSettings *)arg0 changedValueForKey:(NSString *)arg1;
- (void)_startOrStopGeneratingUpdates;
- (void)_stopGeneratingUpdates;
- (char)_shouldGenerateUpdates;
- (void)_startGeneratingUpdates;
- (void).cxx_destruct;
- (void)_tearDownDisplayLink;
- (void)addObserver:(NSObject *)arg0;
- (void)resume:(SATimerResume *)arg0;
- (PTXParallaxController *)initWithParallaxEngineSettings:(NSDictionary *)arg0;
- (void)_setUpDisplayLink;
- (void)_sendClearOffset;
- (void)_onDisplayLink:(CADisplayLink *)arg0;
- (void)_sendOffset:(struct CGPoint)arg0 lockStatus:(int)arg1 lockStrength:(float)arg2;
- (char)_suspended;
- (void)suspend:(id)arg0;
- (void)resetReferenceFrame;
- (void)_defaultsChanged:(NSNotification *)arg0;

@end

/* Runtime dump - AXBackBoardServer
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXBackBoardServer : AXServer
{
    char _overrideGestureRecognition;
    NSMutableArray * _eventListeners;
}

@property (nonatomic) char invertColorsEnabled;
@property (nonatomic) char inPreboardMode;

+ (NSXPCConnection *)server;

- (void)dealloc;
- (AXBackBoardServer *)init;
- (char)inPreboardMode;
- (void)_didConnectToServer;
- (void)_willClearServer;
- (NSString *)_serviceName;
- (char)_shouldDispatchLocally;
- (char)isGuidedAccessActive;
- (id)_handleEventListener:(id)arg0;
- (void)registerSiriViewServicePID:(int)arg0;
- (void)registerAccessibilityUIServicePID:(int)arg0;
- (void)setInPreboardMode:(char)arg0;
- (id)backboardServiceInstance;
- (void)registerAssistiveTouchPID:(int)arg0;
- (void)registerEventListener:(id)arg0 withIdentifierCallback:(/* block */ id)arg1;
- (id)_springboardParametersForGuidedAccessAvailability;
- (void)registerGestureConflictWithZoom:(id)arg0;
- (void)adjustSystemZoom:(int)arg0;
- (void)setLockScreenDimTimerEnabled:(char)arg0;
- (char)invertColorsEnabled;
- (void)setInvertColorsEnabled:(char)arg0;
- (void)postEvent:(NSObject *)arg0 afterNamedTap:(id)arg1 includeTaps:(id)arg2;
- (void)postEvent:(NSObject *)arg0 systemEvent:(char)arg1;
- (unsigned int)contextIdForPoint:(struct CGPoint)arg0;
- (struct CGRect)convertFrame:(NSObject *)arg0 forContextId:(SEL)arg1;
- (void)userEventOccurred;
- (void)wakeUpDeviceIfNecessary;
- (void)setVoiceOverItemChooserVisible:(char)arg0;
- (void)removeEventListener:(NetflixNrdObjectCallback *)arg0;
- (void)setHearingAidControlIsVisible:(char)arg0;
- (void)setAccessibilityPreferenceAsMobile:(id)arg0 value:(NSObject *)arg1 notification:(NSNotification *)arg2;
- (char)requestGuidedAccessSession:(char)arg0 appID:(NSObject *)arg1;
- (char)isGuidedAccessSelfLockedToApp:(id)arg0;
- (void)toggleGuidedAccess;
- (void)jetsamThirdPartyApps;
- (unsigned int)guidedAccessAvailability;

@end

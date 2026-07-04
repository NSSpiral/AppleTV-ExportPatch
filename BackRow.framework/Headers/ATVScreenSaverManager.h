/* Runtime dump - ATVScreenSaverManager
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>

@class ATVScreenSaverPrefetchTask, BRWindow;
@interface ATVScreenSaverManager : BRSingleton
{
    NSTimer * _timer;
    double _interval;
    char _showAirPlayCRDInsteadOfSaver;
    NSTimer * _airPlayCRDModeTimer;
    BRWindow * _window;
    long _state;
    char _enabled;
    char _screenSaverPosted;
    char _handlingTimeoutChangeNotification;
    ATVScreenSaverPrefetchTask * _prefetchTask;
    char _screenSaverAutoFired;
    char _postTopMenuEventOnDismiss;
    NSMutableArray * _airPlayCRDMotionPattern;
    unsigned int _airPlayCRDModePositionIndex;
}

@property (nonatomic) char postTopMenuEventOnDismiss;
@property (retain, nonatomic) NSMutableArray * airPlayCRDMotionPattern;
@property (nonatomic) unsigned int airPlayCRDModePositionIndex;

+ (ATVScreenSaverManager *)singleton;
+ (NSDictionary *)screenSaverMetadata;
+ (void)setSingleton:(NSObject *)arg0;
+ (NSString *)screenSaverMetadataCachePath;
+ (NSString *)_screenSaverFacesCachePath;
+ (void)sortThemeTitleKeysIn:(id)arg0;

- (char)screenSaverRequiresPrefetch;
- (char)isScreenSaverShowing;
- (void)_holdOffScreenSaver:(id)arg0;
- (void)_fadeFinished;
- (void)setAirPlayCRDModePositionIndex:(unsigned int)arg0;
- (void)_setTimerInterval;
- (void)_screenSaverControllerActivate:(id)arg0;
- (void)_screenSaverControllerDeactivate:(id)arg0;
- (void)_updateActivity:(id)arg0;
- (void)_screenSaverIntervalChanged:(NSNotification *)arg0;
- (void)_airPlayCRDModeChanged:(NSNotification *)arg0;
- (void)_serverStatusChanged:(NSNotification *)arg0;
- (void)_screenSaverArchiveChanged:(NSNotification *)arg0;
- (void)_storeAccountChanged:(NSNotification *)arg0;
- (void)_startRepeatingPrefetchTask;
- (void)_dismissScreenSaver:(id)arg0;
- (void)_createTimer;
- (void)_showAirPlayCRDMode;
- (void)showScreenSaver;
- (char)screenSaverPrefetchActive;
- (char)postTopMenuEventOnDismiss;
- (void)setPostTopMenuEventOnDismiss:(char)arg0;
- (NSMutableArray *)airPlayCRDMotionPattern;
- (void)setAirPlayCRDMotionPattern:(NSMutableArray *)arg0;
- (unsigned int)airPlayCRDModePositionIndex;
- (id)_screenSaverPlugInControl;
- (void)_hideAirPlayCRDMode;
- (void)_screenSaverTimerFired:(id)arg0;
- (void)_airPlayCRDModeTimerFired;
- (void)_postAirPlayCRDModeHUD;
- (void)_startOneTimePrefetchTask:(NSObject *)arg0;
- (void)_stopPrefetchTask;
- (void)_prefetchComplete:(id)arg0;
- (void)dealloc;
- (ATVScreenSaverManager *)init;
- (void)enable;
- (void)_stopTimer;

@end

/* Runtime dump - TUStatusBarManager
 * Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUStatusBarManager : NSObject
{
    char _inCallServiceActive;
    <TUStatusBarManagerDelegate> * _delegate;
    NSString * _currentStatusBarString;
    NSTimer * _callDurationUpdateTimer;
}

@property (nonatomic) <TUStatusBarManagerDelegate> * delegate;
@property (retain, nonatomic) NSString * currentStatusBarString;
@property (readonly, retain, nonatomic) TUCall * displayedCall;
@property (retain, nonatomic) NSTimer * callDurationUpdateTimer;
@property (nonatomic) char inCallServiceActive;

- (void)dealloc;
- (void)setDelegate:(<TUStatusBarManagerDelegate> *)arg0;
- (TUStatusBarManager *)init;
- (<TUStatusBarManagerDelegate> *)delegate;
- (void)startListeningForNotifications;
- (TUCall *)displayedCall;
- (NSTimer *)callDurationUpdateTimer;
- (void)setCallDurationUpdateTimer:(NSTimer *)arg0;
- (void)updateStatusBarState;
- (void)emergencyCallBackModeChangedNotification;
- (void)updateStatusBarStateForCall:(id)arg0;
- (void)clearStatusBarInCallState;
- (char)isInCallServiceActive;
- (char)shouldSetStatusBarOverridesForCall:(id)arg0;
- (void)setStatusBarStyleOverridesForCall:(id)arg0;
- (void)updateStatusBarCallDuration;
- (void)updateStatusBarDurationForCall:(id)arg0;
- (id)statusBarPreambleForCall:(id)arg0;
- (void)setCurrentStatusBarString:(NSString *)arg0;
- (NSString *)currentStatusBarString;
- (void)setInCallServiceActive:(char)arg0;

@end

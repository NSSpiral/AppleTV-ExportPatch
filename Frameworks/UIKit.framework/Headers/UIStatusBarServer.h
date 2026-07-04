/* Runtime dump - UIStatusBarServer
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarServer : NSObject
{
    <UIStatusBarServerClient> * _statusBar;
    struct __CFRunLoopSource * _source;
}

@property (retain, nonatomic) <UIStatusBarServerClient> * statusBar;

+ (void)runServer;
+ (void)addStyleOverrides:(int)arg0;
+ (void)removeStyleOverrides:(int)arg0;
+ (void)postGlowAnimationState:(char)arg0 forStyle:(int)arg1;
+ (void)postDoubleHeightStatusString:(NSString *)arg0 forStyle:(int)arg1;
+ (void)addStatusBarItem:(int)arg0;
+ (void)removeStatusBarItem:(int)arg0;
+ (double)getGlowAnimationEndTimeForStyle:(int)arg0;
+ (unsigned int)_serverPort;
+ (unsigned int)_publisherPort;
+ (void)postStatusBarData:(struct ? *)arg0 withActions:(struct ?)arg1;
+ (void)postStatusBarOverrideData:(struct ? *)arg0;
+ (void)permanentizeStatusBarOverrideData;
+ (struct ? *)getStatusBarData;
+ (struct ? *)getStatusBarOverrideData;
+ (int)getStyleOverrides;
+ (char)getGlowAnimationStateForStyle:(int)arg0;
+ (NSObject *)getDoubleHeightStatusStringForStyle:(int)arg0;

- (void)dealloc;
- (<UIStatusBarServerClient> *)statusBar;
- (void)setStatusBar:(<UIStatusBarServerClient> *)arg0;
- (void)_receivedStatusBarData:(struct ? *)arg0 actions:(int)arg1;
- (void)_receivedStyleOverrides:(int)arg0;
- (void)_receivedGlowAnimationState:(char)arg0 forStyle:(int)arg1;
- (void)_receivedDoubleHeightStatus:(char *)arg0 forStyle:(int)arg1;
- (UIStatusBarServer *)initWithStatusBar:(<UIStatusBarServerClient> *)arg0;

@end

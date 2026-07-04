/* Runtime dump - MKSystemController
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKSystemController : NSObject

+ (MKSystemController *)sharedInstance;

- (char)supportsPitchAPI;
- (char)requiresRTT;
- (char)overrideBlurStyle;
- (char)supports3DImagery;
- (char)supports3DMaps;
- (char)isDevicePluggedIn;
- (char)isHiDPI;
- (char)isWifiEnabled;
- (char)openURL:(NSURL *)arg0 bundleIdentifier:(NSString *)arg1;
- (char)shouldRateLimitSearchCompletions;
- (int)userInterfaceIdiom;
- (char)openURL:(NSURL *)arg0;
- (float)screenScale;
- (char)isInternalInstall;
- (struct CGSize)screenSize;

@end

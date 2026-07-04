/* Runtime dump - CloudTabServices
 * Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface CloudTabServices : NSObject

+ (NSURLConnection *)_serverConnection;
+ (void)didToggleCloudTabs:(char)arg0 terminateAfterUpdating:(char)arg1;
+ (void)clearAllCloudTabDevices;
+ (void)clearTabsForCurrentDevice;
+ (void)didToggleCloudTabs:(char)arg0;
+ (void)didTogglePrivateBrowsing:(char)arg0;

@end

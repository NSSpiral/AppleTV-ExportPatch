/* Runtime dump - LSBestAppSuggestionManager
 * Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSBestAppSuggestionManager : NSObject
{
    <LSBestAppSuggestionManagerDelegate> * _delegate;
    char _listeningForBestAppSuggestions;
    int _bestAppNotificationCount;
    LSBestAppSuggestion * _lastBestAppSuggestion;
    NSXPCConnection * _connection;
}

@property (weak) <LSBestAppSuggestionManagerDelegate> * delegate;
@property (retain) NSXPCConnection * connection;

- (void)startListeningForBestAppSuggestions;
- (void)stopListeningForBestAppSuggestions;
- (id)bestAppSuggestion;
- (void)launchAppWithBundleIdentifier:(NSString *)arg0 userActivityUniqueIdentifier:(NSString *)arg1 userActivityTypeIdentifier:(NSString *)arg2;
- (void)launchAppWithBundleIdentifier:(NSString *)arg0 userActivityUniqueIdentifier:(NSString *)arg1 userActivityTypeIdentifier:(NSString *)arg2 deviceName:(NSString *)arg3 deviceIdentifier:(NSString *)arg4 deviceType:(NSObject *)arg5;
- (void)removeBestApp:(id)arg0 options:(NSDictionary *)arg1;
- (char)determineBestAppWithDelay:(double)arg0 withBlock:(id /* block */)arg1;
- (id)bestAppSuggestions:(int)arg0;
- (void)queueFetchOfPayloadForBestAppSuggestion:(id)arg0;
- (void)bestAppSuggestionWasLaunched:(id)arg0 withInteractionType:(int)arg1;
- (void)bestAppSuggestionLaunchWasCancelled:(id)arg0;
- (void)notifyBestAppChanged:(id)arg0 type:(unsigned int)arg1 options:(NSDictionary *)arg2 bundleIdentifier:(NSString *)arg3 activityType:(NSObject *)arg4 when:(NSDate *)arg5 confidence:(double)arg6 deviceName:(NSString *)arg7 deviceIdentifier:(NSString *)arg8 deviceType:(NSObject *)arg9;
- (void)launchAppWithBundleIdentifier:(NSString *)arg0 taskContinuationIdentifier:(NSString *)arg1;
- (void)launchAppWithBestAppSuggestion:(id)arg0;
- (void)dealloc;
- (void)setDelegate:(<LSBestAppSuggestionManagerDelegate> *)arg0;
- (LSBestAppSuggestionManager *)init;
- (<LSBestAppSuggestionManagerDelegate> *)delegate;
- (NSXPCConnection *)connection;
- (void)setConnection:(NSXPCConnection *)arg0;

@end

/* Runtime dump - FBPreferences
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBPreferences : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _enabledLogNames;
}

+ (FBPreferences *)sharedInstance;

- (void)dealloc;
- (FBPreferences *)init;
- (NSString *)description;
- (void)reload;
- (char)isLogEnabled:(id)arg0;
- (void)_queue_reload;
- (NSString *)_extractEnabledLoggersFromPreferenceDomain:(NSString *)arg0;
- (NSMutableSet *)enabledLogNames;

@end

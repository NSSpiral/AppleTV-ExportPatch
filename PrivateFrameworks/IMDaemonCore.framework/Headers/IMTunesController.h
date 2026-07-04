/* Runtime dump - IMTunesController
 * Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMTunesController : NSObject
{
    NSDate * _lastChange;
    NSDictionary * _lastInfo;
    NSMutableDictionary * _playerInfo;
    NSMutableArray * _listeners;
    NSString * _messageFormat;
}

@property (readonly, nonatomic) char isEnabled;
@property (readonly, nonatomic) NSDictionary * playerInfo;
@property (readonly, nonatomic) NSString * messageFormat;

+ (IMTunesController *)sharedTunesController;

- (void)dealloc;
- (IMTunesController *)init;
- (char)isEnabled;
- (void)removeListener:(BSActionListener *)arg0;
- (NSDictionary *)playerInfo;
- (NSString *)messageFormat;
- (void)_updateMessage;
- (void)_playerChanged:(NSNotification *)arg0;
- (void)_playerChangedNotification:(NSNotification *)arg0;
- (void)addListener:(BSActionListener *)arg0;

@end

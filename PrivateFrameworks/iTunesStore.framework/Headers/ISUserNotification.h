/* Runtime dump - ISUserNotification
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISUserNotification : NSObject
{
    int _allowedRetryCount;
    int _currentRetryCount;
    NSDictionary * _dictionary;
    unsigned long _optionFlags;
    NSDictionary * _userInfo;
}

@property (readonly) NSDictionary * dictionary;
@property (readonly) unsigned long optionFlags;
@property int allowedRetryCount;
@property int currentRetryCount;
@property (retain) NSDictionary * userInfo;

- (void)setAllowedRetryCount:(int)arg0;
- (void)dealloc;
- (ISUserNotification *)init;
- (NSDictionary *)dictionary;
- (void)setUserInfo:(NSDictionary *)arg0;
- (NSDictionary *)userInfo;
- (int)allowedRetryCount;
- (struct __CFUserNotification *)copyUserNotification;
- (int)currentRetryCount;
- (void)setCurrentRetryCount:(int)arg0;
- (ISUserNotification *)initWithDictionary:(NSDictionary *)arg0 options:(unsigned long)arg1;
- (unsigned long)optionFlags;

@end

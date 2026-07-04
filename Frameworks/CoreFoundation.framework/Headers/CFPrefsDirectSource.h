/* Runtime dump - CFPrefsDirectSource
 * Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPrefsDirectSource : CFPrefsPlistSource
{
    CFPDSource * _underlyingSource;
    unsigned long long _inode;
    char _managed;
}

- (char)managed;
- (void)sendFullyPreparedMessage:(NSString *)arg0 settingValue:(void *)arg1 forKey:(struct __CFString *)arg2 retryCount:(int)arg3;
- (id)createRequestNewContentMessageForDaemon:(char)arg0;
- (unsigned char)alreadylocked_requestNewData;
- (void)setManaged:(char)arg0;
- (void *)copyReplyForDirectMessage:(NSString *)arg0 error:(char *)arg1;
- (void)dealloc;
- (char)sendMessage:(NSString *)arg0;

@end

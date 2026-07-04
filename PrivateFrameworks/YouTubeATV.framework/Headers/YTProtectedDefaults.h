/* Runtime dump - YTProtectedDefaults
 * Image: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

@interface YTProtectedDefaults : NSObject
{
    NSMutableDictionary * _internalDictionary;
    char _shouldSynchronize;
    NSString * _plistPath;
}

+ (YTProtectedDefaults *)sharedInstance;

- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (YTProtectedDefaults *)init;
- (void)removeObjectForKey:(NSString *)arg0;
- (char)synchronize;
- (void)_protectedDataAvailable;
- (void)_protectedDataUnvailable;

@end

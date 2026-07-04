/* Runtime dump - ACDPreferences
 * Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDPreferences : NSObject

+ (ACDPreferences *)sharedPreferences;

- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)synchronize;
- (void)reset;
- (double)serverTimeoutInterval;

@end

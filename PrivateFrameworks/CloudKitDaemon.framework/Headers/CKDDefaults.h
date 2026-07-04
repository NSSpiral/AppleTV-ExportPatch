/* Runtime dump - CKDDefaults
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDDefaults : NSObject

+ (CKDDefaults *)sharedDefaults;

- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)synchronize;
- (char)boolForKey:(NSString *)arg0 defaultValue:(char)arg1;
- (int)integerForKey:(NSString *)arg0 defaultValue:(int)arg1;

@end

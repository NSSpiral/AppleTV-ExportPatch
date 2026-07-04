/* Runtime dump - FMDPreferencesUtil
 * Image: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
 */

@interface FMDPreferencesUtil : NSObject

+ (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1 inDomain:(NSString *)arg2;
+ (NSString *)objectForKey:(NSString *)arg0 inDomain:(NSString *)arg1;
+ (void)synchronizeDomain:(NSString *)arg0;
+ (NSString *)dictionaryForKey:(NSString *)arg0 inDomain:(NSString *)arg1;
+ (char)boolForKey:(NSString *)arg0 inDomain:(NSString *)arg1;
+ (void)synchronizeDomain:(NSString *)arg0 user:(struct __CFString *)arg1;
+ (void)removeKey:(NSString *)arg0 inDomain:(NSString *)arg1;
+ (char)boolForKey:(NSString *)arg0 inDomain:(NSString *)arg1 user:(struct __CFString *)arg2;
+ (void)setBool:(char)arg0 forKey:(NSString *)arg1 inDomain:(NSString *)arg2;
+ (int)integerForKey:(NSString *)arg0 inDomain:(NSString *)arg1;
+ (int)integerForKey:(NSString *)arg0 inDomain:(NSString *)arg1 user:(struct __CFString *)arg2;
+ (void)setInteger:(int)arg0 forKey:(NSString *)arg1 inDomain:(NSString *)arg2;
+ (NSString *)stringForKey:(NSString *)arg0 inDomain:(NSString *)arg1;
+ (NSString *)stringForKey:(NSString *)arg0 inDomain:(NSString *)arg1 user:(struct __CFString *)arg2;
+ (void)setString:(NSString *)arg0 forKey:(NSString *)arg1 inDomain:(NSString *)arg2;
+ (NSString *)dateForKey:(NSString *)arg0 inDomain:(NSString *)arg1;
+ (NSString *)dateForKey:(NSString *)arg0 inDomain:(NSString *)arg1 user:(struct __CFString *)arg2;
+ (void)setDate:(NSDate *)arg0 forKey:(NSString *)arg1 inDomain:(NSString *)arg2;
+ (NSString *)dictionaryForKey:(NSString *)arg0 inDomain:(NSString *)arg1 user:(struct __CFString *)arg2;
+ (void)setDictionary:(NSMutableDictionary *)arg0 forKey:(NSString *)arg1 inDomain:(NSString *)arg2;
+ (NSString *)arrayForKey:(NSString *)arg0 inDomain:(NSString *)arg1;
+ (NSString *)arrayForKey:(NSString *)arg0 inDomain:(NSString *)arg1 user:(struct __CFString *)arg2;
+ (void)setArray:(NSArray *)arg0 forKey:(NSString *)arg1 inDomain:(NSString *)arg2;
+ (NSString *)dataForKey:(NSString *)arg0 inDomain:(NSString *)arg1;
+ (NSString *)dataForKey:(NSString *)arg0 inDomain:(NSString *)arg1 user:(struct __CFString *)arg2;
+ (void)setData:(NSData *)arg0 forKey:(NSString *)arg1 inDomain:(NSString *)arg2;
+ (NSString *)objectForKey:(NSString *)arg0 inDomain:(NSString *)arg1 user:(struct __CFString *)arg2;

@end

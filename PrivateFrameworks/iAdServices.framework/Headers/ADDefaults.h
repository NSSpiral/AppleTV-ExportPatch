/* Runtime dump - ADDefaults
 * Image: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
 */

@interface ADDefaults : NSObject
{
    NSMutableDictionary * _factoryDefaults;
    struct __CFString * _defaultsBundleID;
}

@property (retain, nonatomic) NSMutableDictionary * factoryDefaults;
@property (nonatomic) struct __CFString * defaultsBundleID;

+ (void)setDouble:(double)arg0 forKey:(NSString *)arg1;
+ (void)setInteger:(int)arg0 forKey:(NSString *)arg1;
+ (char)boolForKey:(NSString *)arg0;
+ (ADDefaults *)sharedInstance;
+ (NSString *)stringForKey:(NSString *)arg0;
+ (void)setBool:(char)arg0 forKey:(NSString *)arg1;
+ (double)doubleForKey:(NSString *)arg0;
+ (int)integerForKey:(NSString *)arg0;
+ (void)setString:(NSString *)arg0 forKey:(NSString *)arg1;
+ (NSString *)_defaultValueForKey:(NSString *)arg0 valueClass:(Class)arg1;
+ (void)_setDefaultValue:(id)arg0 forKey:(NSString *)arg1;
+ (void)addFactoryDefaults:(id)arg0;
+ (NSMutableDictionary *)factoryDefaults;
+ (char)defaultIsSetForKey:(NSString *)arg0;

- (ADDefaults *)init;
- (NSMutableDictionary *)factoryDefaults;
- (void)setFactoryDefaults:(NSMutableDictionary *)arg0;
- (struct __CFString *)defaultsBundleID;
- (void)setDefaultsBundleID:(struct __CFString *)arg0;

@end

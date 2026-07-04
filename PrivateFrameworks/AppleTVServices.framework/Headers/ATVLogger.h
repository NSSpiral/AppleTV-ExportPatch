/* Runtime dump - ATVLogger
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVLogger : NSObject
{
    NSObject<OS_dispatch_queue> * _componentsQueue;
    char _allComponentsEnabled;
    NSString * _domain;
    NSArray * _persistentComponents;
    int _logLevel;
    NSMutableDictionary * _enabledComponents;
    NSMutableDictionary * _httpConfigurations;
    NSMutableDictionary * _profileTimes;
}

@property (retain, nonatomic) NSString * domain;
@property (copy, nonatomic) NSArray * persistentComponents;
@property (nonatomic) int logLevel;
@property (retain, nonatomic) NSMutableDictionary * enabledComponents;
@property (retain, nonatomic) NSMutableDictionary * httpConfigurations;
@property (nonatomic) char allComponentsEnabled;
@property (retain, nonatomic) NSMutableDictionary * profileTimes;

+ (ATVLogger *)sharedInstance;
+ (void)initializeLoggingWithDomain:(NSString *)arg0 persistentComponents:(NSArray *)arg1;

- (void)setLogLevel:(int)arg0;
- (NSString *)domain;
- (void)reset;
- (void).cxx_destruct;
- (char)loggingEnabledForComponent:(id)arg0 atLevel:(int)arg1;
- (void)setDomain:(NSString *)arg0;
- (NSMutableDictionary *)profileTimes;
- (void)setProfileTimes:(NSMutableDictionary *)arg0;
- (ATVLogger *)initWithDomain:(NSString *)arg0 persistentComponents:(NSArray *)arg1;
- (void)_enableComponent:(id)arg0 withLogHandlers:(id)arg1;
- (void)disableComponent:(id)arg0;
- (void)httpLogForComponent:(id)arg0 level:(int)arg1 message:(NSString *)arg2;
- (void)_logForComponent:(id)arg0 level:(int)arg1 message:(NSString *)arg2;
- (void)enableComponent:(id)arg0 withLogHandler:(id /* block */)arg1;
- (void)enableComponent:(id)arg0 withConfiguration:(NSDictionary *)arg1;
- (void)_logForComponent:(id)arg0 level:(int)arg1 format:(unsigned int)arg2 list:(void *)arg3;
- (NSArray *)persistentComponents;
- (void)setPersistentComponents:(NSArray *)arg0;
- (NSMutableDictionary *)enabledComponents;
- (void)setEnabledComponents:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)httpConfigurations;
- (void)setHttpConfigurations:(NSMutableDictionary *)arg0;
- (char)allComponentsEnabled;
- (void)setAllComponentsEnabled:(char)arg0;
- (int)logLevel;

@end

/* Runtime dump - XPCServiceBundle
 * Image: /System/Library/PrivateFrameworks/XPCService.framework/XPCService
 */

@interface XPCServiceBundle : NSObject <XPCServiceArchiver>
{
    NSBundle * _bundle;
    NSString * _serviceIdentifier;
    long _serviceIdentifierPredicate;
    NSString * _executablePath;
    long _executablePathPredicate;
    NSString * _realExecutablePath;
    long _realExecutablePathPredicate;
    int _serviceType;
    long _serviceTypePredicate;
    NSDictionary * _serviceDictionary;
    long _serviceDictionaryPredicate;
    NSDictionary * _launchdJobDictionary;
    long _launchdJobDictionaryPredicate;
    NSObject<OS_xpc_object> * _xpcJobData;
    long _xpcJobDataPredicate;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (XPCServiceBundle *)XPCServiceBundleForMainExecutable;
+ (NSString *)XPCServiceBundleAtPath:(NSString *)arg0;
+ (char)useRestrictiveRoleAccountSecurityPolicy;
+ (struct _launch_data *)createLaunchDataFromArray:(NSArray *)arg0;
+ (NSArray *)createXPCJobsArrayFromArray:(NSArray *)arg0;
+ (NSString *)XPCServiceBundleFromExecutableAtPath:(NSString *)arg0;

- (NSString *)descriptionWithIndent:(unsigned int)arg0;
- (void)dealloc;
- (NSString *)description;
- (NSString *)identifier;
- (NSString *)executablePath;
- (NSBundle *)bundle;
- (XPCServiceBundle *)initWithBundle:(NSBundle *)arg0;
- (int)serviceType;
- (XPCServiceBundle *)initWithArchive:(GQZArchive *)arg0;
- (NSDictionary *)serviceDictionary;
- (NSString *)stringForServiceDictionaryKey:(NSString *)arg0;
- (NSDictionary *)launchdJobDictionary;
- (NSString *)realExecutablePath;
- (NSString *)objectForServiceDictionaryKey:(NSString *)arg0;
- (NSData *)launchdJobPropertyListData;
- (NSCache *)archiveForCache;
- (char)boolForServiceDictionaryKey:(NSString *)arg0;
- (NSString *)dictionaryForServiceDictionaryKey:(NSString *)arg0;
- (NSString *)arrayForServiceDictionaryKey:(NSString *)arg0;
- (char)isSystemService;
- (NSString *)launchdJobPropertyListString;
- (struct _launch_data *)launchdJobLaunchData;
- (NSObject<OS_xpc_object> *)xpcJobData;

@end

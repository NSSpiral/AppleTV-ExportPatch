/* Runtime dump - MSVCPLoggingController
 * Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVCPLoggingController : NSObject
{
    NSMutableArray * _registeredConfigurations;
    NSMutableDictionary * _cachedLoggingLevelPairs;
    NSObject<OS_dispatch_queue> * _configurationAccessQueue;
    NSObject<OS_dispatch_queue> * _serialLoggingQueue;
    int _configurationChangeNotifyToken;
    char _masterLoggingSwitchInitialized;
    char _masterLoggingSwitchEnabled;
    char _cachedPPTTestsAreInProgress;
}

@property (readonly, copy, nonatomic) NSArray * registeredConfigurations;
@property (readonly, copy, nonatomic) NSString * defaultCategory;
@property (nonatomic) char masterLoggingSwitchEnabled;

+ (MSVCPLoggingController *)sharedController;

- (void)dealloc;
- (MSVCPLoggingController *)init;
- (void).cxx_destruct;
- (NSString *)defaultCategory;
- (void)_updateCachedPPTTestsAreInProgress;
- (void)_updateLoggingLevels;
- (NSOperationQueue *)_defaultCategoryOnAccessQueue;
- (char)masterLoggingSwitchEnabled;
- (NSArray *)registeredConfigurations;
- (void)setMasterLoggingSwitchEnabled:(char)arg0;
- (void)registerConfiguration:(NSDictionary *)arg0 withFacilityName:(char *)arg1;
- (char)shouldLogMessageWithLevel:(int)arg0 category:(NSString *)arg1;
- (void)logMessage:(NSString *)arg0 withLevel:(int)arg1 category:(NSString *)arg2 fileName:(char *)arg3 functionName:(char *)arg4 lineNumber:(unsigned long)arg5;

@end

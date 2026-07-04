/* Runtime dump - EasyConfigDevice
 * Image: /System/Library/PrivateFrameworks/EasyConfig.framework/EasyConfig
 */

@interface EasyConfigDevice : NSObject <NSCopying>
{
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSObject<OS_dispatch_queue> * _userQueue;
    NSDictionary * _scanRecord;
    char _started;
    long _firstErr;
    struct BonjourBrowser * _airplayBrowser;
    NSDictionary * _airplayBonjourInfo;
    struct BonjourBrowser * _raopBrowser;
    NSDictionary * _raopBonjourInfo;
    struct BonjourBrowser * _mfiConfigBrowser;
    NSDictionary * _mfiConfigBonjourInfo;
    struct BonjourBrowser * _hapBrowser;
    NSDictionary * _hapBonjourInfo;
    unsigned int _configSeed;
    struct HTTPClientPrivate * _httpClient;
    NSObject<OS_dispatch_source> * _timeoutTimer;
    int _state;
    double _securityStartTime;
    double _securityFinishTime;
    struct MFiSAP * _mfiSAP;
    struct PairingSessionPrivate * _pairingSession;
    id _promptForSetupCodeBlock;
    unsigned long long _deviceIdentifier;
    unsigned long long _features;
    NSString * _model;
    NSString * _name;
    NSDictionary * _configuration;
    NSDictionary * _configResponse;
    char _pausesAfterApply;
    char _supportsHAP;
    char _supportsMFi;
    char _supportsTLV;
    char _preConfigMetricsSet;
    struct ? _preConfigMetrics;
    char _postConfigMetricsSet;
    struct ? _postConfigMetrics;
    double _configStartTime;
    double _findPreConfigStartTime;
    double _findPreConfigFoundTime;
    double _findPostConfigStartTime;
    double _findPostConfigFoundTime;
    double _applyConfigStartTime;
    double _applyConfigFinishTime;
    double _postConfigCheckStartTime;
    double _postConfigCheckFinishTime;
}

@property (copy, nonatomic) NSDictionary * configuration;
@property (nonatomic) unsigned long long deviceIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * dispatchQueue;
@property (nonatomic) unsigned long long features;
@property (copy, nonatomic) NSString * model;
@property (copy, nonatomic) NSString * name;
@property (nonatomic) char pausesAfterApply;

+ (char)supportedScanRecord:(NSObject *)arg0;
+ (NSObject *)deviceWithScanRecord:(NSDictionary *)arg0;

- (void)dealloc;
- (EasyConfigDevice *)init;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)stop;
- (EasyConfigDevice *)copyWithZone:(struct _NSZone *)arg0;
- (void)_start;
- (NSString *)model;
- (void)setConfiguration:(NSDictionary *)arg0;
- (void)start;
- (void)setModel:(NSString *)arg0;
- (NSDictionary *)configuration;
- (unsigned long long)deviceIdentifier;
- (void)setDeviceIdentifier:(unsigned long long)arg0;
- (long)_pairSetupStart;
- (long)_pairVerifyStart;
- (void)_stop:(long)arg0;
- (NSObject<OS_dispatch_queue> *)dispatchQueue;
- (void)setDispatchQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (long)_findDevicePreConfigStart;
- (void)_logEnded;
- (void)_postNote:(struct __CFString *)arg0 info:(NSDictionary *)arg1;
- (long)_findDevicePostConfigStart;
- (void)_trySetupCode:(id)arg0;
- (long)_pairSetupNext:(struct HTTPMessagePrivate *)arg0;
- (void)_findDevicePreConfigEvent:(unsigned int)arg0 info:(NSDictionary *)arg1;
- (long)_startBonjourWithTimeout:(int)arg0 handler:(id /* block */)arg1;
- (void)_postProgress:(int)arg0;
- (long)_configureStart:(id)arg0;
- (long)_setupClient:(NSObject *)arg0;
- (long)_mfiSAPStart;
- (long)_mfiSAPNext:(struct HTTPMessagePrivate *)arg0;
- (long)_timeoutTimerStart:(unsigned int)arg0 block:(id /* block */)arg1;
- (long)_applyConfigStart;
- (long)_pairVerifyNext:(struct HTTPMessagePrivate *)arg0;
- (void)_applyConfigCompletion:(struct HTTPMessagePrivate *)arg0;
- (void)_postProgress:(int)arg0 withResponse:(NSURLResponse *)arg1;
- (void)_findDevicePostConfigEvent:(unsigned int)arg0 info:(NSDictionary *)arg1;
- (void)_postConfigCheckStart:(id)arg0;
- (void)_postConfigCheckCompletion:(struct HTTPMessagePrivate *)arg0;
- (char)updated:(char)arg0;
- (char)removed:(NSSet *)arg0;
- (void)resumePostConfig;
- (void)setPreConfigMetrics:(struct ? *)arg0;
- (void)setPostConfigMetrics:(struct ? *)arg0;
- (void)setPromptForSetupCodeHandler:(id /* block */)arg0;
- (void)trySetupCode:(id)arg0;
- (void)setFeatures:(unsigned long long)arg0;
- (char)pausesAfterApply;
- (void)setPausesAfterApply:(char)arg0;
- (void)_handleError:(long)arg0;
- (unsigned long long)features;

@end

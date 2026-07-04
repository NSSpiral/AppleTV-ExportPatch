/* Runtime dump - SSDownloadPolicyRule
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadPolicyRule : NSObject <NSCoding, SSXPCCoding, NSCopying>
{
    NSSet * _applicationStates;
    float _batteryLevel;
    int _cellularDataStates;
    long long _downloadSizeLimit;
    NSSet * _networkTypes;
    int _powerStates;
    int _registrationStates;
    int _timeLimitStates;
}

@property (nonatomic) long long downloadSizeLimit;
@property (copy, nonatomic) NSSet * applicationStates;
@property (copy, nonatomic) NSSet * networkTypes;
@property (readonly, nonatomic) char cellularAllowed;
@property (readonly, nonatomic) char wiFiAllowed;
@property (nonatomic) float batteryLevel;
@property (nonatomic) int cellularDataStates;
@property (nonatomic) int powerStates;
@property (nonatomic) int registrationStates;
@property (nonatomic) int timeLimitStates;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSDictionary *)copyXPCEncoding;
- (SSDownloadPolicyRule *)initWithXPCEncoding:(NSString *)arg0;
- (long long)downloadSizeLimit;
- (void)setCellularDataStates:(int)arg0;
- (void)unionPolicyRule:(NSObject *)arg0;
- (void)dealloc;
- (SSDownloadPolicyRule *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SSDownloadPolicyRule *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (SSDownloadPolicyRule *)copyWithZone:(struct _NSZone *)arg0;
- (float)batteryLevel;
- (NSSet *)networkTypes;
- (NSSet *)applicationStates;
- (void)addApplicationState:(NSObject *)arg0;
- (void)setApplicationStates:(NSSet *)arg0;
- (int)cellularDataStates;
- (int)powerStates;
- (int)registrationStates;
- (int)timeLimitStates;
- (void)addNetworkType:(int)arg0;
- (char)isCellularAllowed;
- (char)isWiFiAllowed;
- (void)setBatteryLevel:(float)arg0;
- (void)setDownloadSizeLimit:(long long)arg0;
- (void)setNetworkTypes:(NSSet *)arg0;
- (void)setPowerStates:(int)arg0;
- (void)setRegistrationStates:(int)arg0;
- (void)setTimeLimitStates:(int)arg0;

@end

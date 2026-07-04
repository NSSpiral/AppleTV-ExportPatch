/* Runtime dump - PLWifiAgent
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLWifiAgent : PLAgent
{
    PLCFNotificationOperatorComposition * _notificationWiFiChanged;
    struct __WiFiManagerClient * _wifiManager;
    struct __WiFiDeviceClient * _wifiDevice;
    PLEntryNotificationOperatorComposition * _batteryLevelChanged;
    PLEntryNotificationOperatorComposition * _deviceWake;
    unsigned int _lastLoggedTimestamp;
    unsigned int _locationScanDuration;
    unsigned int _pipelineScanDuration;
    unsigned int _autoJoinScanDuration;
    unsigned int _setupScanDuration;
    unsigned int _unknownScanDuration;
    NSString * _wifiChipset;
    NSString * _wifiManufacturer;
}

@property (readonly) PLCFNotificationOperatorComposition * notificationWiFiChanged;
@property (nonatomic) struct __WiFiManagerClient * wifiManager;
@property (nonatomic) struct __WiFiDeviceClient * wifiDevice;
@property (retain) PLEntryNotificationOperatorComposition * batteryLevelChanged;
@property (retain) PLEntryNotificationOperatorComposition * deviceWake;
@property unsigned int lastLoggedTimestamp;
@property unsigned int locationScanDuration;
@property unsigned int pipelineScanDuration;
@property unsigned int autoJoinScanDuration;
@property unsigned int setupScanDuration;
@property unsigned int unknownScanDuration;
@property (readonly) NSString * wifiChipset;
@property (readonly) NSString * wifiManufacturer;

+ (void)load;
+ (NSArray *)railDefinitions;
+ (NSArray *)accountingGroupDefinitions;
+ (NSArray *)entryEventPointDefinitions;
+ (NSArray *)entryEventForwardDefinitions;
+ (NSArray *)entryEventBackwardDefinitions;
+ (NSArray *)entryEventNoneDefinitions;
+ (PLWifiAgent *)entryEventPointDefinitionWake;
+ (NSDictionary *)entryEventForwardDefinitionModuleInfo;
+ (id)entryEventForwardDefinitionRSSI;
+ (PLWifiAgent *)entryEventForwardDefinitionAvailability;
+ (PLWifiAgent *)entryEventBackwardDefinitionCumulativeBasic;
+ (PLWifiAgent *)entryEventBackwardDefinitionDiffBasic;
+ (PLWifiAgent *)entryEventBackwardDefinitionUserScan;

- (PLWifiAgent *)init;
- (void)log;
- (void).cxx_destruct;
- (void)initOperatorDependancies;
- (void)setBatteryLevelChanged:(PLEntryNotificationOperatorComposition *)arg0;
- (PLEntryNotificationOperatorComposition *)batteryLevelChanged;
- (struct __WiFiManagerClient *)wifiManager;
- (void)findWifiDevice;
- (struct __WiFiDeviceClient *)wifiDevice;
- (void)logEventForwardModuleInfo;
- (void)setWifiDevice:(struct __WiFiDeviceClient *)arg0;
- (void)setWifiManager:(struct __WiFiManagerClient *)arg0;
- (void)logEventPointWake;
- (void)logonAPSleep;
- (void)setDeviceWake:(PLEntryNotificationOperatorComposition *)arg0;
- (char)hasWiFi;
- (char)isWowSupported;
- (void)logEventBackwardWifiProperties;
- (void)logEventBackwardUserScanDuration;
- (char)isWiFiPowered;
- (void)logEventPointWakeDataFrame:(NSObject *)arg0 withParams:(NSMutableDictionary *)arg1 toEntry:(QLZipArchiveEntry *)arg2;
- (void)logEventPointWakePNO:(id)arg0 withParams:(NSMutableDictionary *)arg1 toEntry:(QLZipArchiveEntry *)arg2;
- (void)logEventPointWakeLink:(id)arg0 withParams:(NSMutableDictionary *)arg1 toEntry:(QLZipArchiveEntry *)arg2;
- (NSString *)decodeWifiEventLinkReason:(unsigned long)arg0;
- (unsigned int)getCurrentChannelWidth:(struct __WiFiNetwork *)arg0;
- (void)logEventBackwardWifiProperties:(NSDictionary *)arg0 withNetworkProperties:(NSDictionary *)arg1;
- (char)isWowEnabled;
- (void)modelWiFiPower:(id)arg0;
- (id)railWiFi;
- (NSObject *)wifiChipsetQuery;
- (NSObject *)wifiManufacturerQuery;
- (NSString *)wifiChipset;
- (NSString *)wifiManufacturer;
- (void)logEventForwardAvailability:(id)arg0;
- (void)logEventForwardRSSI:(id)arg0;
- (void)logEventBackwardCumulativeProperties;
- (void)logEventBackwardDiffProperties;
- (void)updateEventBackwardUserScanDuration:(id)arg0;
- (PLCFNotificationOperatorComposition *)notificationWiFiChanged;
- (PLEntryNotificationOperatorComposition *)deviceWake;
- (unsigned int)lastLoggedTimestamp;
- (void)setLastLoggedTimestamp:(unsigned int)arg0;
- (unsigned int)locationScanDuration;
- (void)setLocationScanDuration:(unsigned int)arg0;
- (unsigned int)pipelineScanDuration;
- (void)setPipelineScanDuration:(unsigned int)arg0;
- (unsigned int)autoJoinScanDuration;
- (void)setAutoJoinScanDuration:(unsigned int)arg0;
- (unsigned int)setupScanDuration;
- (void)setSetupScanDuration:(unsigned int)arg0;
- (unsigned int)unknownScanDuration;
- (void)setUnknownScanDuration:(unsigned int)arg0;

@end

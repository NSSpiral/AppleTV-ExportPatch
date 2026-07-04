/* Runtime dump - CTTelephonyNetworkInfo
 * Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTTelephonyNetworkInfo : NSObject
{
    struct queue _queue;
    struct __CTServerConnection * server_connection;
    NSLock * server_lock;
    id _subscriberCellularProviderDidUpdateNotifier;
    char _monitoringCellId;
    CTCarrier * _subscriberCellularProvider;
    NSString * _cachedCurrentRadioAccessTechnology;
    NSDictionary * _cachedSignalStrength;
    NSString * _cachedCellId;
}

@property (retain) CTCarrier * subscriberCellularProvider;
@property (copy, nonatomic) id subscriberCellularProviderDidUpdateNotifier;
@property (readonly, retain, nonatomic) NSString * currentRadioAccessTechnology;
@property (retain, nonatomic) NSString * cellId;
@property (retain) NSString * cachedCurrentRadioAccessTechnology;
@property (retain) NSDictionary * cachedSignalStrength;
@property (retain) NSString * cachedCellId;
@property char monitoringCellId;

- (void)setMonitoringCellId:(char)arg0;
- (void)setSubscriberCellularProviderDidUpdateNotifier:(id)arg0;
- (char)setUpServerConnection;
- (CTCarrier *)subscriberCellularProvider;
- (char)updateNetworkInfoAndShouldNotifyClient:(char *)arg0;
- (void)queryDataMode;
- (void)queryCTSignalStrengthNotification;
- (void)cleanUpServerConnection;
- (void)setSubscriberCellularProvider:(CTCarrier *)arg0;
- (void)setCachedCurrentRadioAccessTechnology:(NSString *)arg0;
- (void)setCachedSignalStrength:(NSDictionary *)arg0;
- (char)getCarrierName:(NSString *)arg0 withCTError:(struct ? *)arg1;
- (char)getMobileCountryCode:(id)arg0 andIsoCountryCode:(id)arg1 withCTError:(struct ? *)arg2;
- (char)getMobileNetworkCode:(id)arg0 withCTError:(struct ? *)arg1;
- (char)getAllowsVOIP:(char *)arg0 withCTError:(struct ? *)arg1;
- (void)postCellularProviderUpdatesIfNecessary;
- (void)updateRadioAccessTechnology:(id)arg0;
- (void)updateSignalStrength:(id)arg0;
- (void)handleCTSignalStrengthNotification:(NSNotification *)arg0;
- (void)handleCTRegistrationCellChangedNotification:(NSNotification *)arg0;
- (id)createSignalStrengthDictWithBars:(id)arg0;
- (void)setCellId:(NSString *)arg0;
- (NSString *)cachedCurrentRadioAccessTechnology;
- (void)setCachedCellId:(NSString *)arg0;
- (NSDictionary *)cachedSignalStrength;
- (char)monitoringCellId;
- (void)queryCellId;
- (NSString *)cachedCellId;
- (id)subscriberCellularProviderDidUpdateNotifier;
- (void)handleNotificationFromConnection:(void *)arg0 ofType:(NSString *)arg1 withInfo:(NSDictionary *)arg2;
- (NSString *)currentRadioAccessTechnology;
- (NSString *)cellId;
- (NSString *)radioAccessTechnology;
- (void)dealloc;
- (CTTelephonyNetworkInfo *)init;
- (void).cxx_construct;
- (void).cxx_destruct;
- (NSNumber *)signalStrength;

@end

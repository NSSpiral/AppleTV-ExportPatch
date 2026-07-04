/* Runtime dump - SSMetricsConfiguration
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsConfiguration : NSObject
{
    NSSet * _blacklistedEvents;
    SSMetricsConfiguration * _childConfiguration;
    NSDictionary * _config;
    char _disabled;
    char _disableEventDecoration;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSMutableSet * _cookieFieldsUnion;
    NSMutableDictionary * _eventFieldsUnion;
    NSDictionary * _fields;
    int _internalSettingsToken;
    id _reportingFrequencyOverride;
    char _sendDisabled;
}

@property (readonly, nonatomic) NSDictionary * fieldsMap;
@property (retain, nonatomic) SSMetricsConfiguration * childConfiguration;
@property (nonatomic) char disableEventDecoration;

+ (void)getReportingFrequencyOverrideWithCompletionBlock:(id /* block */)arg0;
+ (SSMetricsConfiguration *)_reportingFrequencyOverride;
+ (void)setReportingFrequencyOverride:(id)arg0;

- (void)dealloc;
- (void)_setReportingFrequencyOverride:(id)arg0;
- (NSDictionary *)_initSSMetricsEventConfiguration;
- (char)_configBooleanForKey:(NSString *)arg0 defaultValue:(char)arg1;
- (SSMetricsConfiguration *)childConfiguration;
- (NSArray *)blacklistedEventFields;
- (NSDictionary *)fieldsMap;
- (NSArray *)cookieFields;
- (NSArray *)eventFields;
- (id)compoundStringWithElements:(id)arg0;
- (char)isDisabled;
- (char)isEventTypeBlacklisted:(id)arg0;
- (char)isSendDisabled;
- (NSArray *)pingURLs;
- (NSString *)valueForConfigurationKey:(NSString *)arg0;
- (NSString *)reportingURLString;
- (id)tokenStringWithElements:(id)arg0;
- (SSMetricsConfiguration *)initWithGlobalConfiguration:(SSMetricsConfiguration *)arg0;
- (SSMetricsConfiguration *)initWithStorePlatformData:(NSData *)arg0;
- (double)reportingFrequency;
- (void)setChildConfiguration:(SSMetricsConfiguration *)arg0;
- (char)_decorateITMLEvents;
- (char)disableEventDecoration;
- (void)setDisableEventDecoration:(char)arg0;

@end

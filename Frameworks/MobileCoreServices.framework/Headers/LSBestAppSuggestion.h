/* Runtime dump - LSBestAppSuggestion
 * Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSBestAppSuggestion : NSObject
{
    unsigned int _type;
    NSUUID * _uniqueIdentifier;
    NSDictionary * _options;
    NSString * _bundleIdentifier;
    NSString * _activityType;
    NSDate * _lastUpdateTime;
    NSString * _originatingDeviceIdentifier;
    NSString * _originatingDeviceName;
    NSString * _originatingDeviceType;
    double _confidence;
}

@property (readonly, copy) NSString * userActivityTypeIdentifier;
@property (readonly) unsigned int type;
@property (copy) NSUUID * uniqueIdentifier;
@property (readonly, copy) NSString * bundleIdentifier;
@property (copy) NSString * activityType;
@property (readonly, copy) NSDate * lastUpdateTime;
@property (readonly, copy) NSDate * when;
@property (readonly, copy) NSDictionary * options;
@property (readonly) double confidence;
@property (readonly, copy) NSString * originatingDeviceIdentifier;
@property (readonly, copy) NSString * originatingDeviceName;
@property (readonly, copy) NSString * originatingDeviceType;

+ (char)supportsSecureCoding;

- (LSBestAppSuggestion *)initWithBundleIdentifier:(NSString *)arg0 uuid:(NSUUID *)arg1 activityType:(NSString *)arg2 lastUpdateTime:(NSDate *)arg3 type:(unsigned int)arg4 deviceName:(NSString *)arg5 deviceIdentifier:(NSString *)arg6 deviceType:(NSObject *)arg7 options:(NSDictionary *)arg8;
- (NSDate *)when;
- (void)setActivityType:(NSString *)arg0;
- (NSString *)originatingDeviceIdentifier;
- (NSString *)userActivityTypeIdentifier;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)debugDescription;
- (NSString *)bundleIdentifier;
- (unsigned int)type;
- (NSUUID *)uniqueIdentifier;
- (NSDictionary *)options;
- (NSString *)activityType;
- (void)setUniqueIdentifier:(NSUUID *)arg0;
- (NSString *)originatingDeviceType;
- (NSString *)originatingDeviceName;
- (NSDate *)lastUpdateTime;
- (double)confidence;

@end

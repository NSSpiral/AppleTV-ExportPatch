/* Runtime dump - LSUserActivityInfo
 * Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSUserActivityInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID * _uuid;
    unsigned int _type;
    NSDictionary * _options;
    unsigned int _changeCount;
    NSDate * _activityDate;
    NSString * _title;
    NSString * _typeIdentifier;
    NSURL * _webpageURL;
    NSData * _streamsData;
    NSData * _activityPayload;
    NSError * _error;
}

@property (copy) NSUUID * uuid;
@property unsigned int type;
@property (copy) NSDictionary * options;
@property unsigned int changeCount;
@property (copy) NSDate * activityDate;
@property (copy) NSString * title;
@property (copy) NSString * typeIdentifier;
@property (copy) NSURL * webpageURL;
@property (copy) NSData * streamsData;
@property (copy) NSData * activityPayload;
@property (copy) NSError * error;

+ (char)supportsSecureCoding;

- (NSString *)typeIdentifier;
- (NSURL *)webpageURL;
- (void)setWebpageURL:(NSURL *)arg0;
- (NSString *)logString;
- (void)setActivityDate:(NSDate *)arg0;
- (NSData *)streamsData;
- (void)setStreamsData:(NSData *)arg0;
- (NSData *)activityPayload;
- (void)setActivityPayload:(NSData *)arg0;
- (NSDate *)activityDate;
- (void)dealloc;
- (LSUserActivityInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setTitle:(NSString *)arg0;
- (NSString *)description;
- (void)setType:(unsigned int)arg0;
- (unsigned int)type;
- (NSString *)title;
- (LSUserActivityInfo *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)changeCount;
- (void)setOptions:(NSDictionary *)arg0;
- (NSDictionary *)options;
- (NSUUID *)uuid;
- (void)setChangeCount:(unsigned int)arg0;
- (NSError *)error;
- (void)setTypeIdentifier:(NSString *)arg0;
- (NSString *)statusString;
- (void)setError:(NSError *)arg0;
- (void)setUuid:(NSUUID *)arg0;

@end

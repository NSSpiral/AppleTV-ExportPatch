/* Runtime dump - SSVPlayActivityEvent
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVPlayActivityEvent : NSObject <NSCoding, NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString * _containerID;
    unsigned int _containerType;
    NSString * _deviceName;
    unsigned int _endReasonType;
    NSDate * _eventDate;
    NSTimeZone * _eventTimeZone;
    NSString * _externalID;
    NSString * _featureName;
    double _itemDuration;
    double _itemEndTime;
    double _itemStartTime;
    unsigned int _itemType;
    unsigned int _mediaType;
    char _offline;
    long long _persistentID;
    NSString * _personalizedContainerID;
    NSData * _recommendationData;
    char _SBEnabled;
    unsigned int _sourceType;
    unsigned long long _storeAccountID;
    NSString * _storeID;
    NSData * _timedMetadata;
    NSData * _trackInfo;
}

@property (readonly, copy, nonatomic) NSString * containerID;
@property (readonly, nonatomic) unsigned int containerType;
@property (readonly, copy, nonatomic) NSData * dataRepresentation;
@property (readonly, copy, nonatomic) NSString * deviceName;
@property (readonly, nonatomic) unsigned int endReasonType;
@property (readonly, copy, nonatomic) NSDate * eventDate;
@property (readonly, copy, nonatomic) NSTimeZone * eventTimeZone;
@property (readonly, copy, nonatomic) NSString * externalID;
@property (readonly, copy, nonatomic) NSString * featureName;
@property (readonly, nonatomic) double itemDuration;
@property (readonly, nonatomic) double itemEndTime;
@property (readonly, nonatomic) double itemStartTime;
@property (readonly, nonatomic) unsigned int itemType;
@property (readonly, nonatomic) unsigned int mediaType;
@property (readonly, nonatomic) char offline;
@property (readonly, nonatomic) long long persistentID;
@property (readonly, copy, nonatomic) NSString * personalizedContainerID;
@property (readonly, copy, nonatomic) NSData * recommendationData;
@property (readonly, nonatomic) char SBEnabled;
@property (readonly, nonatomic) unsigned int sourceType;
@property (readonly, nonatomic) unsigned long long storeAccountID;
@property (readonly, copy, nonatomic) NSString * storeID;
@property (readonly, copy, nonatomic) NSData * timedMetadata;
@property (readonly, copy, nonatomic) NSData * trackInfo;

+ (char)supportsSecureCoding;

- (NSString *)externalID;
- (NSTimeZone *)eventTimeZone;
- (NSData *)timedMetadata;
- (NSString *)storeID;
- (SSVPlayActivityEvent *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (SSVPlayActivityEvent *)copyWithZone:(struct _NSZone *)arg0;
- (SSVPlayActivityEvent *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (unsigned int)sourceType;
- (void).cxx_destruct;
- (NSString *)containerID;
- (NSString *)deviceName;
- (NSDate *)eventDate;
- (long long)persistentID;
- (unsigned long long)storeAccountID;
- (SSVPlayActivityEvent *)initWithDataRepresentation:(NSData *)arg0;
- (unsigned int)mediaType;
- (unsigned int)itemType;
- (unsigned int)containerType;
- (double)itemEndTime;
- (unsigned int)endReasonType;
- (double)itemDuration;
- (char)isOffline;
- (NSString *)personalizedContainerID;
- (char)isSBEnabled;
- (NSData *)recommendationData;
- (double)itemStartTime;
- (NSData *)trackInfo;
- (Class)_mutableCopyClass;
- (NSString *)featureName;
- (NSData *)dataRepresentation;

@end

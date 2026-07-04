/* Runtime dump - SSVMutablePlayActivityEvent
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVMutablePlayActivityEvent : SSVPlayActivityEvent

@property (copy, nonatomic) NSString * containerID;
@property (nonatomic) unsigned int containerType;
@property (copy, nonatomic) NSString * deviceName;
@property (nonatomic) unsigned int endReasonType;
@property (copy, nonatomic) NSDate * eventDate;
@property (copy, nonatomic) NSTimeZone * eventTimeZone;
@property (copy, nonatomic) NSString * externalID;
@property (copy, nonatomic) NSString * featureName;
@property (nonatomic) double itemDuration;
@property (nonatomic) double itemEndTime;
@property (nonatomic) double itemStartTime;
@property (nonatomic) unsigned int itemType;
@property (nonatomic) unsigned int mediaType;
@property (nonatomic) char offline;
@property (copy, nonatomic) NSString * personalizedContainerID;
@property (copy, nonatomic) NSData * recommendationData;
@property (nonatomic) char SBEnabled;
@property (nonatomic) unsigned int sourceType;
@property (nonatomic) unsigned long long storeAccountID;
@property (copy, nonatomic) NSString * storeID;
@property (copy, nonatomic) NSData * timedMetadata;
@property (copy, nonatomic) NSData * trackInfo;
@property (nonatomic) long long persistentID;

- (void)setExternalID:(NSString *)arg0;
- (void)setEventTimeZone:(NSTimeZone *)arg0;
- (SSVMutablePlayActivityEvent *)copyWithZone:(struct _NSZone *)arg0;
- (void)setSourceType:(unsigned int)arg0;
- (void)setContainerID:(NSString *)arg0;
- (void)setEventDate:(NSDate *)arg0;
- (void)setStoreAccountID:(unsigned long long)arg0;
- (void)setItemType:(unsigned int)arg0;
- (void)setMediaType:(unsigned int)arg0;
- (Class)_mutableCopyClass;
- (void)setContainerType:(unsigned int)arg0;
- (void)setDeviceName:(NSString *)arg0;
- (void)setEndReasonType:(unsigned int)arg0;
- (void)setFeatureName:(NSString *)arg0;
- (void)setItemDuration:(double)arg0;
- (void)setItemEndTime:(double)arg0;
- (void)setItemStartTime:(double)arg0;
- (void)setOffline:(char)arg0;
- (void)setPersistentID:(long long)arg0;
- (void)setPersonalizedContainerID:(NSString *)arg0;
- (void)setRecommendationData:(NSData *)arg0;
- (void)setSBEnabled:(char)arg0;
- (void)setStoreID:(NSString *)arg0;
- (void)setTimedMetadata:(NSData *)arg0;
- (void)setTrackInfo:(NSData *)arg0;

@end

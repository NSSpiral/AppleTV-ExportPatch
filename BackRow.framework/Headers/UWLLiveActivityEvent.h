/* Runtime dump - UWLLiveActivityEvent
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class UWLLiveActivityEventChannel, UWLLiveActivityEventContent;
@interface UWLLiveActivityEvent : PBCodable <NSCopying>
{
    long long _cleanupTimeEpochMillis;
    long long _expectedStartTimeEpochMillis;
    long long _millisecondsSinceEvent;
    NSString * _bundleId;
    int _cause;
    UWLLiveActivityEventChannel * _channel;
    UWLLiveActivityEventContent * _content;
    NSString * _profileId;
    struct ? _has;
}

@property (readonly, nonatomic) char hasBundleId;
@property (retain, nonatomic) NSString * bundleId;
@property (nonatomic) char hasMillisecondsSinceEvent;
@property (nonatomic) long long millisecondsSinceEvent;
@property (readonly, nonatomic) char hasProfileId;
@property (retain, nonatomic) NSString * profileId;
@property (readonly, nonatomic) char hasChannel;
@property (retain, nonatomic) UWLLiveActivityEventChannel * channel;
@property (readonly, nonatomic) char hasContent;
@property (retain, nonatomic) UWLLiveActivityEventContent * content;
@property (nonatomic) char hasCause;
@property (nonatomic) int cause;
@property (nonatomic) char hasExpectedStartTimeEpochMillis;
@property (nonatomic) long long expectedStartTimeEpochMillis;
@property (nonatomic) char hasCleanupTimeEpochMillis;
@property (nonatomic) long long cleanupTimeEpochMillis;

- (void)setMillisecondsSinceEvent:(long long)arg0;
- (void)setExpectedStartTimeEpochMillis:(long long)arg0;
- (void)setCleanupTimeEpochMillis:(long long)arg0;
- (void)setCause:(int)arg0;
- (char)hasBundleId;
- (void)setHasMillisecondsSinceEvent:(char)arg0;
- (char)hasMillisecondsSinceEvent;
- (char)hasProfileId;
- (int)cause;
- (void)setHasCause:(char)arg0;
- (char)hasCause;
- (NSString *)causeAsString:(int)arg0;
- (int)StringAsCause:(id)arg0;
- (void)setHasExpectedStartTimeEpochMillis:(char)arg0;
- (char)hasExpectedStartTimeEpochMillis;
- (void)setHasCleanupTimeEpochMillis:(char)arg0;
- (char)hasCleanupTimeEpochMillis;
- (long long)millisecondsSinceEvent;
- (long long)expectedStartTimeEpochMillis;
- (long long)cleanupTimeEpochMillis;
- (NSString *)bundleId;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (UWLLiveActivityEvent *)copyWithZone:(struct _NSZone *)arg0;
- (char)hasContent;
- (UWLLiveActivityEventContent *)content;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (NSString *)profileId;
- (void)setProfileId:(NSString *)arg0;
- (void)setContent:(UWLLiveActivityEventContent *)arg0;
- (void)setBundleId:(NSString *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (void)setChannel:(UWLLiveActivityEventChannel *)arg0;
- (char)hasChannel;
- (UWLLiveActivityEventChannel *)channel;

@end

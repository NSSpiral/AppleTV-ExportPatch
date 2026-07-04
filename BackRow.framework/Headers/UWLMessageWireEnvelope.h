/* Runtime dump - UWLMessageWireEnvelope
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class UWLMessageHeaders;
@interface UWLMessageWireEnvelope : PBCodable <NSCopying>
{
    UWLMessageHeaders * _headers;
    NSMutableArray * _liveActivityEvents;
    NSMutableArray * _optInEvents;
    NSMutableArray * _optOutEvents;
    NSMutableArray * _playEvents;
    int _version;
}

@property (nonatomic) int version;
@property (retain, nonatomic) UWLMessageHeaders * headers;
@property (retain, nonatomic) NSMutableArray * playEvents;
@property (retain, nonatomic) NSMutableArray * optInEvents;
@property (retain, nonatomic) NSMutableArray * optOutEvents;
@property (retain, nonatomic) NSMutableArray * liveActivityEvents;

+ (Class)playEventsType;
+ (Class)optInEventsType;
+ (Class)optOutEventsType;
+ (Class)liveActivityEventsType;

- (void)addLiveActivityEvents:(id)arg0;
- (void)addPlayEvents:(id)arg0;
- (void)addOptInEvents:(id)arg0;
- (void)addOptOutEvents:(id)arg0;
- (unsigned int)playEventsCount;
- (void)clearPlayEvents;
- (NSObject *)playEventsAtIndex:(unsigned int)arg0;
- (unsigned int)optInEventsCount;
- (void)clearOptInEvents;
- (NSObject *)optInEventsAtIndex:(unsigned int)arg0;
- (unsigned int)optOutEventsCount;
- (void)clearOptOutEvents;
- (NSObject *)optOutEventsAtIndex:(unsigned int)arg0;
- (unsigned int)liveActivityEventsCount;
- (void)clearLiveActivityEvents;
- (NSObject *)liveActivityEventsAtIndex:(unsigned int)arg0;
- (NSMutableArray *)playEvents;
- (void)setPlayEvents:(NSMutableArray *)arg0;
- (NSMutableArray *)optInEvents;
- (void)setOptInEvents:(NSMutableArray *)arg0;
- (NSMutableArray *)optOutEvents;
- (void)setOptOutEvents:(NSMutableArray *)arg0;
- (NSMutableArray *)liveActivityEvents;
- (void)setLiveActivityEvents:(NSMutableArray *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (UWLMessageWireEnvelope *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setVersion:(int)arg0;
- (int)version;
- (void).cxx_destruct;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (UWLMessageHeaders *)headers;
- (void)setHeaders:(UWLMessageHeaders *)arg0;

@end

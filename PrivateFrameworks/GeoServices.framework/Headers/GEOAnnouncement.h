/* Runtime dump - GEOAnnouncement
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAnnouncement : PBCodable <NSCopying>
{
    unsigned int _announcementID;
    NSString * _buttonOneAppURI;
    NSString * _buttonOneMessage;
    NSString * _buttonTwoAppURI;
    NSString * _buttonTwoMessage;
    unsigned int _displayDestinations;
    GEOPDFlyover * _flyoverInfo;
    GEOMapRegion * _mapRegion;
    int _releasePhase;
    NSString * _title;
    NSString * _userMessage;
    struct ? _has;
}

@property (nonatomic) char hasAnnouncementID;
@property (nonatomic) unsigned int announcementID;
@property (readonly, nonatomic) char hasMapRegion;
@property (retain, nonatomic) GEOMapRegion * mapRegion;
@property (readonly, nonatomic) char hasUserMessage;
@property (retain, nonatomic) NSString * userMessage;
@property (readonly, nonatomic) char hasButtonOneMessage;
@property (retain, nonatomic) NSString * buttonOneMessage;
@property (readonly, nonatomic) char hasButtonOneAppURI;
@property (retain, nonatomic) NSString * buttonOneAppURI;
@property (readonly, nonatomic) char hasButtonTwoMessage;
@property (retain, nonatomic) NSString * buttonTwoMessage;
@property (readonly, nonatomic) char hasButtonTwoAppURI;
@property (retain, nonatomic) NSString * buttonTwoAppURI;
@property (nonatomic) char hasDisplayDestinations;
@property (nonatomic) unsigned int displayDestinations;
@property (nonatomic) char hasReleasePhase;
@property (nonatomic) int releasePhase;
@property (readonly, nonatomic) char hasFlyoverInfo;
@property (retain, nonatomic) GEOPDFlyover * flyoverInfo;
@property (readonly, nonatomic) char hasTitle;
@property (retain, nonatomic) NSString * title;

- (void)dealloc;
- (void)setTitle:(NSString *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)title;
- (GEOAnnouncement *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (char)hasTitle;
- (char)hasMapRegion;
- (void)setUserMessage:(NSString *)arg0;
- (void)setButtonOneMessage:(NSString *)arg0;
- (void)setButtonOneAppURI:(NSString *)arg0;
- (void)setButtonTwoMessage:(NSString *)arg0;
- (void)setButtonTwoAppURI:(NSString *)arg0;
- (void)setFlyoverInfo:(GEOPDFlyover *)arg0;
- (void)setAnnouncementID:(unsigned int)arg0;
- (void)setHasAnnouncementID:(char)arg0;
- (char)hasAnnouncementID;
- (char)hasUserMessage;
- (char)hasButtonOneMessage;
- (char)hasButtonOneAppURI;
- (char)hasButtonTwoMessage;
- (char)hasButtonTwoAppURI;
- (void)setDisplayDestinations:(unsigned int)arg0;
- (void)setHasDisplayDestinations:(char)arg0;
- (char)hasDisplayDestinations;
- (void)setReleasePhase:(int)arg0;
- (void)setHasReleasePhase:(char)arg0;
- (char)hasReleasePhase;
- (char)hasFlyoverInfo;
- (unsigned int)announcementID;
- (NSString *)userMessage;
- (NSString *)buttonOneMessage;
- (NSString *)buttonOneAppURI;
- (NSString *)buttonTwoMessage;
- (NSString *)buttonTwoAppURI;
- (unsigned int)displayDestinations;
- (int)releasePhase;
- (GEOPDFlyover *)flyoverInfo;
- (GEOMapRegion *)mapRegion;
- (void)setMapRegion:(GEOMapRegion *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

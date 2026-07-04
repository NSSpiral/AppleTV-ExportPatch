/* Runtime dump - GEOAvailableAnnouncements
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAvailableAnnouncements : PBCodable <NSCopying>
{
    NSMutableArray * _announcements;
    NSString * _languageCode;
}

@property (retain, nonatomic) NSMutableArray * announcements;
@property (readonly, nonatomic) char hasLanguageCode;
@property (retain, nonatomic) NSString * languageCode;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOAvailableAnnouncements *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)languageCode;
- (void)setLanguageCode:(NSString *)arg0;
- (char)hasLanguageCode;
- (void)setAnnouncements:(NSMutableArray *)arg0;
- (void)addAnnouncement:(GEOAnnouncement *)arg0;
- (unsigned int)announcementsCount;
- (void)clearAnnouncements;
- (NSObject *)announcementAtIndex:(unsigned int)arg0;
- (NSMutableArray *)announcements;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

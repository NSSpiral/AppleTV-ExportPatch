/* Runtime dump - GEOPDEntity
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDEntity : PBCodable <NSCopying>
{
    NSMutableArray * _altFaxs;
    NSMutableArray * _altTelephones;
    NSMutableArray * _altUrls;
    NSString * _fax;
    NSMutableArray * _localizedCategorys;
    NSMutableArray * _names;
    NSMutableArray * _spokenNames;
    NSString * _telephone;
    int _type;
    NSString * _url;
    char _isDisputed;
    char _isPermanentlyClosed;
    struct ? _has;
}

@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) char hasTelephone;
@property (retain, nonatomic) NSString * telephone;
@property (retain, nonatomic) NSMutableArray * altTelephones;
@property (readonly, nonatomic) char hasFax;
@property (retain, nonatomic) NSString * fax;
@property (retain, nonatomic) NSMutableArray * altFaxs;
@property (readonly, nonatomic) char hasUrl;
@property (retain, nonatomic) NSString * url;
@property (retain, nonatomic) NSMutableArray * altUrls;
@property (nonatomic) char hasIsPermanentlyClosed;
@property (nonatomic) char isPermanentlyClosed;
@property (nonatomic) char hasIsDisputed;
@property (nonatomic) char isDisputed;
@property (retain, nonatomic) NSMutableArray * names;
@property (retain, nonatomic) NSMutableArray * spokenNames;
@property (retain, nonatomic) NSMutableArray * localizedCategorys;

+ (NSData *)entityForPlaceData:(NSData *)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)url;
- (void)setType:(int)arg0;
- (int)type;
- (GEOPDEntity *)copyWithZone:(struct _NSZone *)arg0;
- (void)setUrl:(NSString *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setTelephone:(NSString *)arg0;
- (char)hasTelephone;
- (NSString *)telephone;
- (char)isDisputed;
- (void)setIsDisputed:(char)arg0;
- (void)setHasIsDisputed:(char)arg0;
- (char)hasIsDisputed;
- (char)hasUrl;
- (char)hasIsPermanentlyClosed;
- (char)isPermanentlyClosed;
- (NSMutableArray *)localizedCategorys;
- (unsigned int)namesCount;
- (NSString *)bestLocalizedName;
- (unsigned int)spokenNamesCount;
- (NSObject *)spokenNameAtIndex:(unsigned int)arg0;
- (NSMutableArray *)altTelephones;
- (NSMutableArray *)spokenNames;
- (NSMutableArray *)names;
- (void)setAltTelephones:(NSMutableArray *)arg0;
- (void)setFax:(NSString *)arg0;
- (void)setAltFaxs:(NSMutableArray *)arg0;
- (void)setAltUrls:(NSMutableArray *)arg0;
- (void)setNames:(NSMutableArray *)arg0;
- (void)setSpokenNames:(NSMutableArray *)arg0;
- (void)setLocalizedCategorys:(NSMutableArray *)arg0;
- (void)addAltTelephone:(id)arg0;
- (void)addAltFax:(id)arg0;
- (void)addAltUrl:(NSURL *)arg0;
- (void)addSpokenName:(NSString *)arg0;
- (void)addLocalizedCategory:(NSString *)arg0;
- (unsigned int)altTelephonesCount;
- (void)clearAltTelephones;
- (NSObject *)altTelephoneAtIndex:(unsigned int)arg0;
- (unsigned int)altFaxsCount;
- (void)clearAltFaxs;
- (NSObject *)altFaxAtIndex:(unsigned int)arg0;
- (unsigned int)altUrlsCount;
- (void)clearAltUrls;
- (NSObject *)altUrlAtIndex:(unsigned int)arg0;
- (void)clearNames;
- (NSObject *)nameAtIndex:(unsigned int)arg0;
- (void)clearSpokenNames;
- (unsigned int)localizedCategorysCount;
- (void)clearLocalizedCategorys;
- (NSObject *)localizedCategoryAtIndex:(unsigned int)arg0;
- (char)hasFax;
- (void)setIsPermanentlyClosed:(char)arg0;
- (void)setHasIsPermanentlyClosed:(char)arg0;
- (NSString *)fax;
- (NSMutableArray *)altFaxs;
- (NSMutableArray *)altUrls;
- (void)addName:(NSString *)arg0;
- (void)setHasType:(char)arg0;
- (char)hasType;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

/* Runtime dump - UWLMessageHeaders
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface UWLMessageHeaders : PBCodable <NSCopying>
{
    NSMutableArray * _cookies;
    NSString * _userAgent;
    NSString * _xAppleStorefront;
    NSString * _xDsid;
    NSString * _xGuid;
    NSString * _xUseridKey;
    NSString * _xUseridKeyspace;
}

@property (retain, nonatomic) NSString * userAgent;
@property (retain, nonatomic) NSString * xDsid;
@property (retain, nonatomic) NSString * xAppleStorefront;
@property (readonly, nonatomic) char hasXGuid;
@property (retain, nonatomic) NSString * xGuid;
@property (readonly, nonatomic) char hasXUseridKeyspace;
@property (retain, nonatomic) NSString * xUseridKeyspace;
@property (readonly, nonatomic) char hasXUseridKey;
@property (retain, nonatomic) NSString * xUseridKey;
@property (retain, nonatomic) NSMutableArray * cookies;

+ (Class)cookiesType;

- (void)setXAppleStorefront:(NSString *)arg0;
- (void)setXDsid:(NSString *)arg0;
- (void)setCookies:(NSMutableArray *)arg0;
- (void)addCookies:(ATVURLOperationNoCookies *)arg0;
- (void)setXGuid:(NSString *)arg0;
- (void)setXUseridKeyspace:(NSString *)arg0;
- (void)setXUseridKey:(NSString *)arg0;
- (unsigned int)cookiesCount;
- (NSObject *)cookiesAtIndex:(unsigned int)arg0;
- (char)hasXGuid;
- (char)hasXUseridKeyspace;
- (char)hasXUseridKey;
- (NSString *)xDsid;
- (NSString *)xAppleStorefront;
- (NSString *)xGuid;
- (NSString *)xUseridKeyspace;
- (NSString *)xUseridKey;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (UWLMessageHeaders *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (NSMutableArray *)cookies;
- (void)setUserAgent:(NSString *)arg0;
- (NSString *)userAgent;
- (void)clearCookies;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

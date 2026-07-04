/* Runtime dump - BRFieldCKInfo
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRFieldCKInfo : PBCodable <PQLValuable, NSCopying>
{
    NSString * _etag;
    char _knownToServer;
    char _wasCached;
    struct ? _has;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) char hasKnownToServer;
@property (nonatomic) char knownToServer;
@property (nonatomic) char hasWasCached;
@property (nonatomic) char wasCached;
@property (readonly, nonatomic) char hasEtag;
@property (retain, nonatomic) NSString * etag;

+ (BRFieldCKInfo *)newFromSqliteValue:(struct Mem *)arg0;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (BRFieldCKInfo *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setEtag:(NSString *)arg0;
- (void)setKnownToServer:(char)arg0;
- (void)setHasKnownToServer:(char)arg0;
- (char)hasKnownToServer;
- (void)setWasCached:(char)arg0;
- (void)setHasWasCached:(char)arg0;
- (char)hasWasCached;
- (char)hasEtag;
- (char)knownToServer;
- (char)wasCached;
- (NSString *)etag;
- (void)sqliteBind:(struct sqlite3_stmt *)arg0 index:(int)arg1;
- (BRFieldCKInfo *)initWithRecord:(void *)arg0;
- (void)setCKInfoFieldsInRecord:(NSObject *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

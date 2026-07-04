/* Runtime dump - MIPMultiverseIdentifier
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MIPMultiverseIdentifier : PBCodable <NSCopying>
{
    long long _accountId;
    long long _purchaseHistoryId;
    long long _sagaId;
    long long _storeId;
    NSMutableArray * _libraryIdentifiers;
    int _mediaObjectType;
    int _mediaType;
    NSString * _name;
    struct ? _has;
}

@property (nonatomic) char hasMediaObjectType;
@property (nonatomic) int mediaObjectType;
@property (nonatomic) char hasMediaType;
@property (nonatomic) int mediaType;
@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString * name;
@property (nonatomic) char hasAccountId;
@property (nonatomic) long long accountId;
@property (nonatomic) char hasStoreId;
@property (nonatomic) long long storeId;
@property (nonatomic) char hasSagaId;
@property (nonatomic) long long sagaId;
@property (nonatomic) char hasPurchaseHistoryId;
@property (nonatomic) long long purchaseHistoryId;
@property (retain, nonatomic) NSMutableArray * libraryIdentifiers;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (MIPMultiverseIdentifier *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setStoreId:(long long)arg0;
- (void)setHasStoreId:(char)arg0;
- (char)hasStoreId;
- (long long)storeId;
- (void)addLibraryIdentifiers:(id)arg0;
- (unsigned int)libraryIdentifiersCount;
- (void)clearLibraryIdentifiers;
- (NSObject *)libraryIdentifiersAtIndex:(unsigned int)arg0;
- (void)setMediaObjectType:(int)arg0;
- (void)setHasMediaObjectType:(char)arg0;
- (char)hasMediaObjectType;
- (void)setHasMediaType:(char)arg0;
- (char)hasMediaType;
- (void)setAccountId:(long long)arg0;
- (void)setHasAccountId:(char)arg0;
- (char)hasAccountId;
- (void)setSagaId:(long long)arg0;
- (void)setHasSagaId:(char)arg0;
- (char)hasSagaId;
- (void)setPurchaseHistoryId:(long long)arg0;
- (void)setHasPurchaseHistoryId:(char)arg0;
- (char)hasPurchaseHistoryId;
- (int)mediaObjectType;
- (long long)accountId;
- (long long)sagaId;
- (long long)purchaseHistoryId;
- (NSMutableArray *)libraryIdentifiers;
- (void)setLibraryIdentifiers:(NSMutableArray *)arg0;
- (int)mediaType;
- (void)setMediaType:(int)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (char)hasName;

@end

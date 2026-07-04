/* Runtime dump - GEOPDPlaceLookupParameters
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPlaceLookupParameters : PBCodable <NSCopying>
{
    struct ? _muids;
    int _resultProviderId;
    struct ? _has;
}

@property (nonatomic) char hasResultProviderId;
@property (nonatomic) int resultProviderId;
@property (readonly, nonatomic) unsigned int muidsCount;
@property (readonly, nonatomic) unsigned long long * muids;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDPlaceLookupParameters *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setResultProviderId:(int)arg0;
- (void)setHasResultProviderId:(char)arg0;
- (char)hasResultProviderId;
- (int)resultProviderId;
- (unsigned int)muidsCount;
- (void)clearMuids;
- (unsigned long long)muidAtIndex:(unsigned int)arg0;
- (void)addMuid:(unsigned long long)arg0;
- (unsigned long long *)muids;
- (void)setMuids:(unsigned long long *)arg0 count:(unsigned int)arg1;
- (GEOPDPlaceLookupParameters *)initWithMUIDs:(id)arg0 resultProviderID:(int)arg1;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

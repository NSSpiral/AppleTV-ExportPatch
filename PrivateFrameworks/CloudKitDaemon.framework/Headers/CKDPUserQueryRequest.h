/* Runtime dump - CKDPUserQueryRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPUserQueryRequest : PBRequest <NSCopying>
{
    CKDPUserAlias * _alias;
    NSString * _pcsServiceType;
    NSMutableArray * _sortedBys;
}

@property (readonly, nonatomic) char hasAlias;
@property (retain, nonatomic) CKDPUserAlias * alias;
@property (retain, nonatomic) NSMutableArray * sortedBys;
@property (readonly, nonatomic) char hasPcsServiceType;
@property (retain, nonatomic) NSString * pcsServiceType;

+ (NSDictionary *)options;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPUserQueryRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)addSortedBy:(id)arg0;
- (void)setAlias:(CKDPUserAlias *)arg0;
- (unsigned int)sortedBysCount;
- (void)clearSortedBys;
- (NSObject *)sortedByAtIndex:(unsigned int)arg0;
- (void)setPcsServiceType:(NSString *)arg0;
- (char)hasAlias;
- (char)hasPcsServiceType;
- (CKDPUserAlias *)alias;
- (NSMutableArray *)sortedBys;
- (void)setSortedBys:(NSMutableArray *)arg0;
- (NSString *)pcsServiceType;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

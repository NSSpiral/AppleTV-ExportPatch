/* Runtime dump - CKDPQueryRetrieveResponse
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPQueryRetrieveResponse : PBCodable <NSCopying>
{
    NSData * _continuationMarker;
    NSMutableArray * _queryResults;
}

@property (retain, nonatomic) NSMutableArray * queryResults;
@property (readonly, nonatomic) char hasContinuationMarker;
@property (retain, nonatomic) NSData * continuationMarker;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPQueryRetrieveResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setContinuationMarker:(NSData *)arg0;
- (NSMutableArray *)queryResults;
- (char)hasContinuationMarker;
- (NSData *)continuationMarker;
- (void)addQueryResults:(NSArray *)arg0;
- (unsigned int)queryResultsCount;
- (void)clearQueryResults;
- (NSObject *)queryResultsAtIndex:(unsigned int)arg0;
- (void)setQueryResults:(NSMutableArray *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

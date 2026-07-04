/* Runtime dump - CKDPShareRetrieveResponse
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPShareRetrieveResponse : PBCodable <NSCopying>
{
    NSMutableArray * _shares;
}

@property (retain, nonatomic) NSMutableArray * shares;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPShareRetrieveResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (NSMutableArray *)shares;
- (void)addShare:(CKShare *)arg0;
- (unsigned int)sharesCount;
- (void)clearShares;
- (NSObject *)shareAtIndex:(unsigned int)arg0;
- (void)setShares:(NSMutableArray *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

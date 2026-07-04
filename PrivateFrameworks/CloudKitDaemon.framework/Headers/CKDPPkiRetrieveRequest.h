/* Runtime dump - CKDPPkiRetrieveRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPPkiRetrieveRequest : PBRequest <NSCopying>
{
    NSMutableArray * _userIds;
}

@property (retain, nonatomic) NSMutableArray * userIds;

+ (NSDictionary *)options;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPPkiRetrieveRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)addUserId:(NSObject *)arg0;
- (unsigned int)userIdsCount;
- (void)clearUserIds;
- (NSObject *)userIdAtIndex:(unsigned int)arg0;
- (NSMutableArray *)userIds;
- (void)setUserIds:(NSMutableArray *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

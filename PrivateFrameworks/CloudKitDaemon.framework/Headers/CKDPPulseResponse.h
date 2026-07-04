/* Runtime dump - CKDPPulseResponse
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPPulseResponse : PBCodable <NSCopying>
{
    NSString * _currentEtag;
    NSMutableArray * _userDatas;
}

@property (readonly, nonatomic) char hasCurrentEtag;
@property (retain, nonatomic) NSString * currentEtag;
@property (retain, nonatomic) NSMutableArray * userDatas;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPPulseResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)addUserData:(NSData *)arg0;
- (void)setCurrentEtag:(NSString *)arg0;
- (unsigned int)userDatasCount;
- (void)clearUserDatas;
- (NSObject *)userDataAtIndex:(unsigned int)arg0;
- (char)hasCurrentEtag;
- (NSString *)currentEtag;
- (NSMutableArray *)userDatas;
- (void)setUserDatas:(NSMutableArray *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

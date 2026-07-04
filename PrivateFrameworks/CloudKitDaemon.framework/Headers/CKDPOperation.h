/* Runtime dump - CKDPOperation
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPOperation : PBCodable <NSCopying>
{
    NSString * _operationUUID;
    int _type;
    char _last;
    char _synchronousMode;
    struct ? _has;
}

@property (readonly, nonatomic) char hasOperationUUID;
@property (retain, nonatomic) NSString * operationUUID;
@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (nonatomic) char hasSynchronousMode;
@property (nonatomic) char synchronousMode;
@property (nonatomic) char hasLast;
@property (nonatomic) char last;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setType:(int)arg0;
- (int)type;
- (CKDPOperation *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setLast:(char)arg0;
- (void)setOperationUUID:(NSString *)arg0;
- (NSString *)operationUUID;
- (char)hasOperationUUID;
- (void)setSynchronousMode:(char)arg0;
- (void)setHasSynchronousMode:(char)arg0;
- (char)hasSynchronousMode;
- (void)setHasLast:(char)arg0;
- (char)hasLast;
- (char)synchronousMode;
- (char)last;
- (void)setHasType:(char)arg0;
- (char)hasType;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

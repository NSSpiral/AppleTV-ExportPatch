/* Runtime dump - CKDPUniqueFieldFailure
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPUniqueFieldFailure : PBCodable <NSCopying>
{
    CKDPIdentifier * _identifierForConstraintFailure;
}

@property (readonly, nonatomic) char hasIdentifierForConstraintFailure;
@property (retain, nonatomic) CKDPIdentifier * identifierForConstraintFailure;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPUniqueFieldFailure *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setIdentifierForConstraintFailure:(CKDPIdentifier *)arg0;
- (char)hasIdentifierForConstraintFailure;
- (CKDPIdentifier *)identifierForConstraintFailure;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

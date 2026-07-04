/* Runtime dump - CKDPDateStatistics
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPDateStatistics : PBCodable <NSCopying>
{
    CKDPDate * _creation;
    CKDPDate * _modification;
}

@property (readonly, nonatomic) char hasCreation;
@property (retain, nonatomic) CKDPDate * creation;
@property (readonly, nonatomic) char hasModification;
@property (retain, nonatomic) CKDPDate * modification;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPDateStatistics *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setCreation:(CKDPDate *)arg0;
- (void)setModification:(CKDPDate *)arg0;
- (char)hasCreation;
- (char)hasModification;
- (CKDPDate *)creation;
- (CKDPDate *)modification;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

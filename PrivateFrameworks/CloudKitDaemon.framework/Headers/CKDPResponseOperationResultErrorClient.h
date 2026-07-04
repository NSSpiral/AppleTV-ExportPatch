/* Runtime dump - CKDPResponseOperationResultErrorClient
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPResponseOperationResultErrorClient : PBCodable <NSCopying>
{
    CKDPOplockFailure * _oplockFailure;
    int _type;
    CKDPUniqueFieldFailure * _uniqueFieldFailure;
    struct ? _has;
}

@property (readonly, nonatomic) char hasOplockFailure;
@property (retain, nonatomic) CKDPOplockFailure * oplockFailure;
@property (readonly, nonatomic) char hasUniqueFieldFailure;
@property (retain, nonatomic) CKDPUniqueFieldFailure * uniqueFieldFailure;
@property (nonatomic) char hasType;
@property (nonatomic) int type;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setType:(int)arg0;
- (int)type;
- (CKDPResponseOperationResultErrorClient *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setOplockFailure:(CKDPOplockFailure *)arg0;
- (void)setUniqueFieldFailure:(CKDPUniqueFieldFailure *)arg0;
- (char)hasOplockFailure;
- (CKDPOplockFailure *)oplockFailure;
- (char)hasUniqueFieldFailure;
- (CKDPUniqueFieldFailure *)uniqueFieldFailure;
- (NSDictionary *)_prettyDictionaryRepresentation;
- (void)setHasType:(char)arg0;
- (char)hasType;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

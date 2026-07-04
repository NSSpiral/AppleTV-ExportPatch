/* Runtime dump - CKDPLocation
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPLocation : PBCodable <NSCopying>
{
    CKDPLocationBound * _bounds;
    CKDPLocationCoordinate * _coordinate;
}

@property (readonly, nonatomic) char hasCoordinate;
@property (retain, nonatomic) CKDPLocationCoordinate * coordinate;
@property (readonly, nonatomic) char hasBounds;
@property (retain, nonatomic) CKDPLocationBound * bounds;

- (CKDPLocationBound *)bounds;
- (void)setBounds:(CKDPLocationBound *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPLocation *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (char)hasCoordinate;
- (char)hasBounds;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (CKDPLocationCoordinate *)coordinate;
- (void)setCoordinate:(CKDPLocationCoordinate *)arg0;

@end

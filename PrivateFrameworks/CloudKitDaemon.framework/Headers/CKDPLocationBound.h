/* Runtime dump - CKDPLocationBound
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPLocationBound : PBCodable <NSCopying>
{
    double _radius;
    struct ? _has;
}

@property (nonatomic) char hasRadius;
@property (nonatomic) double radius;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPLocationBound *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (double)radius;
- (void)setRadius:(double)arg0;
- (void)setHasRadius:(char)arg0;
- (char)hasRadius;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

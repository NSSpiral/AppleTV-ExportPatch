/* Runtime dump - CKDPDate
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPDate : PBCodable <NSCopying>
{
    double _time;
    struct ? _has;
}

@property (nonatomic) char hasTime;
@property (nonatomic) double time;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPDate *)copyWithZone:(struct _NSZone *)arg0;
- (void)setTime:(double)arg0;
- (double)time;
- (NSDictionary *)dictionaryRepresentation;
- (NSDictionary *)_prettyDictionaryRepresentation;
- (void)setHasTime:(char)arg0;
- (char)hasTime;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

/* Runtime dump - CKDPUserAlias
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPUserAlias : PBCodable <NSCopying>
{
    NSString * _identifier;
    int _type;
    struct ? _has;
}

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString * identifier;
@property (nonatomic) char hasType;
@property (nonatomic) int type;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)identifier;
- (void)setType:(int)arg0;
- (int)type;
- (CKDPUserAlias *)copyWithZone:(struct _NSZone *)arg0;
- (void)setIdentifier:(NSString *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (char)hasIdentifier;
- (void)setHasType:(char)arg0;
- (char)hasType;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

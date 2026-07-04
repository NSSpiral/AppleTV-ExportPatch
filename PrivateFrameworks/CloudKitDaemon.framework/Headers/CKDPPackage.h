/* Runtime dump - CKDPPackage
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPPackage : PBCodable <NSCopying>
{
    CKDPAsset * _manifest;
    NSMutableArray * _sections;
}

@property (readonly, nonatomic) char hasManifest;
@property (retain, nonatomic) CKDPAsset * manifest;
@property (retain, nonatomic) NSMutableArray * sections;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPPackage *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setSections:(NSMutableArray *)arg0;
- (NSMutableArray *)sections;
- (void)addSections:(NSArray *)arg0;
- (unsigned int)sectionsCount;
- (void)clearSections;
- (NSObject *)sectionsAtIndex:(unsigned int)arg0;
- (char)hasManifest;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (CKDPAsset *)manifest;
- (void)setManifest:(CKDPAsset *)arg0;

@end

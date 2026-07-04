/* Runtime dump - BRFieldPkgLocalItem
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRFieldPkgLocalItem : PBCodable <NSCopying>
{
    long long _fileID;
    long long _size;
    unsigned int _generationID;
    BRFieldPkgItem * _item;
    struct ? _has;
}

@property (retain, nonatomic) BRFieldPkgItem * item;
@property (nonatomic) long long fileID;
@property (nonatomic) char hasGenerationID;
@property (nonatomic) unsigned int generationID;
@property (nonatomic) char hasSize;
@property (nonatomic) long long size;

- (long long)size;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (BRFieldPkgItem *)item;
- (BRFieldPkgLocalItem *)copyWithZone:(struct _NSZone *)arg0;
- (void)setSize:(long long)arg0;
- (void)setItem:(BRFieldPkgItem *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (long long)fileID;
- (unsigned int)generationID;
- (void)setFileID:(long long)arg0;
- (void)setGenerationID:(unsigned int)arg0;
- (void)setHasGenerationID:(char)arg0;
- (char)hasGenerationID;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (char)hasSize;
- (void)setHasSize:(char)arg0;

@end

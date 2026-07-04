/* Runtime dump - BRFieldFinderTags
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRFieldFinderTags : PBCodable <NSCopying>
{
    NSMutableArray * _tags;
}

@property (retain, nonatomic) NSMutableArray * tags;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (BRFieldFinderTags *)copyWithZone:(struct _NSZone *)arg0;
- (NSMutableArray *)tags;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)addTags:(id)arg0;
- (unsigned int)tagsCount;
- (void)clearTags;
- (NSObject *)tagsAtIndex:(unsigned int)arg0;
- (void)setTags:(NSMutableArray *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

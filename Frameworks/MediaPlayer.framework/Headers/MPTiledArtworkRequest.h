/* Runtime dump - MPTiledArtworkRequest
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPTiledArtworkRequest : NSObject <NSCopying>
{
    NSArray * _artworkCatalogsCache;
    id _artworkCatalogsBlock;
    unsigned int _numberOfColumns;
    unsigned int _numberOfRows;
    float _tileSpacing;
    <NSCopying> * _entityIdentifier;
    <NSCopying> * _namespaceIdentifier;
    <NSCopying> * _revisionIdentifier;
}

@property (copy, nonatomic) id artworkCatalogsBlock;
@property (nonatomic) unsigned int numberOfColumns;
@property (nonatomic) unsigned int numberOfRows;
@property (nonatomic) float tileSpacing;
@property (copy, nonatomic) <NSCopying> * entityIdentifier;
@property (copy, nonatomic) <NSCopying> * namespaceIdentifier;
@property (copy, nonatomic) <NSCopying> * revisionIdentifier;

- (NSNumber *)artworkCatalogsWithCount:(unsigned int)arg0;
- (id /* block */)artworkCatalogsBlock;
- (void)setArtworkCatalogsBlock:(id /* block */)arg0;
- (float)tileSpacing;
- (void)setTileSpacing:(float)arg0;
- (<NSCopying> *)entityIdentifier;
- (void)setEntityIdentifier:(<NSCopying> *)arg0;
- (<NSCopying> *)namespaceIdentifier;
- (void)setNamespaceIdentifier:(<NSCopying> *)arg0;
- (<NSCopying> *)revisionIdentifier;
- (void)setRevisionIdentifier:(<NSCopying> *)arg0;
- (unsigned int)numberOfColumns;
- (MPTiledArtworkRequest *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)numberOfRows;
- (void)setNumberOfRows:(unsigned int)arg0;
- (void).cxx_destruct;
- (void)setNumberOfColumns:(unsigned int)arg0;

@end

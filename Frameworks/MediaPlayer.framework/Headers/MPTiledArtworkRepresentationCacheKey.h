/* Runtime dump - MPTiledArtworkRepresentationCacheKey
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPTiledArtworkRepresentationCacheKey : NSObject <NSCopying>
{
    id _entityIdentifier;
    id _namespaceIdentifier;
    unsigned int _numberOfColumns;
    unsigned int _numberOfRows;
    id _revisionIdentifier;
    struct CGSize _scaledFittingSize;
    float _tileSpacing;
}

- (MPTiledArtworkRepresentationCacheKey *)initWithTiledArtworkRequest:(NSURLRequest *)arg0 scaledFittingSize:(struct CGSize)arg1;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (MPTiledArtworkRepresentationCacheKey *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;

@end

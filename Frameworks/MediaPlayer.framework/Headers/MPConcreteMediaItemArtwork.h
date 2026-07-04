/* Runtime dump - MPConcreteMediaItemArtwork
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPConcreteMediaItemArtwork : MPMediaItemArtwork
{
    MPArtworkCatalog * _catalog;
    struct CGRect _bounds;
}

@property (readonly, nonatomic) MPArtworkCatalog * artworkCatalog;

- (MPArtworkCatalog *)artworkCatalog;
- (NSObject *)imageWithSize:(struct CGSize)arg0;
- (MPConcreteMediaItemArtwork *)initWithArtworkCatalog:(MPArtworkCatalog *)arg0;
- (struct CGRect)bounds;
- (void).cxx_destruct;

@end

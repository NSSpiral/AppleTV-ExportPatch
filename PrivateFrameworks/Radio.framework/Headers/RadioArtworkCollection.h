/* Runtime dump - RadioArtworkCollection
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioArtworkCollection : NSObject <NSCopying>
{
    NSArray * _artworks;
}

@property (readonly, nonatomic) NSArray * artworks;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (RadioArtworkCollection *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (RadioArtworkCollection *)initWithArtworkVariants:(id)arg0;
- (RadioArtworkCollection *)initWithArtworks:(NSArray *)arg0;
- (NSObject *)bestArtworkForPointSize:(struct CGSize)arg0;
- (id)_artworksBySortingArtworks:(id)arg0;
- (NSObject *)bestArtworkForPixelSize:(struct CGSize)arg0;
- (NSArray *)artworks;

@end

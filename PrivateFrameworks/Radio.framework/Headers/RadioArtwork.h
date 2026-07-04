/* Runtime dump - RadioArtwork
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioArtwork : NSObject <NSCopying>
{
    NSURL * _URL;
    struct CGSize _pixelSize;
}

@property (readonly, nonatomic) struct CGSize pixelSize;
@property (readonly, nonatomic) struct CGSize pointSize;
@property (readonly, nonatomic) NSURL * URL;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (RadioArtwork *)copyWithZone:(struct _NSZone *)arg0;
- (struct CGSize)pointSize;
- (NSURL *)URL;
- (void).cxx_destruct;
- (struct CGSize)pixelSize;
- (RadioArtwork *)initWithArtworkURL:(NSURL *)arg0 pixelSize:(struct CGSize)arg1;
- (RadioArtwork *)initWithArtworkDictionary:(NSDictionary *)arg0;

@end

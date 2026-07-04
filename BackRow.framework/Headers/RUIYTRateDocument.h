/* Runtime dump - RUIYTRateDocument
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/RUIYTCommunityFeaturesDocument.h>
@interface RUIYTRateDocument : RUIYTCommunityFeaturesDocument
{
    char _like;
}

@property (nonatomic) char like;

- (void)_loadRequest;
- (void)setLike:(char)arg0;
- (char)like;
- (RUIYTRateDocument *)initWithAsset:(NSSet *)arg0 like:(char)arg1;

@end

/* Runtime dump - MCSlideAsset
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCSlideAsset : NSObject
{
    MCAssetVideo * _asset;
    NSString * _kenBurnsType;
    struct CGPoint center;
    float scale;
    float rotation;
}

@property (retain) MCAssetVideo * asset;
@property (copy) NSString * kenBurnsType;

- (void)dealloc;
- (MCSlideAsset *)init;
- (NSString *)description;
- (MCAssetVideo *)asset;
- (void)setAsset:(MCAssetVideo *)arg0;
- (NSString *)kenBurnsType;
- (void)setKenBurnsType:(NSString *)arg0;

@end

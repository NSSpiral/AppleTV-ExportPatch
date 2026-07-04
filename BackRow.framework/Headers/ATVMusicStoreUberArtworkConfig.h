/* Runtime dump - ATVMusicStoreUberArtworkConfig
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVMusicStoreUberArtworkConfig : NSObject
{
    struct ? _bottomInsets;
    NSDictionary * _dict720;
    NSDictionary * _dict1080;
}

@property (nonatomic) struct ? bottomInsets;
@property (copy, nonatomic) NSDictionary * dict720;
@property (copy, nonatomic) NSDictionary * dict1080;

- (NSURL *)urlForCurrentResolution;
- (struct CGSize)sizeForCurrentResolution;
- (struct UIEdgeInsets)insetsForCurrentResolution;
- (ATVMusicStoreUberArtworkConfig *)initWithMasterArtDicts:(id)arg0;
- (void)setBottomInsets:(struct ?)arg0;
- (id)_currentDict;
- (struct ?)bottomInsets;
- (NSDictionary *)dict1080;
- (NSDictionary *)dict720;
- (void)setDict720:(NSDictionary *)arg0;
- (void)setDict1080:(NSDictionary *)arg0;
- (void).cxx_destruct;

@end

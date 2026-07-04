/* Runtime dump - ATVMusicStoreUberConfig
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVMusicStoreUberArtworkConfig;
@interface ATVMusicStoreUberConfig : NSObject
{
    NSDictionary * _dict;
    ATVMusicStoreUberArtworkConfig * _artworkConfig;
}

@property (copy, nonatomic) NSDictionary * dict;
@property (copy, nonatomic) ATVMusicStoreUberArtworkConfig * artworkConfig;

+ (ATVMusicStoreUberConfig *)configWithItemDict:(id)arg0;
+ (ATVMusicStoreUberConfig *)configWithPageDict:(unsigned short)arg0;

- (ATVMusicStoreUberArtworkConfig *)artworkConfig;
- (ATVMusicStoreUberConfig *)initWithDict:(NSDictionary *)arg0 bottomInsets:(struct ?)arg1;
- (UIColor *)_uiColorWithUberColor:(UIColor *)arg0;
- (void)setDict:(NSDictionary *)arg0;
- (void)setArtworkConfig:(ATVMusicStoreUberArtworkConfig *)arg0;
- (UIColor *)titleColor;
- (UIColor *)primaryColor;
- (void).cxx_destruct;
- (NSDictionary *)dict;

@end

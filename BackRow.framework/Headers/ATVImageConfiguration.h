/* Runtime dump - ATVImageConfiguration
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVImageConfiguration : NSObject
{
    char _mustUseDefaultPlaceholder;
    NSString * _defaultPlaceholder;
    struct ? _preferredSize;
}

@property (nonatomic) char mustUseDefaultPlaceholder;
@property (retain, nonatomic) NSString * defaultPlaceholder;
@property (nonatomic) struct ? preferredSize;

- (void)setPreferredSize:(struct ?)arg0;
- (NSString *)defaultPlaceholder;
- (void)setDefaultPlaceholder:(NSString *)arg0;
- (void)setMustUseDefaultPlaceholder:(char)arg0;
- (char)mustUseDefaultPlaceholder;
- (void).cxx_destruct;
- (struct ?)preferredSize;

@end

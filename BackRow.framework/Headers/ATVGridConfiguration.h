/* Runtime dump - ATVGridConfiguration
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVGridConfiguration : NSObject
{
    char _allowsWrapping;
    struct ? _rowWidth;
    float _marginProductWidth;
}

@property (nonatomic) struct ? rowWidth;
@property (nonatomic) float marginProductWidth;
@property (nonatomic) char allowsWrapping;

- (float)marginProductWidth;
- (void)setMarginProductWidth:(float)arg0;
- (char)allowsWrapping;
- (void)setAllowsWrapping:(char)arg0;
- (ATVGridConfiguration *)init;
- (struct ?)rowWidth;
- (void)setRowWidth:(struct ?)arg0;

@end

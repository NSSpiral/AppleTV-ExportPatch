/* Runtime dump - ATVTextConfiguration
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVTextConfiguration : NSObject
{
    NSDictionary * _defaultAttributes;
    int _maxLines;
}

@property (retain, nonatomic) NSDictionary * defaultAttributes;
@property (nonatomic) int maxLines;

- (void)setMaxLines:(int)arg0;
- (ATVTextConfiguration *)init;
- (void)setDefaultAttributes:(NSDictionary *)arg0;
- (NSDictionary *)defaultAttributes;
- (void).cxx_destruct;
- (int)maxLines;

@end

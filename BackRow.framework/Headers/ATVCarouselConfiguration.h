/* Runtime dump - ATVCarouselConfiguration
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVCarouselConfiguration : NSObject
{
    NSArray * _allowedLayouts;
    unsigned int _oneupTransition;
}

@property (retain, nonatomic) NSArray * allowedLayouts;
@property (nonatomic) unsigned int oneupTransition;

- (NSArray *)allowedLayouts;
- (void)setAllowedLayouts:(NSArray *)arg0;
- (unsigned int)oneupTransition;
- (void)setOneupTransition:(unsigned int)arg0;
- (void).cxx_destruct;

@end

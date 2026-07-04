/* Runtime dump - ATVCarouselViewUIOpTypeEventInfo
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVCarouselViewUIOpTypeEventInfo : NSObject
{
    unsigned int _skipCount;
    unsigned int _activeSkipCount;
}

@property (nonatomic) unsigned int skipCount;
@property (nonatomic) unsigned int activeSkipCount;

- (unsigned int)activeSkipCount;
- (void)setActiveSkipCount:(unsigned int)arg0;
- (void)setSkipCount:(unsigned int)arg0;
- (unsigned int)skipCount;

@end

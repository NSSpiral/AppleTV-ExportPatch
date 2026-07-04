/* Runtime dump - BRContainerViewDataCache
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRContainerViewDataCache : NSObject
{
    NSArray * _sectionInfos;
    long _numberOfItems;
    long _numberOfColumns;
}

@property (retain) NSArray * sectionInfos;
@property long numberOfItems;
@property long numberOfColumns;

- (void)setNumberOfItems:(long)arg0;
- (void)setSectionInfos:(NSArray *)arg0;
- (NSArray *)sectionInfos;
- (void)dealloc;
- (long)numberOfColumns;
- (long)numberOfItems;
- (void)setNumberOfColumns:(long)arg0;

@end

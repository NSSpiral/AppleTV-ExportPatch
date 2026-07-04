/* Runtime dump - BRContainerViewSectionInfo
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRContainerViewSectionInfo : NSObject
{
    char _hasHeader;
    long _numberOfItems;
}

@property long numberOfItems;
@property char hasHeader;

- (void)setNumberOfItems:(long)arg0;
- (long)numberOfItems;
- (char)hasHeader;
- (void)setHasHeader:(char)arg0;

@end

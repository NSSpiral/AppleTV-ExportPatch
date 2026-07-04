/* Runtime dump - ATVMusicStoreTabManager
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>
@interface ATVMusicStoreTabManager : BRSingleton
{
    NSMutableDictionary * _tabsContainer;
    NSString * _savedTabsFilePath;
}

+ (ATVMusicStoreTabManager *)singleton;
+ (void)setSingleton:(NSObject *)arg0;

- (char)preferredSegmentExistsForTabName:(NSString *)arg0;
- (NSString *)preferredSegmentNameForTabName:(NSString *)arg0;
- (void)setPreferredSegmentName:(NSString *)arg0 forTabName:(NSString *)arg1;
- (void)_loadTabs;
- (NSArray *)_tabs;
- (void)_saveTabs;
- (char)segmentNamed:(id)arg0 isPreferredSegmentForTabName:(NSString *)arg1;
- (void)dealloc;
- (ATVMusicStoreTabManager *)init;

@end

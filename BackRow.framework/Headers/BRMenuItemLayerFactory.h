/* Runtime dump - BRMenuItemLayerFactory
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>
@interface BRMenuItemLayerFactory : BRSingleton
{
    NSArray * _populators;
}

+ (BRMenuItemLayerFactory *)singleton;
+ (void)setSingleton:(NSObject *)arg0;

- (void)registerPopulator:(Class)arg0;
- (NSObject *)menuItemForObject:(NSObject *)arg0;
- (NSObject *)titleForObject:(NSObject *)arg0;
- (float)menuItemHeightForObject:(NSObject *)arg0;
- (NSObject *)menuItemForObject:(NSObject *)arg0 delegate:(NSObject *)arg1;
- (float)menuItemHeightForObject:(NSObject *)arg0 delegate:(NSObject *)arg1;
- (NSObject *)titleForObject:(NSObject *)arg0 delegate:(NSObject *)arg1;
- (NSObject *)_populatorForObject:(NSObject *)arg0;
- (void)dealloc;
- (BRMenuItemLayerFactory *)init;

@end

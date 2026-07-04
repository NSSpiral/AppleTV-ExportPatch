/* Runtime dump - MEAirTunesMediaProvider
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRBaseMediaProvider.h>

@class MEAirTunesMediaAsset;
@interface MEAirTunesMediaProvider : BRBaseMediaProvider
{
    MEAirTunesMediaAsset * _asset;
}

- (NSArray *)objectsWithEntityName:(NSString *)arg0 qualifiedByPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 excludeHiddenObjects:(char)arg3 error:(id *)arg4;
- (MEAirTunesMediaProvider *)init;
- (NSSet *)mediaTypes;
- (void).cxx_destruct;
- (int)status;

@end

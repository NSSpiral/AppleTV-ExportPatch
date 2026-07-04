/* Runtime dump - GEOResourceManager
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOResourceManager : NSObject
{
    unsigned int _tileGroupIdentifier;
}

+ (GEOResourceManager *)sharedManager;
+ (GEOResourceManager *)sharedManagerForTileGroupIdentifier:(unsigned int)arg0;

- (NSString *)pathForResourceWithName:(NSString *)arg0 fallbackBundle:(NSObject *)arg1;
- (NSString *)dataForResourceWithName:(NSString *)arg0 fallbackBundle:(NSObject *)arg1;
- (GEOResourceManager *)initWithTileGroupIdentifier:(unsigned int)arg0;
- (NSSet *)allResourceNames;
- (NSString *)dataForResourceWithName:(NSString *)arg0 fallbackBundle:(NSObject *)arg1 fallbackNameHandler:(id /* block */)arg2;
- (NSString *)pathForResourceWithName:(NSString *)arg0 fallbackBundle:(NSObject *)arg1 fallbackNameHandler:(id /* block */)arg2;
- (char)isDevResourceWithName:(NSString *)arg0 fallbackBundle:(NSObject *)arg1 fallbackNameHandler:(id /* block */)arg2;

@end

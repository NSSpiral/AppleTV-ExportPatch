/* Runtime dump - GEORequestThrottler
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORequestThrottler : NSObject
{
    NSMapTable * _throttleMap;
}

+ (GEORequestThrottler *)sharedThrottler;

- (void)dealloc;
- (GEORequestThrottler *)init;
- (void)clear;
- (void)_countryProvidersDidChange:(NSDictionary *)arg0;
- (char)allowRequest:(unsigned int)arg0 toURL:(NSURL *)arg1;

@end

/* Runtime dump - GEOTestTileRequester
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTestTileRequester : GEOTileRequester
{
    NSTimer * _timer;
}

+ (unsigned char)tileProviderIdentifier;

- (void)dealloc;
- (void)start;
- (void)_sendResults:(NSArray *)arg0;

@end

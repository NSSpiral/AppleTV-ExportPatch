/* Runtime dump - GEOMapRequestManager
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapRequestManager : NSObject
{
    NSMutableSet * _requests;
}

- (void)dealloc;
- (GEOMapRequestManager *)init;
- (void)trackRequest:(NSURLRequest *)arg0;
- (void)requestComplete:(id)arg0;

@end

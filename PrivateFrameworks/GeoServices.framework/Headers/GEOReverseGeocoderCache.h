/* Runtime dump - GEOReverseGeocoderCache
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOReverseGeocoderCache : NSCache

+ (GEOReverseGeocoderCache *)sharedCache;

- (GEOReverseGeocoderCache *)init;
- (void)clear;
- (NSURLRequest *)responseForRequest:(NSURLRequest *)arg0;
- (void)setResponse:(NSURLResponse *)arg0 forRequest:(NSURLRequest *)arg1;

@end

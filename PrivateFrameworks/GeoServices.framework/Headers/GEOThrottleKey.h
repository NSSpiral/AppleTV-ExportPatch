/* Runtime dump - GEOThrottleKey
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOThrottleKey : NSObject
{
    NSURL * _serverURL;
    unsigned int _requestType;
}

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (GEOThrottleKey *)initWithRequestType:(unsigned int)arg0 serverURL:(NSURL *)arg1;

@end

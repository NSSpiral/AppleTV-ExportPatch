/* Runtime dump - GEOLocationShiftProvider
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLocationShiftProvider : NSObject

+ (unsigned short)providerID;

- (void)startRequest:(NSURLRequest *)arg0 finished:(id /* block */)arg1 error:(/* block */ id)arg2;
- (void)cancelRequest;

@end

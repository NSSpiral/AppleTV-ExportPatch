/* Runtime dump - GEOLocationShiftFunctionRequest
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLocationShiftFunctionRequest : NSObject
{
    unsigned short _providerID;
    GEOLocationShiftRequest * _locationShiftRequest;
    GEOPolyLocationShiftRequest * _polyLocationShiftRequest;
}

@property (nonatomic) unsigned short providerID;
@property (nonatomic) struct ? coordinate;
@property (readonly, nonatomic) PBRequest * shiftRequest;

- (void)dealloc;
- (void)setProviderID:(unsigned short)arg0;
- (PBRequest *)shiftRequest;
- (unsigned short)providerID;
- (struct ?)coordinate;
- (void)setCoordinate:(struct ?)arg0;

@end

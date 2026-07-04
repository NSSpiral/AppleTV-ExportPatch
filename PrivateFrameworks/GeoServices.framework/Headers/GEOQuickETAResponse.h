/* Runtime dump - GEOQuickETAResponse
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOQuickETAResponse : NSObject
{
    GEOLocation * _sourceLocation;
    GEOLocation * _destinationLocation;
    unsigned int _responseETASeconds;
    unsigned int _baselineETASeconds;
    double _distance;
    NSMutableArray * _sortedETAs;
}

@property (readonly, nonatomic) GEOLocation * sourceLocation;
@property (readonly, nonatomic) GEOLocation * destinationLocation;
@property (readonly, nonatomic) unsigned int responseETASeconds;
@property (readonly, nonatomic) unsigned int baselineETASeconds;
@property (readonly, nonatomic) double distance;
@property (readonly, nonatomic) NSMutableArray * sortedETAs;

- (void)dealloc;
- (NSMutableArray *)sortedETAs;
- (GEOQuickETAResponse *)initWithETAResult:(NSObject *)arg0 fromRequest:(NSURLRequest *)arg1;
- (GEOQuickETAResponse *)initWithDirectionsResponse:(NSURLResponse *)arg0 fromRequest:(NSURLRequest *)arg1;
- (GEOLocation *)sourceLocation;
- (GEOLocation *)destinationLocation;
- (unsigned int)responseETASeconds;
- (unsigned int)baselineETASeconds;
- (double)distance;

@end

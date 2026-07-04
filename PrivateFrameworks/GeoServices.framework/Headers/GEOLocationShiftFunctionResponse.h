/* Runtime dump - GEOLocationShiftFunctionResponse
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLocationShiftFunctionResponse : NSObject
{
    struct ? _originalCoordinate;
    struct ? _shiftedCoordinate;
    double _creationTime;
    id _params;
    double _radius;
    char _isPolyLocationShift;
    char _shouldUsePolyShiftFunction;
}

@property (nonatomic) struct ? originalCoordinate;

- (char)needsNewFunctionForCoordinate:(struct ?)arg0;
- (char)wantsNewFunctionForCoordinate:(struct ?)arg0;
- (struct ?)shiftedCoordinateForCoordinate:(struct ?)arg0 accuracy:(double *)arg1;
- (GEOLocationShiftFunctionResponse *)initWithLocationShiftResponse:(NSURLResponse *)arg0 originalCoordinate:(struct ?)arg1;
- (GEOLocationShiftFunctionResponse *)initWithPolyLocationShiftResponse:(NSURLResponse *)arg0 originalCoordinate:(struct ?)arg1;
- (struct ?)originalCoordinate;
- (void)setOriginalCoordinate:(struct ?)arg0;

@end

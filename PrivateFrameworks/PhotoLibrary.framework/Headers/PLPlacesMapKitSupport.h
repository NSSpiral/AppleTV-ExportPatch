/* Runtime dump - PLPlacesMapKitSupport
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPlacesMapKitSupport : NSObject
{
    Class _pinAnnotationViewClass;
    Class _annotationViewClass;
    Class _mapViewClass;
    Class _polylineClass;
    Class _polylineViewClass;
    struct ? _mapRectWorld;
    struct ? _mapRectNull;
    /* block */ id * _mkMapRectMakeWithRadialDistance;
    /* block */ id * _mkMapRectUnion;
    /* block */ id * _mkMapRectIntersectsRect;
    /* block */ id * _mkMapRectIntersectsMapRectWrappingMeridian;
    /* block */ id * _mkCoordinateRegionForMapRect;
    /* block */ id * _mkMapRectForCoordinateRegion;
    /* block */ id * _mkMapPointForCoordinate;
    /* block */ id * _mkCoordinateForMapPoint;
    /* block */ id * _mkMapPointsPerMeterAtLatitude;
    /* block */ id * _mkMetersPerMapPointAtLatitude;
}

+ (PLPlacesMapKitSupport *)sharedInstance;

- (PLPlacesMapKitSupport *)init;
- (Class)pinAnnotationViewClass;
- (Class)annotationViewClass;
- (Class)mapViewClass;
- (Class)polylineClass;
- (Class)polylineViewClass;
- (struct ?)mapRectWorld;
- (struct ?)mapRectNull;
- (struct ?)mapRectAtCoordinate:(id)arg0 radialDistance:(SEL)arg1;
- (struct ?)mapRectUnion:(id)arg0 rect:(SEL)arg1;
- (char)mapRectIntersectsRect:(struct ?)arg0 rect:(struct ?)arg1;
- (char)mapRectIntersectsWrappingMeridian:(struct ?)arg0 rect:(struct ?)arg1;
- (struct ?)coordinateRegionForMapRect:(NSObject *)arg0;
- (struct ?)mapRectForCoordinateRegion:(NSObject *)arg0;
- (struct ?)mapPointForCoordinate:(struct ?)arg0;
- (struct ?)coordinateForMapPoint:(struct ?)arg0;
- (double)mapPointsPerMeterAtLatitude:(double)arg0;
- (double)metersPerMapPointAtLatitude:(double)arg0;

@end

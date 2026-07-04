/* Runtime dump - MKPolygon
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPolygon : MKMultiPoint <MKOverlay>
{
    struct ? _centroid;
    NSArray * _interiorPolygons;
    char _isDefinitelyConvex;
}

@property (readonly) NSArray * interiorPolygons;
@property (nonatomic) char _isDefinitelyConvex;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) struct ? coordinate;
@property (readonly, copy, nonatomic) NSString * title;
@property (readonly, copy, nonatomic) NSString * subtitle;
@property (readonly, nonatomic) struct ? boundingMapRect;

+ (MKPolygon *)polygonWithPoints:(struct ? *)arg0 count:(unsigned int)arg1 interiorPolygons:(NSArray *)arg2;
+ (MKPolygon *)polygonWithCoordinates:(struct ? *)arg0 count:(unsigned int)arg1 interiorPolygons:(NSArray *)arg2;
+ (MKPolygon *)polygonWithPoints:(struct ? *)arg0 count:(unsigned int)arg1;
+ (MKPolygon *)polygonWithCoordinates:(struct ? *)arg0 count:(unsigned int)arg1;
+ (MKPolygon *)polygonEnclosingMapPoints:(struct ? *)arg0 count:(unsigned int)arg1;
+ (NSObject *)_polygonWithMapRect:(struct ?)arg0;

- (struct ?)boundingMapRect;
- (char)intersectsMapRect:(struct ?)arg0;
- (NSArray *)interiorPolygons;
- (void)set_isDefinitelyConvex:(char)arg0;
- (char)_isDefinitelyConvex;
- (void).cxx_destruct;
- (struct ?)coordinate;

@end

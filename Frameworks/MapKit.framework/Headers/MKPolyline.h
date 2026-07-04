/* Runtime dump - MKPolyline
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPolyline : MKMultiPoint <MKOverlay>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) struct ? coordinate;
@property (readonly, copy, nonatomic) NSString * title;
@property (readonly, copy, nonatomic) NSString * subtitle;
@property (readonly, nonatomic) struct ? boundingMapRect;

+ (MKPolyline *)polylineWithCoordinates:(struct ? *)arg0 count:(unsigned int)arg1;
+ (MKPolyline *)polylineWithPoints:(struct ? *)arg0 count:(unsigned int)arg1;

- (struct ?)boundingMapRect;
- (char)intersectsMapRect:(struct ?)arg0;
- (void)_calculateBounds;
- (struct ?)coordinate;

@end

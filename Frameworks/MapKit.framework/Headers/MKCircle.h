/* Runtime dump - MKCircle
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKCircle : MKShape <MKOverlay>
{
    struct ? _coordinate;
    double _radius;
    struct ? _boundingMapRect;
}

@property (readonly, nonatomic) struct ? coordinate;
@property (readonly, nonatomic) double radius;
@property (readonly, nonatomic) struct ? boundingMapRect;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, copy, nonatomic) NSString * title;
@property (readonly, copy, nonatomic) NSString * subtitle;

+ (MKCircle *)circleWithCenterCoordinate:(struct ?)arg0 radius:(double)arg1;
+ (MKCircle *)circleWithMapRect:(struct ?)arg0;

- (struct ?)boundingMapRect;
- (char)intersectsMapRect:(struct ?)arg0;
- (MKCircle *)_initWithCenterCoordinate:(struct ?)arg0 radius:(double)arg1;
- (double)radius;
- (struct ?)coordinate;

@end

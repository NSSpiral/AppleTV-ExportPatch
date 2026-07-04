/* Runtime dump - MKUserLocationAnnotation
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKUserLocationAnnotation : NSObject <MKUserLocationAnnotation>
{
    struct ? _coordinate;
    double _accuracy;
}

@property (nonatomic) double accuracy;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) struct ? coordinate;
@property (readonly, copy, nonatomic) NSString * title;
@property (readonly, copy, nonatomic) NSString * subtitle;

- (void)setAccuracy:(double)arg0;
- (struct ?)coordinate;
- (void)setCoordinate:(struct ?)arg0;
- (double)accuracy;

@end

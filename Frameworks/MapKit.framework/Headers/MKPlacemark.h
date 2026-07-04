/* Runtime dump - MKPlacemark
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlacemark : CLPlacemark <MKAnnotation>

@property (readonly, nonatomic) NSString * countryCode;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) struct ? coordinate;
@property (readonly, copy, nonatomic) NSString * title;
@property (readonly, copy, nonatomic) NSString * subtitle;

- (MKPlacemark *)initWithCoordinate:(struct ?)arg0 addressDictionary:(NSDictionary *)arg1;
- (NSString *)title;
- (NSString *)thoroughfare;
- (NSString *)countryCode;
- (struct ?)coordinate;

@end

/* Runtime dump - MKLocalSearchResponse
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKLocalSearchResponse : NSObject
{
    NSArray * _mapItems;
    struct ? _boundingRegion;
}

@property (readonly, nonatomic) NSArray * mapItems;
@property (readonly, nonatomic) struct ? boundingRegion;

- (NSArray *)mapItems;
- (struct ?)boundingRegion;
- (NSArray *)_initWithMapItems:(NSArray *)arg0 boundingRegion:(struct ?)arg1;
- (NSDictionary *)_dictionaryRepresentation;
- (NSString *)description;
- (void).cxx_destruct;

@end

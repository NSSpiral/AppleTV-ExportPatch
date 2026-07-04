/* Runtime dump - SALocalSearchMapViewportVertex
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchMapViewportVertex : AceObject <SAAceSerializable>

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SALocalSearchMapViewportVertex *)mapViewportVertex;
+ (NSDictionary *)mapViewportVertexWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setLatitude:(double)arg0;
- (void)setLongitude:(double)arg0;
- (double)latitude;
- (double)longitude;
- (NSString *)encodedClassName;

@end

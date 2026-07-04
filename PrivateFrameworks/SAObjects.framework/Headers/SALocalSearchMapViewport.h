/* Runtime dump - SALocalSearchMapViewport
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchMapViewport : AceObject <SAAceSerializable>

@property (nonatomic) double eastLongitude;
@property (nonatomic) double northLatitude;
@property (nonatomic) double southLatitude;
@property (nonatomic) double timeInSecondsSinceViewportChanged;
@property (nonatomic) double timeInSecondsSinceViewportEnteredForeground;
@property (copy, nonatomic) NSArray * vertices;
@property (nonatomic) double westLongitude;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SALocalSearchMapViewport *)mapViewport;
+ (NSDictionary *)mapViewportWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setVertices:(NSArray *)arg0;
- (NSString *)encodedClassName;
- (double)eastLongitude;
- (void)setEastLongitude:(double)arg0;
- (double)northLatitude;
- (void)setNorthLatitude:(double)arg0;
- (double)southLatitude;
- (void)setSouthLatitude:(double)arg0;
- (double)timeInSecondsSinceViewportChanged;
- (void)setTimeInSecondsSinceViewportChanged:(double)arg0;
- (double)timeInSecondsSinceViewportEnteredForeground;
- (void)setTimeInSecondsSinceViewportEnteredForeground:(double)arg0;
- (double)westLongitude;
- (void)setWestLongitude:(double)arg0;
- (NSArray *)vertices;

@end

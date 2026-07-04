/* Runtime dump - SALocalSearchAceNavigationEta
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchAceNavigationEta : AceObject <SAAceSerializable>

@property (retain, nonatomic) SADistance * distanceEta;
@property (retain, nonatomic) SADuration * timeEta;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SALocalSearchAceNavigationEta *)aceNavigationEta;
+ (NSDictionary *)aceNavigationEtaWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (SADistance *)distanceEta;
- (void)setDistanceEta:(SADistance *)arg0;
- (SADuration *)timeEta;
- (void)setTimeEta:(SADuration *)arg0;

@end

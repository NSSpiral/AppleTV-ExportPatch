/* Runtime dump - SALocalSearchGetNavigationStatusCompleted
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchGetNavigationStatusCompleted : SABaseCommand <SAServerBoundCommand>

@property (retain, nonatomic) SALocalSearchAceNavigationEta * nextManeuverEta;
@property (retain, nonatomic) SALocalSearchAceNavigationEta * overallEta;
@property (retain, nonatomic) SALocalSearchRoute * route;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SALocalSearchGetNavigationStatusCompleted *)getNavigationStatusCompleted;
+ (NSDictionary *)getNavigationStatusCompletedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (SALocalSearchAceNavigationEta *)nextManeuverEta;
- (void)setNextManeuverEta:(SALocalSearchAceNavigationEta *)arg0;
- (SALocalSearchAceNavigationEta *)overallEta;
- (void)setOverallEta:(SALocalSearchAceNavigationEta *)arg0;
- (void)setRoute:(SALocalSearchRoute *)arg0;
- (SALocalSearchRoute *)route;

@end

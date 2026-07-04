/* Runtime dump - SALocalSearchNavigationPromptManeuver
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchNavigationPromptManeuver : SADomainCommand

@property (copy, nonatomic) NSNumber * maneuverIndex;

+ (SALocalSearchNavigationPromptManeuver *)navigationPromptManeuver;
+ (NSDictionary *)navigationPromptManeuverWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSNumber *)maneuverIndex;
- (void)setManeuverIndex:(NSNumber *)arg0;

@end

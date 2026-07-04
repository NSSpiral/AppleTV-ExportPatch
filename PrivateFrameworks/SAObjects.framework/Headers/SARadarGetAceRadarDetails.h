/* Runtime dump - SARadarGetAceRadarDetails
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SARadarGetAceRadarDetails : SABaseClientBoundCommand

+ (SARadarGetAceRadarDetails *)getAceRadarDetails;
+ (NSDictionary *)getAceRadarDetailsWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end

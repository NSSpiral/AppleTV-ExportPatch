/* Runtime dump - SARadarGetAceRadarCredentials
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SARadarGetAceRadarCredentials : SABaseClientBoundCommand

+ (SARadarGetAceRadarCredentials *)getAceRadarCredentials;
+ (NSDictionary *)getAceRadarCredentialsWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end

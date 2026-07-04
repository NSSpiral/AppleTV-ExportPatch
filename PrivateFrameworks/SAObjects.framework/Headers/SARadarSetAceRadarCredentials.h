/* Runtime dump - SARadarSetAceRadarCredentials
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SARadarSetAceRadarCredentials : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSString * originatorUsername;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SARadarSetAceRadarCredentials *)setAceRadarCredentials;
+ (NSDictionary *)setAceRadarCredentialsWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSString *)originatorUsername;
- (void)setOriginatorUsername:(NSString *)arg0;

@end

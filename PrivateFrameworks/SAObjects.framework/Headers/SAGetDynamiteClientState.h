/* Runtime dump - SAGetDynamiteClientState
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGetDynamiteClientState : SABaseClientBoundCommand <SAGetSingleClientState>

@property (retain, nonatomic) SADynamiteClientState * clientState;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;
@property (copy, nonatomic) NSString * appId;
@property (copy, nonatomic) NSArray * callbacks;

+ (NSObject *)getDynamiteClientState;
+ (NSDictionary *)getDynamiteClientStateWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (SADynamiteClientState *)clientState;
- (void)setClientState:(SADynamiteClientState *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end

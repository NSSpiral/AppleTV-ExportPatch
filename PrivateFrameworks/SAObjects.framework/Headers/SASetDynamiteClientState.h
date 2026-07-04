/* Runtime dump - SASetDynamiteClientState
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASetDynamiteClientState : SABaseCommand <SAServerBoundCommand, SASetSingleClientState>

@property (retain, nonatomic) SADynamiteClientState * clientState;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (NSObject *)setDynamiteClientState;
+ (NSDictionary *)setDynamiteClientStateWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (SADynamiteClientState *)clientState;
- (void)setClientState:(SADynamiteClientState *)arg0;
- (NSString *)encodedClassName;

@end

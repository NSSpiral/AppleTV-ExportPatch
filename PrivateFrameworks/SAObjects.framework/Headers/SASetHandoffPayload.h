/* Runtime dump - SASetHandoffPayload
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASetHandoffPayload : SABaseClientBoundCommand

@property (retain, nonatomic) <SAHandoffPayload> * handoffPayload;

+ (NSData *)setHandoffPayload;
+ (NSDictionary *)setHandoffPayloadWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (<SAHandoffPayload> *)handoffPayload;
- (void)setHandoffPayload:(<SAHandoffPayload> *)arg0;

@end

/* Runtime dump - SASessionHandoffPayload
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASessionHandoffPayload : AceObject <SAHandoffPayload>

@property (copy, nonatomic) NSData * sessionHandoffData;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSData *)sessionHandoffPayload;
+ (NSDictionary *)sessionHandoffPayloadWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSData *)sessionHandoffData;
- (void)setSessionHandoffData:(NSData *)arg0;

@end

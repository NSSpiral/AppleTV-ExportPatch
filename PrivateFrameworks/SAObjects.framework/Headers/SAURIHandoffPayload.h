/* Runtime dump - SAURIHandoffPayload
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAURIHandoffPayload : AceObject <SAHandoffPayload>

@property (copy, nonatomic) NSURL * link;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSData *)uRIHandoffPayload;
+ (NSDictionary *)uRIHandoffPayloadWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setLink:(NSURL *)arg0;
- (NSURL *)link;
- (NSString *)encodedClassName;

@end

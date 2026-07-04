/* Runtime dump - SACommandSupport
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACommandSupport : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSString * aceVersion;
@property (copy, nonatomic) NSString * commandId;
@property (retain, nonatomic) SAObjectSupport * resultSupport;
@property (copy, nonatomic) NSURL * serverEndpoint;
@property (copy, nonatomic) NSArray * supportedConstraints;
@property (nonatomic) int weight;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SACommandSupport *)commandSupport;
+ (NSDictionary *)commandSupportWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (int)weight;
- (void)setWeight:(int)arg0;
- (NSString *)encodedClassName;
- (NSString *)aceVersion;
- (void)setAceVersion:(NSString *)arg0;
- (NSString *)commandId;
- (void)setCommandId:(NSString *)arg0;
- (SAObjectSupport *)resultSupport;
- (void)setResultSupport:(SAObjectSupport *)arg0;
- (NSURL *)serverEndpoint;
- (void)setServerEndpoint:(NSURL *)arg0;
- (NSArray *)supportedConstraints;
- (void)setSupportedConstraints:(NSArray *)arg0;

@end

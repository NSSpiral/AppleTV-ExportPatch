/* Runtime dump - SAStarkSupport
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAStarkSupport : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSArray * supportedModes;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SAStarkSupport *)starkSupport;
+ (NSDictionary *)starkSupportWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSArray *)supportedModes;
- (NSString *)encodedClassName;
- (void)setSupportedModes:(NSArray *)arg0;

@end

/* Runtime dump - SAOperation
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAOperation : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSDictionary * constraints;
@property (copy, nonatomic) NSString * domainId;
@property (copy, nonatomic) NSString * operationId;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)operation;
+ (NSDictionary *)operationWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSDictionary *)constraints;
- (void)setConstraints:(NSDictionary *)arg0;
- (NSString *)encodedClassName;
- (NSString *)domainId;
- (void)setDomainId:(NSString *)arg0;
- (NSString *)operationId;
- (void)setOperationId:(NSString *)arg0;

@end

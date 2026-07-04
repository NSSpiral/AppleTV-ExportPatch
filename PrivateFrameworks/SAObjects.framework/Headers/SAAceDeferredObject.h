/* Runtime dump - SAAceDeferredObject
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAceDeferredObject : SABaseCommand <SAAceSerializable, SAAceCommand, SAClientBoundCommand, SAServerBoundCommand>

@property (copy, nonatomic) NSString * key;
@property (retain, nonatomic) <SAAceSerializable> * value;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;
@property (copy, nonatomic) NSString * appId;
@property (copy, nonatomic) NSArray * callbacks;

+ (NSObject *)aceDeferredObject;
+ (NSDictionary *)aceDeferredObjectWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)key;
- (<SAAceSerializable> *)value;
- (void)setValue:(<SAAceSerializable> *)arg0;
- (void)setKey:(NSString *)arg0;
- (NSArray *)callbacks;
- (void)setCallbacks:(NSArray *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSString *)appId;
- (void)setAppId:(NSString *)arg0;

@end

/* Runtime dump - SAUISayIt
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUISayIt : SABaseClientBoundCommand

@property (retain, nonatomic) <SAAceSerializable> * context;
@property (copy, nonatomic) NSNumber * listenAfterSpeaking;
@property (copy, nonatomic) NSString * message;

+ (SAUISayIt *)sayIt;
+ (NSDictionary *)sayItWithDictionary:(NSDictionary *)arg0 context:(<SAAceSerializable> *)arg1;

- (NSString *)groupIdentifier;
- (<SAAceSerializable> *)context;
- (void)setContext:(<SAAceSerializable> *)arg0;
- (NSString *)message;
- (void)setMessage:(NSString *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSNumber *)listenAfterSpeaking;
- (void)setListenAfterSpeaking:(NSNumber *)arg0;

@end

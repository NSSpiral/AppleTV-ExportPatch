/* Runtime dump - SALocalSearchSendToProtobufConduitCompleted
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchSendToProtobufConduitCompleted : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSData * rawResponse;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SALocalSearchSendToProtobufConduitCompleted *)sendToProtobufConduitCompleted;
+ (NSDictionary *)sendToProtobufConduitCompletedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSData *)rawResponse;
- (void)setRawResponse:(NSData *)arg0;

@end

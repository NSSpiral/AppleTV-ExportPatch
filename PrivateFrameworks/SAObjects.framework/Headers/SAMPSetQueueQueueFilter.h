/* Runtime dump - SAMPSetQueueQueueFilter
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPSetQueueQueueFilter : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSString * mediaItemProperty;
@property (copy, nonatomic) NSString * operation;
@property (copy, nonatomic) NSString * value;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)setQueueQueueFilter;
+ (NSDictionary *)setQueueQueueFilterWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)operation;
- (void)setOperation:(NSString *)arg0;
- (NSString *)value;
- (void)setValue:(NSString *)arg0;
- (NSString *)encodedClassName;
- (NSString *)mediaItemProperty;
- (void)setMediaItemProperty:(NSString *)arg0;

@end

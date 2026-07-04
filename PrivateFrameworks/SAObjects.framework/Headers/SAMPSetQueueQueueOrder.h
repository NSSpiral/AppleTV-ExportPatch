/* Runtime dump - SAMPSetQueueQueueOrder
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPSetQueueQueueOrder : AceObject <SAAceSerializable>

@property (nonatomic) char descending;
@property (copy, nonatomic) NSString * mediaItemProperty;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SAMPSetQueueQueueOrder *)setQueueQueueOrder;
+ (NSDictionary *)setQueueQueueOrderWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSString *)mediaItemProperty;
- (void)setMediaItemProperty:(NSString *)arg0;
- (char)descending;
- (void)setDescending:(char)arg0;

@end

/* Runtime dump - SAMPNowPlayingQueuePosition
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPNowPlayingQueuePosition : AceObject <SAAceSerializable>

@property (nonatomic) int index;
@property (nonatomic) int queueSize;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)nowPlayingQueuePosition;
+ (NSDictionary *)nowPlayingQueuePositionWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (int)index;
- (void)setIndex:(int)arg0;
- (NSString *)encodedClassName;
- (int)queueSize;
- (void)setQueueSize:(int)arg0;

@end

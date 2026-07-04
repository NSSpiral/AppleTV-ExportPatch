/* Runtime dump - EKPersistentChangeStoreRowInfo
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentChangeStoreRowInfo : NSObject
{
    NSString * _clientIdentifier;
    int _consumedSequenceNumber;
}

@property (retain, nonatomic) NSString * clientIdentifier;
@property (nonatomic) int consumedSequenceNumber;

- (NSString *)clientIdentifier;
- (int)consumedSequenceNumber;
- (void)setConsumedSequenceNumber:(int)arg0;
- (void)dealloc;
- (NSString *)description;
- (void)setClientIdentifier:(NSString *)arg0;

@end

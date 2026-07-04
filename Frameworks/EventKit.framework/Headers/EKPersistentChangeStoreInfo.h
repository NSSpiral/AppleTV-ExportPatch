/* Runtime dump - EKPersistentChangeStoreInfo
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentChangeStoreInfo : NSObject
{
    int _minConsumedSequenceNumber;
    NSString * _minConsumedClientIdentifier;
    int _secondMinConsumedSequenceNumber;
}

@property (nonatomic) int minConsumedSequenceNumber;
@property (retain, nonatomic) NSString * minConsumedClientIdentifier;
@property (nonatomic) int secondMinConsumedSequenceNumber;

- (NSString *)minConsumedClientIdentifier;
- (int)minConsumedSequenceNumber;
- (int)secondMinConsumedSequenceNumber;
- (void)setMinConsumedSequenceNumber:(int)arg0;
- (void)setMinConsumedClientIdentifier:(NSString *)arg0;
- (void)setSecondMinConsumedSequenceNumber:(int)arg0;
- (void)dealloc;
- (NSString *)description;

@end

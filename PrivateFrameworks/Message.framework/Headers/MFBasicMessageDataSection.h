/* Runtime dump - MFBasicMessageDataSection
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFBasicMessageDataSection : NSObject <MFMessageDataSection>
{
    NSData * _data;
    char _complete;
    char _partial;
    NSString * _partName;
}

@property (nonatomic) char partial;
@property (nonatomic) char complete;
@property (retain, nonatomic) NSData * data;
@property (retain, nonatomic) NSString * partName;

- (void)dealloc;
- (NSData *)data;
- (void)setData:(NSData *)arg0;
- (void)setComplete:(char)arg0;
- (char)isComplete;
- (char)isPartial;
- (NSString *)partName;
- (void)setPartial:(char)arg0;
- (void)setPartName:(NSString *)arg0;

@end

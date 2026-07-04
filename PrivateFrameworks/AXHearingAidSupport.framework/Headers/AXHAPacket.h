/* Runtime dump - AXHAPacket
 * Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXHAPacket : NSObject
{
    unsigned int _totalLength;
    NSMutableData * _data;
}

@property (retain, nonatomic) NSMutableData * data;

+ (NSData *)packetDataWithPayload:(NSData *)arg0;
+ (struct ?)headerFromData:(NSData *)arg0;
+ (NSString *)packetWithHeader:(struct ?)arg0;

- (void)dealloc;
- (NSMutableData *)data;
- (void)setData:(NSMutableData *)arg0;
- (NSData *)appendData:(NSData *)arg0;
- (NSData *)objectPayload;
- (unsigned int)missingLength;
- (AXHAPacket *)initWithHeader:(struct ?)arg0;
- (NSData *)dataPayload;

@end

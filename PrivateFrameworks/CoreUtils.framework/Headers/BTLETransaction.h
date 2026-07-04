/* Runtime dump - BTLETransaction
 * Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface BTLETransaction : NSObject
{
    NSString * _identifier;
    CBATTRequest * _request;
    NSString * _replyCharacteristic;
    NSData * _replyData;
    char _waitingToUpdate;
}

@property (readonly, nonatomic) NSString * requestCharacteristic;
@property (copy, nonatomic) NSData * requestData;
@property (copy, nonatomic) NSString * replyCharacteristic;
@property (copy, nonatomic) NSData * replyData;
@property (copy, nonatomic) NSString * identifier;
@property (retain, nonatomic) CBATTRequest * request;
@property (nonatomic) char waitingToUpdate;

- (void)dealloc;
- (NSString *)identifier;
- (CBATTRequest *)request;
- (void)setIdentifier:(NSString *)arg0;
- (void)setRequestData:(NSData *)arg0;
- (NSData *)requestData;
- (NSData *)replyData;
- (char)waitingToUpdate;
- (NSString *)replyCharacteristic;
- (void)setWaitingToUpdate:(char)arg0;
- (NSString *)requestCharacteristic;
- (void)setReplyCharacteristic:(NSString *)arg0;
- (void)setReplyData:(NSData *)arg0;
- (void)setRequest:(CBATTRequest *)arg0;

@end

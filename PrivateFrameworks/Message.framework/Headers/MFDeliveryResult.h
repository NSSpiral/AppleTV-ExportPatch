/* Runtime dump - MFDeliveryResult
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDeliveryResult : NSObject
{
    int _status;
    double _duration;
    unsigned int _bytesSent;
    char _isWifi;
}

@property (nonatomic) int status;
@property (nonatomic) double duration;
@property (nonatomic) unsigned int bytesSent;
@property (nonatomic) char isWifi;

- (NSString *)description;
- (double)duration;
- (void)setDuration:(double)arg0;
- (int)status;
- (void)setStatus:(int)arg0;
- (MFDeliveryResult *)initWithStatus:(int)arg0;
- (void)setBytesSent:(unsigned int)arg0;
- (unsigned int)bytesSent;
- (char)isWifi;
- (void)setIsWifi:(char)arg0;

@end

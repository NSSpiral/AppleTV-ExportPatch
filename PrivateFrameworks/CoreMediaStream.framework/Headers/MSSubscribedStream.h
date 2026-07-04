/* Runtime dump - MSSubscribedStream
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSSubscribedStream : NSObject <NSCoding>
{
    NSString * _streamID;
    NSString * _ctag;
}

@property (retain, nonatomic) NSString * streamID;
@property (retain, nonatomic) NSString * ctag;

+ (NSObject *)subscribedStreamWithStreamID:(NSString *)arg0;

- (MSSubscribedStream *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (void).cxx_destruct;
- (NSString *)ctag;
- (NSString *)streamID;
- (void)setCtag:(NSString *)arg0;
- (MSSubscribedStream *)initWithStreamID:(NSString *)arg0;
- (void)setStreamID:(NSString *)arg0;

@end

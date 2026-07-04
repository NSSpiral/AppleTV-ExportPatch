/* Runtime dump - MFBaseFilterDataConsumer
 * Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFBaseFilterDataConsumer : NSObject <MFDataConsumer>
{
    NSMutableArray * _consumers;
    char _serialAppend;
}

@property (nonatomic) char serialAppend;
@property (readonly, nonatomic) NSArray * consumers;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (MFBaseFilterDataConsumer *)filterWithConsumers:(NSArray *)arg0;
+ (NSObject *)filterWithConsumer:(NSObject *)arg0;

- (void)dealloc;
- (void)done;
- (int)appendData:(NSData *)arg0;
- (char)isSerialAppend;
- (void)setSerialAppend:(char)arg0;
- (MFBaseFilterDataConsumer *)initWithConsumers:(NSArray *)arg0;
- (NSArray *)consumers;
- (MFBaseFilterDataConsumer *)initWithConsumer:(NSObject *)arg0;

@end

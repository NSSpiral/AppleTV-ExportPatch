/* Runtime dump - MFMutableFilterDataConsumer
 * Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFMutableFilterDataConsumer : MFBaseFilterDataConsumer <MFGuaranteedCollectingDataConsumer>
{
    <MFGuaranteedCollectingDataConsumer> * _mainConsumer;
    MFLock * _consumerLock;
    char _isDone;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (NSData *)data;
- (void)done;
- (int)appendData:(NSData *)arg0;
- (void)addDataConsumer:(NSObject *)arg0;
- (MFMutableFilterDataConsumer *)initWithMainConsumer:(<MFGuaranteedCollectingDataConsumer> *)arg0;

@end

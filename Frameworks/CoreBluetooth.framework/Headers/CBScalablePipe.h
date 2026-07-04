/* Runtime dump - CBScalablePipe
 * Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBScalablePipe : NSObject
{
    CBScalablePipeManager * _pipeManager;
    CBCentral * _central;
    NSString * _name;
    int _type;
    int _priority;
    int _socket;
    NSInputStream * _input;
    NSOutputStream * _output;
}

@property (readonly, nonatomic) CBCentral * central;
@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) int priority;
@property (readonly, nonatomic) NSInputStream * input;
@property (readonly, nonatomic) NSOutputStream * output;

- (NSOutputStream *)output;
- (void)setOrphan;
- (CBScalablePipe *)initWithPipeManager:(CBScalablePipeManager *)arg0 info:(NSDictionary *)arg1;
- (void)dealloc;
- (NSString *)description;
- (NSString *)name;
- (int)type;
- (NSInputStream *)input;
- (int)priority;
- (CBCentral *)central;

@end

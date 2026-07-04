/* Runtime dump - SCRDKGSPacket
 * Image: /System/Library/PrivateFrameworks/ScreenReaderBrailleDriver.framework/ScreenReaderBrailleDriver
 */

@interface SCRDKGSPacket : NSObject
{
    unsigned char _command;
    unsigned char _subCommand;
    NSData * _data;
}

@property (nonatomic) unsigned char command;
@property (nonatomic) unsigned char subCommand;
@property (retain, nonatomic) NSData * data;

- (unsigned char)command;
- (void)dealloc;
- (NSData *)data;
- (void)setData:(NSData *)arg0;
- (void)setCommand:(unsigned char)arg0;
- (unsigned char)subCommand;
- (void)setSubCommand:(unsigned char)arg0;

@end

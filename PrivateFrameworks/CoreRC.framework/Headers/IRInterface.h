/* Runtime dump - IRInterface
 * Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface IRInterface : CoreRCInterface
{
    <IRInterfaceDelegate> * _delegate;
}

@property (nonatomic) <IRInterfaceDelegate> * delegate;
@property (readonly, nonatomic) NSArray * buttons;
@property (readonly, nonatomic) unsigned int maxStoredCommands;

- (void)setDelegate:(<IRInterfaceDelegate> *)arg0;
- (<IRInterfaceDelegate> *)delegate;
- (NSArray *)buttons;
- (void)receivedFrame:(struct CECFrame)arg0;
- (char)transmitCommand:(NSObject *)arg0 pressDuration:(double)arg1 error:(id *)arg2;
- (void)receivedCommand:(NSObject *)arg0;
- (void)receivedHIDEvent:(NSObject *)arg0;
- (unsigned int)maxStoredCommands;
- (char)transmitFrame:(NSObject *)arg0 error:(id *)arg1;
- (char)clearAllStoredCommands:(id *)arg0;
- (char)setCommand:(NSObject *)arg0 forButtonCombination:(id)arg1 delay:(double)arg2 error:(id *)arg3;
- (char)resetAllButtons:(id *)arg0;

@end

/* Runtime dump - SCROBrailleStealthDriver
 * Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@interface SCROBrailleStealthDriver : NSObject <SCROBrailleDriverProtocol>
{
    char _isDriverLoaded;
    NSString * _modelIdentifier;
    int _mainSize;
    int _statusSize;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (SCROBrailleStealthDriver *)init;
- (NSString *)modelIdentifier;
- (unsigned int)interfaceVersion;
- (int)loadDriverWithIOElement:(NSObject *)arg0;
- (char)unloadDriver;
- (char)isDriverLoaded;
- (char)isSleeping;
- (char)supportsBlinkingCursor;
- (char)isInputEnabled;
- (char)postsKeyboardEvents;
- (int)brailleInputMode;
- (NSArray *)getInputEvents;
- (int)mainSize;
- (int)statusSize;
- (char)setMainCells:(char *)arg0 length:(int)arg1;
- (char)setStatusCells:(char *)arg0 length:(int)arg1;

@end

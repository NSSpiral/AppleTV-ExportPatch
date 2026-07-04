/* Runtime dump - SCROBrailleLine
 * Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@interface SCROBrailleLine : NSObject
{
    <SCROBrailleDriverProtocol> * _brailleDriver;
    int _size;
    int _statusSize;
    int _insetSize;
    int _lineOffset;
    int _leftInset;
    int _rightInset;
    int _masterStatusCellIndex;
    int _iBeamLocation;
    int _displayMode;
    int _lineFocus;
    char _displayEnabled;
    char _needsDisplayFlush;
    char _needsStatusFlush;
    char _needsFocusFlush;
    char _blink;
    char _currentUnread;
    char _anyUnread;
    char _isPanning;
    char _showDotsSevenAndEight;
    char * _displayBuffer;
    char * _displayFilter;
    char * _blinkerBuffer;
    char * _statusFilter;
    NSData * _statusData;
    struct __CFArray * _chunkArray;
    struct __CFDictionary * _chunkDictionary;
    NSMutableAttributedString * _lineBuffer;
    id _appToken;
    int _firstToken;
    int _lastToken;
    struct ? _virtualStatus;
}

@property (readonly, nonatomic) char needsDisplayFlush;
@property (nonatomic) char displayEnabled;

+ (void)initialize;

- (void)setFormatter:(NSObject *)arg0;
- (void)dealloc;
- (char)display;
- (int)displayMode;
- (void)setDisplayMode:(int)arg0;
- (SCROBrailleLine *)initWithDriver:(MFPhoneDeviceDriver *)arg0 mainSize:(int)arg1 statusSize:(int)arg2;
- (void)setDisplayEnabled:(char)arg0;
- (id)newLineDescriptorscriptor;
- (int)tokenForRouterIndex:(int)arg0 location:(int *)arg1 appToken:(id *)arg2;
- (char)anyUnread;
- (char)currentUnread;
- (char)canPanLeft;
- (char)canPanRight;
- (void)setLineFocus:(int)arg0;
- (void)setVirtualStatus:(struct ?)arg0 alignment:(int)arg1;
- (void)setMasterStatusCellIndex:(int)arg0;
- (void)setRealStatus:(id)arg0;
- (void)setMainSize:(int)arg0;
- (void)setStatusSize:(int)arg0;
- (char)panLeft;
- (NSString *)appToken;
- (int)firstToken;
- (char)panRight;
- (int)lastToken;
- (char)getStatusRouterIndex:(int *)arg0 forRawIndex:(int)arg1;
- (void)blinker;
- (char)needsDisplayFlush;
- (int)masterStatusCellIndex;
- (void)setCurrentUnread:(char)arg0;
- (void)setAnyUnread:(char)arg0;
- (void)setAppToken:(NSString *)arg0;
- (void)setShowDotsSevenAndEight:(char)arg0;
- (char)showDotsSevenAndEight;
- (int)lineFocus;
- (void)_updateOffsets;
- (char)_allowInset;
- (char)_blink:(char)arg0;
- (void)_flushRealStatus;
- (char)displayEnabled;
- (void)_flush;

@end
